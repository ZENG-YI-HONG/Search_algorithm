#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // 回傳找到的索引
        }
    }
    return -1; // 未找到
}

int main() {
    int arr[] = {3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = linearSearch(arr, n, target);
    if (result != -1) {
        cout << "元素找到，索引為: " << result << endl;
    } else {
        cout << "元素未找到" << endl;
    }

    return 0;
}

