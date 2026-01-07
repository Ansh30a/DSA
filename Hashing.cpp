#include  <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // precompute
    int hash[n + 1];
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    // cout << "Enter how many num"
    int h;
    cin >> h;
    while (h--) {
        int num;
        cin >> num; // Fetch
        cout << hash[num] << endl;
    }
    return 0;
}