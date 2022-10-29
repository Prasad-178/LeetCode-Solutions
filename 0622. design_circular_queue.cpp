#include <bits/stdc++.h>
#include <vector>
using namespace std;

class MyCircularQueue {
public:
    int front;
    int back;
    vector <int> q;
    int maxSize;
    int size;
    MyCircularQueue(int k) {
        q.resize(k);
        size = 0;
        front = 0;
        back = -1;
        maxSize = k;
    }
    
    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        if (++back == maxSize) {
            back=0;
        }
        
        q[back] = value;
        ++size;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        if (++front == maxSize) {
            front=0;
        }
        size--;
        return true;
    }
    
    int Front() {
        if (isEmpty()) {
            return -1;
        }
        else {
            return q[front];
        }
    }
    
    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        else {
            return q[back];
        }
    }
    
    bool isEmpty() {
        if (size == 0) {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if (size == maxSize) {
            return true;
        }
        return false;
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