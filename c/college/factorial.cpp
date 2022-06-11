#include <iostream>
using namespace std;
void fact(int i){
 
    long double j = 1.0;
    int num=1;
    for(num; num<=i; ++num){
        j = j*num;   
    }
    cout<<"\n The fatorial of given number is: "<< j <<endl;

    return;
}
int main(){
    int i;
    cin>>i;
    fact(i);
    return 0;
}