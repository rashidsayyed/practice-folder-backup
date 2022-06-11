#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=0;
    int ogn = n;
    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n=n/10;
        cout << "sum: "<< sum <<" n:"<< n << " lastdigit: "<<lastdigit <<endl;;
    }
    if(sum==ogn){
        cout << "it is a arstrong number"<<endl;
    }else{
        cout<<"not arsmstrong"<<endl;
    }
    
    return 0;
}