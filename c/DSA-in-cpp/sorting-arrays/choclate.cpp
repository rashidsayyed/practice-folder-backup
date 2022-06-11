#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Enter the amount you have: ";
    cin >> n;
    cout << "Enter number of wrapper that can purchase one choclate: ";
    cin >> m;
    int k=0;
    k = n/m;
    k +=  n;
    cout << k;
    return 0;
}