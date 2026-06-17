#include <iostream>
#include <vector>

void flip(std::vector<int>& arr, int k) {
    for (int i = 0; i <= k / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[k - i];
        arr[k - i] = temp;
    }
}

void pancakeSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int curr_size = n; curr_size > 1; --curr_size) {
        int max_idx = 0;
        for (int i = 0; i < curr_size; ++i) {
            if (arr[i] > arr[max_idx]) {
                max_idx = i;
            }
        }
        if (max_idx != curr_size - 1) {
            if (max_idx != 0) {
                flip(arr, max_idx);
            }
            flip(arr, curr_size - 1);
        }
    }
}

int main() {
    std::vector<int> pancakes = { 3, 1, 5, 2, 4 };

    pancakeSort(pancakes);

    for (int i = 0; i < pancakes.size(); i++) {
        std::cout << pancakes[i] << " ";
    }

    return 0;
}