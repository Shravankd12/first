#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter an integer: "<< endl;
  cin >> n;

  if( n % 2 == 0) {
    cout << n << " is even."; }
  else {
    cout << n << " is odd.";
       }
  return 0;
}