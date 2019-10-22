//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <math.h>

void update(int *a, int *b) {
    // Complete this function
    int _a = *a;
    int _b = *b;
    *a = _a + _b;
    *b = abs(_a - _b);

}

int main_() {
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}

