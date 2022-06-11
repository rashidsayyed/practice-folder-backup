#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    // for simple pattern
    // for( int i=1;  i <= n; i++){
    //     for( int j=1; j <= m;j++){
    //         cout << "*"; 
            
    //     }cout<< endl;
    // }
    // for gap  in pattern
    for( int i=1;  i <= n; i++){
         for( int j=1; j <= m;j++){
            if(i==1 || i ==n || j==1 || j == m){ 
                cout << "*";
            }else{
                cout<<" ";
            }
         }cout<< endl;
     }
    return 0;
}