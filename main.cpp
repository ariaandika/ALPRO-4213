#include <iostream>
using namespace std;

int faktorial(int n) {
    int hasil = 1;
    for (int i = 1; i <= n;i++) {
        hasil *= i;
    }
    return hasil;
}

int faktorialRec(int n) {
    if (n==0) 
        return 1;
    else 
        return n * faktorialRec(n-1);
}

int add(int a, int b) {
    if (b==0)
        return a;
    else 
        return 1 + add(a, b-1);
}

/**
 * 5
 * 2 + 3
 * (1 + 1) + (1 + 2)
 * 
*/

int fib(int a) {
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;
    else
        return fib(a - 1) + fib(a - 2);
}

int main() {
    cout << faktorial(4) << endl;
    cout << faktorialRec(4) << endl;
    cout << 5 << ": " << fib(5) << endl;
    cout << 3 << ": " << fib(3) << endl;
    cout << 7 << ": " << fib(7) << endl;
    cout << 9 << ": " << fib(9) << endl;
    cout << 10 << ": " << fib(10) << endl;
}
