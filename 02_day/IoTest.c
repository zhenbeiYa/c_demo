#include <stdio.h>
#include <strings.h>

#define  PI 3.14

//输出数字各个位数
void printDigits(int);

int main() {
/*    float radius;
    printf("please enter radius:");
    scanf("%f", &radius);
    printf("%5.2f", (radius * radius * PI));*/
    int a, b, c = 0;
    printf("please enter three unrepeated numbers:");
    scanf("%d%d%d", &a, &b, &c);
    printf("a*b*c=%d \n", a * b * c);
    printDigits(174);
}

void printDigits(int num) {
    int ge = num % 10;
    int shi = num / 10 % 10;
    int bai = num / 100;
    printf("百位是%d，十位是%d,个位是%i", bai, shi, ge);
}

