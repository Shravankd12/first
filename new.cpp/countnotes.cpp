
#include<iostream>
using namespace std;

int main(){
int n ;
cin>>n;
int RS100,RS50, RS20,RS1;

switch(1)
{
  case 1 : RS100=n/100;
            n=n%100;
            cout<< "100 notes " << RS100 << endl;
  
  case 2 : RS50=n/50;
           n=n%50;
           cout<< "50 notes " << RS50 << endl;

  case 3:  RS20=n/10;
            n=n%10;
            cout<< "10 notes " << RS20 << endl;
  case 4:  RS1=n/1;
              n=n%1;
              cout<< "1 notes " << RS1 << endl;
                        
            
 
}

}