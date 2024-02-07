#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0; 
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    return sum;
}
 
int main()
{
    int arr[15]={1,2,3,3,4} ;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of given array is " << sum(arr, n);
    return 0;
}
 