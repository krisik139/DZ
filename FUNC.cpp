#include <iostream>
using namespace std;

const int colums = 4;

int findMax1(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int findMax2(int arr[][colums], int rows) {
    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colums; j++) {
            if (arr[i][j] > max) max = arr[i][j];
        }
    }
    return max;
}

int main() {
    int arr1[5] = { 3, 8, 1, 12, 5 };
    cout << "Максимально у 1D: " << findMax1(arr1, 5) << endl;

    int arr2[3][colums] = {
        {1, 5, 3, 2},
        {8, 14, 7, 0},
        {4, 6, 9, 11}
    };
    cout << "Максимально у 2D: " << findMax2(arr2, 3) << endl;

    return 0;
}