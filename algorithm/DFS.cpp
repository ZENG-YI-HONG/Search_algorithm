#include <iostream>
#include <vector>
using namespace std;

void DFS(int v, vector<bool>& visited, const vector<vector<int>>& graph) {
    // �O���`�I�w�X��
    visited[v] = true;
    cout << v << " ";

    // ���j�X�ݬ۾F���`�I
    for (int i : graph[v]) {
        if (!visited[i]) {
            DFS(i, visited, graph);
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

    int V = graph.size();
    vector<bool> visited(V, false);

    cout << "�`���u���j�M (DFS) �_�l��`�I 0:" << endl;
    DFS(0, visited, graph);

    return 0;
}

