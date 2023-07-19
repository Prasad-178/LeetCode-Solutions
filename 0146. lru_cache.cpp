#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    return 0;
}

class LRUCache {
public:
    int c;
    int time=0;
    unordered_map <int, pair<int, int>> m;
    set <pair<int, int>> s;
    
    LRUCache(int capacity) {
        c=capacity;
    }
    
    int get(int key) {
        if (m.find(key) == m.end()) return -1;
        
        int prev_time = m[key].second;
        time++;
        s.erase(s.find({prev_time, key}));
        
        m[key] = {m[key].first, time};
        s.insert({time, key});
        
        return m[key].first;
    }
    
    void put(int key, int value) {
        if (m.find(key) == m.end()) {
            if (m.size()==c) {
                pair <int, int> p = *s.begin();
                s.erase(s.begin());
                m.erase(p.second);
            }
        }
        else {
            pair <int, int> p = m[key];
            s.erase({p.second, key});
        }
        time++;
        m[key] = {value, time};
        s.insert({time, key});
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */