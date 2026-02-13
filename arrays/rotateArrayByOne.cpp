#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& nums) {
    int n = nums.size();
    int temp = nums[0];
    for (int i = 1; i < n; i++) {
        nums[i - 1] = nums[i];
    }
    nums[n - 1] = temp;
    return nums;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    rotateArray(nums);
    cout << "rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}