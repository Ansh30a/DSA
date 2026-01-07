#include  <iostream>
using namespace std;

// ------------ Number Hashing ------------
// int main() {
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     // precompute
//     int hash[n + 1] = {0};
//     for (int i = 0; i < n; i++) {
//         hash[arr[i]]++;
//     }
//
//     // cout << "Enter how many num"
//     int h;
//     cin >> h;
//     while (h--) {
//         int num;
//         cin >> num; // Fetch
//         cout << hash[num] << endl;
//     }
//     return 0;
// }

// ------------ Character Hashing ------------
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int hash[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        hash[s[i] - 'a']++;
    }

    int h;
    cin >> h;
    while (h--) {
        char c;
        cin >> c; // Fetch
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}