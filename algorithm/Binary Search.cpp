#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // 如果目標值等於中間值
        if (arr[mid] == target) {
            return mid;
        }

        // 如果目標值小於中間值，搜尋左半部分
        if (arr[mid] > target) {
            right = mid - 1;
        }
        // 如果目標值大於中間值，搜尋右半部分
        else {
            left = mid + 1;
        }
    }

    return -1; // 未找到
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        cout << "元素找到，索引為: " << result << endl;
    } else {
        cout << "元素未找到" << endl;
    }

    return 0;
}

