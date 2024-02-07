#include<iostream>
#include<string>
using namespace std;
int palind(string str){
     int low = 0 ;
    int high = str.size() - 1;
    int maxlength = 1;
    int start = 0;
    for(int i = low ; i<=high;i++){
    
        int n = str.size();
        
         
    
            for(int j = i; j <str.length();j++){
                int flag = 1;
                for(int k = 0; k<(j - i +1)/2;k++){
                    if(str[i+k] != str[j-k] ){
                        flag = 0;
                    }
                    if(flag && (j-i+1) > maxlength){
                        start = i;
                        maxlength = j - i +1;
                    }

            }
        
       
    }
    }
     return str.substr(start,maxlength);
}
int main(){
    string s = "geekkssforgeeks";
    cout << palind(s);
    return 0;
}