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
    // �d�ҹϪ��F������
    vector<vector<int>> graph = {
        {1, 2},   // 0���`�I�s����1�M2
        {0, 3, 4}, // 1���`�I�s����0, 3, 4
        {0},     // 2���`�I�s����0
        {1},     // 3���`�I�s����1
        {1}      // 4���`�I�s����1
    };

    cout << "�s���u���j�M (BFS) �_�l��`�I 0:" << endl;
    BFS(0, graph);

    return 0;
}

