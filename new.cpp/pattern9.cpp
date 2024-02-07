#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=0;
        while(j<n){
        j=j+1;
        char ch='A'+j-1;
        cout<<ch;

        }
        i=i+1;
        cout<<endl;
        

    }
}