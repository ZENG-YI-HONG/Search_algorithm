#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // �^�ǧ�쪺����
        }
    }
    return -1; // �����
}

int main() {
    int arr[] = {3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = linearSearch(arr, n, target);
    if (result != -1) {
        cout << "�������A���ެ�: " << result << endl;
    } else {
        cout << "���������" << endl;
    }

    return 0;
}

