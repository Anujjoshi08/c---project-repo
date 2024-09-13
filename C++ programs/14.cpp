// write a program to print the following pattern:
//            1
//          1 2 1
//        1 2 3 2 1
//      1 2 3 4 3 2 1

#include <iostream>
using namespace std;
 
int main() {
    int i, j, n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (j = 1; j <= i; j++) {
            cout << j << " ";
        }
        for (j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}