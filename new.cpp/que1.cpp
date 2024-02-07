#include<iostream>
using namespace std;

int main(){
for(int i=0; i<=15;i+=3){
    cout<<i<<" ";
    if( i&1){
        continue;
    }
    i++;
  } 


}