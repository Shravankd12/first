#include<iostream>
using namespace std;

bool EvenOdd(int a){
 if(a&1){
 return 0;
 }
 return 1;
}

int main(){
int num ;
cin>>num;
  
  if(EvenOdd(num)){

    cout<< "even"<<endl;
  }
else {
    cout<< "odd"<< endl;
}


}