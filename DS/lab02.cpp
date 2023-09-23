#include <iostream>
using namespace std;

int main() {
    int n, total = 0, missing = 0;
    cin >> n;
    int arr[n-1];
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    for (int i = 1; i <= n; i++) {
        missing += i;
    }
    cout << missing - total << endl;
    return 0;
}
