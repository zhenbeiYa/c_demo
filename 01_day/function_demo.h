//
// Created by 23133 on 2025/2/13.
//
#include <stdio.h>

int partition(int *pInt, int start, int anEnd);

void swap(int *pInt, int left, int right);

int sum(const int a, const int b) {
    return a + b;
}

void quicksort(int arr[], int start, int end) {
    if (start >= end) return;
    int index = partition(arr, start, end);
    quicksort(arr, start, index - 1);
    quicksort(arr, index + 1, end);
}

int partition(int pInt[], int start, int anEnd) {
    int pivot = pInt[start];
    int left = start, right = anEnd;
    while (left < right) {
        while (pInt[left] <= pivot && left < right) left++;
        while (pInt[right] >= pivot && left < right) right--;
        swap(pInt, left, right);
    }
    if (pInt[left] < pivot) {
        swap(pInt, start, left);
        return left;
    } else {
        swap(pInt, start, left - 1);
        return left - 1;
    }
}

void swap(int pInt[], int left, int right) {
    int swap = pInt[left];
    pInt[left] = pInt[right];
    pInt[right] = swap;
}


void printArray(int  arr[], int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d \t",arr[i]);
    }
}