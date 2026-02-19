class MyCircularQueue {
private:
    vector<int> arr;
    int front, rare;
    int sz, cap;
public:
    MyCircularQueue(int k) {
        cap = k;
        arr.resize(k);
        front = 0;
        rare = -1;
        sz = 0;
        
    }
    
    bool enQueue(int value) {

        if(isFull()) return false;

        rare = (rare + 1) % cap;
        arr[rare] = value;
        sz++;
        return true;
        
    }
    
    bool deQueue() {

        if(isEmpty()) return false;

        front = (front + 1) % cap;
        sz--;
        return true;
        
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return arr[front];
        
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return arr[rare];
        
    }
    
    bool isEmpty() {

        return sz == 0;
        
    }
    
    bool isFull() {

        return sz == cap;
        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
