#include<iostream>
using namespace std;
int binsearch(int arr[], int size, int key){
 int start= 0;
 int end = size - 1;
 int mid = start +(end - start)/2;

while(start <= end){

  if( arr[mid] == key){

    return mid;
  }
 if( arr[mid]< key){
  start = mid +1;
 }
 else{

    end = mid -1;
 }

 mid = start +(end - start)/2;

}


return -1;

}


int main(){
   
   int arr[6] ={1,4,5,67,89,90};
   int brr[5] = {2,4,56,78,90};
    int eindex = binsearch(arr, 6,01);
    cout << "index is " <<eindex<< endl;
 int oindex = binsearch(brr, 5,11);
    cout << "index is " <<oindex<< endl;
    return 0;

}