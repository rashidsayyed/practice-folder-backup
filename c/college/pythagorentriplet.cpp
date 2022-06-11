#include <math.h>
#include <iostream>
using namespace std;
void pyth(int a, int b,int c){
    int max,oneside,otherside;
    if(a>b && (b>c || c>b)){
         max = a;
         oneside=b;
         otherside=c;
    }else if(b>c && (c>a || a>c)){
        max =b;
        oneside=a;
        otherside=c;
    }else{
        max=c;
        oneside=b;
        otherside=a;
    }
    int m = max*max;
    int g = oneside*oneside+otherside*otherside;
    if(m==g){
        cout << "yes pythagorean triplet";
    }else{
        cout << " not";
    }
return ;
}
int main(){
    int a,b,c;
    cout<<"Enter three number:" << endl;
    cin >> a>>b>>c;
  pyth(a,b,c);
    return 0;
}