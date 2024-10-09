#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(int v, const vector<vector<int>>& graph) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;

    visited[v] = true;
    q.push(v);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int i : graph[node]) {
            if (!visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main() {
    // 範例圖的鄰接表表示
    vector<vector<int>> graph = {
        {1, 2},   // 0號節點連接到1和2
        {0, 3, 4}, // 1號節點連接到0, 3, 4
        {0},     // 2號節點連接到0
        {1},     // 3號節點連接到1
        {1}      // 4號節點連接到1
    };

    cout << "廣度優先搜尋 (BFS) 起始於節點 0:" << endl;
    BFS(0, graph);

    return 0;
}

