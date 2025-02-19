#include <stdio.h>

#define LEN 7

/**
 *
 * @param arr
 * @param len
 * @return
 * 找最大值
 */
int findMin(const int *arr, int len) {
    int temp = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] < temp) {
            temp = arr[i];
        }
    }
    return temp;
}

/**
 * 找最小值
 * @param arr
 * @param len
 * @return
 */
int findMax(const int *arr, int len) {
    int temp = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] > temp) {
            temp = arr[i];
        }
    }
    return temp;
}

//数组求和
int sum(int *arr, int len) {
    if (len < 1) return 0;
    return arr[len - 1] + sum(arr, len - 1);
}


int FindAverage(int *arr, int len) {
    if (len < 1) return 0;
    return sum(arr, len) / len;
}

int res[LEN];

int *copy_array(int arr[], int len) {
    memcpy(res, arr, len * sizeof(int));
    return res;
}

//数组遍历
void printArr(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}