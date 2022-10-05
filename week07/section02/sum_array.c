#include <stdio.h>

int sum_array_rec(int *arr, int start, int end) {
    // base case: the sum of a 1 element array is itself
    if (end <= start)
        return arr[start];

    // recursive: this elem + sum of elems to the right
    return arr[start] + sum_array_rec(arr, start + 1, end);
}

int main(int argc, char **argv) {
    int arr[4] = {1, 2, 3, 4};

    int sum = sum_array_rec(arr, 0, 3);
    printf("sum: %d\n", sum);

    return 0;
}
