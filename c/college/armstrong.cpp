#include <iostream>
#include <cmath>
using namespace std;
void armstrong(int n){
    int a,b,c;
    a = n%10;
    b = n/10;
    b = b%10;
    c = n/10;
    c = c/10;
    int sum,power;
    sum = pow(a,3)+pow(b,3)+pow(c,3);
 if(sum == n){
     cout << "given number is armstrong:"<< endl;

 }else{
     cout << "given number is not armstrong:"<< endl;
 }
    return;
}

int main(){
    cout << "enter number length" << endl;
    int n;
    cin >> n;
    armstrong(n);    
    
    return 0;}