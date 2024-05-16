#include <iostream>
using namespace std;
int main() {
  int n, k = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    k += arr[i];
  }
  if (k <= 1000000)
    cout << "not a Millionaire";
  else
    cout << "abracadabra";
}