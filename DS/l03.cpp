#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
  int pivotIndex = low + rand() % (high - low + 1);
  int pivot = arr[pivotIndex];
  swap(arr[pivotIndex], arr[high]);
  int i = low - 1;
  for (int j = low; j <= high - 1; j++) {
    if (arr[j] >= pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return i + 1;
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
  }
}

int main() {
  srand(time(0));
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  quickSort(arr, 0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}

