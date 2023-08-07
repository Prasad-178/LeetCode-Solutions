#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class MinStack {
public:
    stack <int> s;
    map <int, int> m;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        m[val]++;
    }
    
    void pop() {
        int topElem = s.top();
        if (!s.empty()) s.pop();
        if (m.find(topElem) != m.end()) m[topElem]--;
        if (m[topElem]==0) m.erase(topElem);
    }
    
    int top() {
        if (s.empty()) return -1;
        return s.top();
    }
    
    int getMin() {
        auto it = m.begin();
        return (*it).first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */