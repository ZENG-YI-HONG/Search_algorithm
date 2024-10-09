#include <iostream>
#include <vector>
using namespace std;

void DFS(int v, vector<bool>& visited, const vector<vector<int>>& graph) {
    // 記錄節點已訪問
    visited[v] = true;
    cout << v << " ";

    // 遞迴訪問相鄰的節點
    for (int i : graph[v]) {
        if (!visited[i]) {
            DFS(i, visited, graph);
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

    int V = graph.size();
    vector<bool> visited(V, false);

    cout << "深度優先搜尋 (DFS) 起始於節點 0:" << endl;
    DFS(0, visited, graph);

    return 0;
}

