#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> adj;

vector<int> pruefer_code() {
    int n = adj.size();
    priority_queue<int, vector<int>, greater<int>> leafs;
    vector<int> degree(n);
    vector<bool> killed(n, false);
    for (int i = 0; i < n; i++) {
        degree[i] = adj[i].size();
        if (degree[i] == 1)
            leafs.push(i);
    }

    vector<int> code(n - 2);
    for (int i = 0; i < n - 2; i++) {
        int leaf = leafs.top();
        leafs.pop();
        killed[leaf] = true;

        int v;
        for (int u : adj[leaf]) {
            if (!killed[u])
                v = u;
        }

        code[i] = v;
        if (--degree[v] == 1)
            leafs.push(v);
    }

    return code;
}



int main() {
    adj.resize(4);
    
}
