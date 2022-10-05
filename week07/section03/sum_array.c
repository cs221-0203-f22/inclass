#include <stdio.h>

int sum_arr_iter(int *arr, int start, int end) {
    int sum = 0;
    for (int i = start; i < end; i++)
        sum += arr[i];
    return sum;
}

int sum_arr_rec(int *arr, int start, int end) {

    // base case: sum of a one-element array is itself
    if (start == end)
        return arr[start];
    else 
        // recursive case: 
        return arr[start] + sum_arr_rec(arr, start + 1, end);
}

int main(int argc, char **argv) {
    int arr[4] = {2, 4, 6, 8};

    int sum = sum_arr_rec(arr, 0, 3);
    printf("sum: %d\n", sum);
}
