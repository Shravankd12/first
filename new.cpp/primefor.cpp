#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
bool primeis=1;

for(int i=2;i<n;i++){
    if(n%i == 0 ){
     primeis=0;
     break;
    }
}

if(primeis==0){
    cout<<"not a prime"<<endl;
}
else {
    cout<<"prime"<<endl;
}




}