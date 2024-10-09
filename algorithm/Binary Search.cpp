#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // �p�G�ؼЭȵ��󤤶���
        if (arr[mid] == target) {
            return mid;
        }

        // �p�G�ؼЭȤp�󤤶��ȡA�j�M���b����
        if (arr[mid] > target) {
            right = mid - 1;
        }
        // �p�G�ؼЭȤj�󤤶��ȡA�j�M�k�b����
        else {
            left = mid + 1;
        }
    }

    return -1; // �����
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        cout << "�������A���ެ�: " << result << endl;
    } else {
        cout << "���������" << endl;
    }

    return 0;
}

