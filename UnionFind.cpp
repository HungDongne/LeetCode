#include <bits/stdc++.h>

using namespace std;
class UnionFind {
    public:
    int n;
    vector<int> parent;
    vector <int> size;
    UnionFind(int n) {
        this->n = n;
        parent.resize(n);
        size.resize(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }
    int find(int index) {
        if (parent[index] == index) {
            return index;
        }
        return find(parent[index]);
    }
    void merge(int a, int b) {
        a = find(a);
        b = find(b);
        if (a != b) {
            if (size[a] < size[b]) {
                swap(a, b);
            }
            parent[b] = a;
            size[a] += size[b];
        }
    }
    void clear() {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }
};