#include <stdio.h>

int main() {
    int i = 10;

    int *p = &i;
    printf("p's value is %d \n", (*p));
    int arr[] = {1, 2, 3, 4, 4};
    int *index = arr;
    printf("index's value is %d \n", *index);
}