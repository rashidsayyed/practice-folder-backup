#include<iostream>
using namespace std;
 int main(){
     int n;
     cin >> n;
     for (int i =1 ; i <=n ;i++){
         for( int j =i ; j <=n-1;j++){
             cout << "  ";
         }
         for(int m=1;m<=2*i-1;m++){
             cout << "* ";
         }
        cout << endl;
    }
         for (int i =n ; i >=1 ;i--){
        for( int j =n-1 ; j >=i;j--){
             cout << "  ";
         }
         for(int m=2*i-1;m>=1;m--){
             cout << "* ";
         }
        cout << endl;
    }


     return 0;
 }