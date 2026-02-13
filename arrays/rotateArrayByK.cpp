#include <bits/stdc++.h>
using namespace std;

vector<int> leftRotate(vector<int> &A, int k) {
    int n = A.size();
    k = k % n;

    reverse(A.begin(), A.begin() + k);
    reverse(A.begin() + k, A.end());
    reverse(A.begin(), A.end());

    return A;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int k;
    cout << "Enter k: ";
    cin >> k;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    leftRotate(nums, k);
    cout << "rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}