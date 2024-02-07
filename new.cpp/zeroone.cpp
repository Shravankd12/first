#include<iostream>
using namespace std;
void sortarray(int arr[],int size){
    int left = 0, right = size-1;
    while(left < right){

    if(arr[left] == 0){
      left++;
    }
     
     if(arr[right] == 1){
      right--;
    }
   if(arr[left] == 1 && arr[right] == 0 && left < right ){
    swap(arr[left], arr[right]);
    left ++;
    right --;


   }


 }
}
 void printarry(int arr[],int size){
 for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
 }
 cout << endl;

 }
int main(){
 int arr[8]={1,0,1,0,1,0,1,0};
 sortarray(arr, 8);
 printarry(arr,8);

return 0;
}