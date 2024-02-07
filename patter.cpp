#include <iostream>
using namespace std;

int main() {
    int n = 6 ;
    cout << "Printing Hollow Sandglass Star Pattern" << endl;

    for (int i = 1; i <= n ; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
         
        for (int m = i; m <= n; m++) {
            if (i == 1 || m == i || m == n) {
                cout << "* ";
            
            } else {
                cout << "  ";
            }
        }
        
        cout << endl;
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        
        for (int m = i; m <= n; m++) {
            if (i == 1 || m == i || m  == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        
        cout << endl;
        cout << endl;
    }
    
    return 0;
}
