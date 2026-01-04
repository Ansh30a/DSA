#include <iostream>
using namespace std;

// --------- Fibonacci ---------
int fib(int n) {
    if (n <= 0) {
        return -1;
    }
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (n == 3) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << endl;
    if (fib(n) >= 0) {
        cout << fib(n);
    }
    else {
        cout << "No such term";
    }
    return 0;
}