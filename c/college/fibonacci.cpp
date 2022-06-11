#include <iostream>
using namespace std;
void fib(int n){
    int t1=0;
    int t2=1;
    int nexterm;
    for(int i=1;i<=n;i++){
        nexterm = t1+t2;
        t1 =t2;
        t2=nexterm;
    cout << t1 <<endl;
    }
    if(t1==n){
        cout<< "given numer is of fibanocci series"<<endl;
    }else{
        cout<< "given numer is not of fibanocci series"<<endl;
        
    }
}
int main(){
    int n;
    cin >> n;
    fib(n);
    return 0;
}