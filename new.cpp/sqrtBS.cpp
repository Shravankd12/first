 
 #include<iostream>
 using namespace std;
 long long int binsearch( int n){
 int s=0;
 int e=n;
 int ans=-1;
  
 long long int mid = s +(e-s)/2;

 while(s<=e){
     long long int square = mid * mid;
      if(square == n){
          return mid;
      }
    if(square > n){
        e = mid - 1;
    }
    else{
       ans = mid;
        s = mid +1; 
    }
    
 mid = s +(e-s)/2;
 }
 return ans;

}
double preci(int n ,int p , int tempsol){
    double fact=1;
    double ans=tempsol;
    
        for(int i=0;i<p;i++){
            fact=fact/10;
            for(double j=ans;j*j<n;j=j+fact){
            ans = j;
            }
        }
    
    return ans;
}

int main(){
 int n;
 cin>>n;
int tempsol = binsearch(n);
 cout << " " << preci(n,3,tempsol);

return 0;
}