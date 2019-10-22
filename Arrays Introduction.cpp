//https://www.hackerrank.com/challenges/arrays-introduction/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;


int main_() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int array_size;

    scanf("%d", &array_size);
    int *array = new int[array_size];

    for (int i = 0; i < array_size; ++i) {
        scanf("%d", &array[i]);
    }

    for (int i = array_size-1; i >= 0; --i) {
        cout << array[i] << " ";
    }

    return 0;
}
