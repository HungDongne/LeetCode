#include <bits/stdc++.h>

using namespace std;

class RandomizedSet {
public:
    set<int> s;
    RandomizedSet() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        s.clear();
    }

    bool insert(int val) {
        if (s.find(val) != s.end()){
            return false;
        }
        s.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if (s.find(val) == s.end()){
            return false;
        }
        s.erase(val);
        return true;
    }
    
    int getRandom() {
        int n = s.size();
        int r = rand() % n;
        auto it = s.begin();
        advance(it, r);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */