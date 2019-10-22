//https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main_() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    scanf("%d %d", &n, &q);

    vector <int> array_sizes(n);
    vector <int *> array_location(n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &array_sizes[i]);
        int*  array = new int[array_sizes[i]];
        array_location[i]=array;
        for (int j = 0; j < array_sizes[i]; ++j) {
            scanf("%d", &array_location[i][j]);
        }
    }

    for (int k = 0; k < q; ++k) {
        int m;
        int n;
        scanf("%d", &m);
        scanf("%d", &n);
        cout << array_location[m][n]<<endl;
    }

    return 0;
}