#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter number" << endl;
    cin>> n;

    int i=1;
    int sum=0;
    while(i<=n) {
        sum=sum+2;
        i = i + 16;
    }
    cout << "even sum for n is " << sum << " ";
}