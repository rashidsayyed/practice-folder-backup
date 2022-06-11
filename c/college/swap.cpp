#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<< "\n Enter two numbers " << endl;
    cin >> a >> b;
    cout<< "\n Before swapping " << " a= " << a << " and b=" << b << endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout << "\n After swapping "<< "a="<< a << " b= "<< b <<endl;
    return 0;
}