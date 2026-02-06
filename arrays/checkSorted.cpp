#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            return false;
        } else {
            return true;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool result = checkSorted(arr, n);
    cout << result << endl;

    return 0;
}