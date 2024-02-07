#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        
        while(j<=i){
    
        char ch=i+'A' -1;
        j=j+1;
        cout<<ch;
        }
        cout<<endl;
        i=i+1;
    }
}