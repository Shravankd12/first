#include<iostream>
using namespace std;
int getMAX(int num[],int n){
int maxi= INT_MIN ;
for(int i=0;i<n;i++){
maxi=max(maxi,num[i]);
}
return maxi;

}
int getMIN(int num[],int n){
int mini=INT_MAX;
for(int i=0;i<n;i++){
mini=min(mini,num[i]);
}
return mini;
}



int main(){
int size;
cin>>size;
int num[100];
for(int i=0;i<size;i++){
cin>>num[i];
}
cout <<  getMAX( num ,size) <<endl;
cout <<  getMIN( num ,size) <<endl;

}