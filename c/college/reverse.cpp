#include <iostream>
using namespace std;
int main(){
    int i,temp,rev=0;
    cout << "\nEnter a three digit number to reverse" << endl;
    cin >> i;
    while (i !=0){
        temp = i%10;
        rev = rev*10 + temp;
        i /= 10;
    }
    cout << "\nreverse: " << rev <<endl;
    return 0;
}