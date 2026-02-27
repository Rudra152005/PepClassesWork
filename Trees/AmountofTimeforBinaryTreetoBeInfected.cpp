class Solution {
public:
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*, TreeNode*> parent;
        TreeNode* startNode = nullptr;
        
        
        function<void(TreeNode*, TreeNode*)> dfs = [&](TreeNode* node, TreeNode* par) {
            if (!node) return;
            parent[node] = par;
            if (node->val == start)
                startNode = node;
            dfs(node->left, node);
            dfs(node->right, node);
        };
        
        dfs(root, nullptr);
        
        
        queue<TreeNode*> q;
        unordered_set<TreeNode*> visited;
        
        q.push(startNode);
        visited.insert(startNode);
        
        int minutes = -1;
        
        while (!q.empty()) {
            int size = q.size();
            minutes++;
            
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                
                
                if (node->left && !visited.count(node->left)) {
                    visited.insert(node->left);
                    q.push(node->left);
                }
                
                
                if (node->right && !visited.count(node->right)) {
                    visited.insert(node->right);
                    q.push(node->right);
                }
                
                
                if (parent[node] && !visited.count(parent[node])) {
                    visited.insert(parent[node]);
                    q.push(parent[node]);
                }
            }
        }
        
        return minutes;
    }
};
