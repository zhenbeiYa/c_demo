#include <stdio.h>
#include <math.h>


void func1();

//找出三个数的最大值
double max(double, double);

double three_max(double, double, double);


int main() {
    func1();
    double result = max(12.1, 12.3);
    printf("max is : %.3lf \n", result);
    printf(" the  max number in three:  %.3lf \n", three_max(12.4, 13.6, 78.9));
}

void func1() {
    printf("hello this is My Function!");
}

double max(double d1, double d2) {
    return d1 > d2 ? d1 : d2;
}

double three_max(double d1, double d2, double d3) {
    return d3 > max(d1, d2) ? d3 : max(d1, d2);
}

/**
 *  判断是否为质数
 * @param number
 * @return
 */

int prime(int number) {
    for (int i = 0; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}


