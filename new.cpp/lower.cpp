#include<iostream>
using namespace std;

int main() {
    char n;
    cout << "type:" << endl;
    cin >> n; 
    if(n>=97&&n<=122) {
    cout << "lower case" << endl; }
    else if(n>=65&&n<=90) {
    cout << "upper case" << endl; }
    else if(n>=48&&n<=57)  {
    cout << "digit" << endl; }
    else  {
    cout << "special case" << endl; }
}