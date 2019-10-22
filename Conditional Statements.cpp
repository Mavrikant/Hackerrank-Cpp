//https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
#include <bits/stdc++.h>

using namespace std;

int main_() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if (n<1) {
        cout<<"Smaller than 1";
    } else if (1==n) {
        cout<<"one";
    } else if (2==n) {
        cout<<"two";
    } else if (3==n) {
        cout<<"three";
    } else if (4==n) {
        cout<<"four";
    } else if (5==n) {
        cout<<"five";
    } else if (6==n) {
        cout<<"six";
    } else if (7==n) {
        cout<<"seven";
    } else if (8==n) {
        cout<<"eight";
    }else if (9==n) {
        cout<<"nine";
    } else{
        cout<<"Greater than 9";
    }

    return 0;
}
