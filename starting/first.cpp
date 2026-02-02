#include <iostream>
using namespace std;


void table(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << i << " * " << " " << n << " = " << i * n << endl;
    }
}
int main() {
    int n;

    cout<<"Enter your number: ";

    cin>>n;

    table(n);

    return 0;
}