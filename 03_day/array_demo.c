#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "../01_day/function_demo.h"
#include "array_find.h"

#define   ARRAY_LEN 10

struct string {
    char *string;
};

int Fibonacci(int);

int *reverse(int *arr, int len);

int main() {
/*    int nums[ARRAY_LEN];
    nums[9] = 10;
    printf("num[9]=%i \n", nums[9]);
    double scores[] = {60.4, 65.3, 64.1, 67.2};
    struct string nameMbs[] = {"Alice", "Lucy", "Nancy", "Bob", "Kim"};

    *//*for (int i = 0; i < size; ++i) {
        printf("%s \t", nameMbs[i]);
    }*//*
    printf("10次斐波那契数%i", Fibonacci(10));

    int arr[] = {1, 5, 4, 7, 8, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; ++i) {
        printf("%i \t ", arr[i]);
    }
    int *res = reverse(arr, size);
    for (int i = 0; i < size; ++i) {
        printf("%i \t", res[i]);
    }
    //使用malloc动态分配内存
    int length = 10;
    int *arr2 = (int *) malloc(length * sizeof(int));
    free(arr2);*/
    int arr[] = {2, 5, 4, 7, 8, 9, 4};//38
    int size = sizeof(arr) / sizeof(arr[0]);
/*    int k = sum(arr, size);
    printf(" sum() array element summary is %i \n", k);
    int avg = FindAverage(arr, size);
    printf("avg array element is %i \n", avg);*/
    //复制数组
    int *pInt = copy_array(arr, size);
    printArr(pInt, size);
    printArr(res, size);
    int *res = reverse(arr, size);
    printArr(res, size);
}

int Fibonacci(int num) {
    if (num < 2)return 1;
    return Fibonacci(num - 1) + Fibonacci(num - 2);
}

/**
 *
 * @param arr
 * @return int *
 * @description  数组反转
 */
int *reverse(int *arr, int len) {
    int left = 0;
    int right = len - 1;
    while (left < right) {
        swap(arr, left, right);
        left++;
        right--;
    }
    return arr;
}

