#include <iostream>
using namespace std;
int main(){
    char button;
    cout << "enter a char: " << endl;
    cin >>button;

    switch (button)
    {
    case 'a':
        cout << "hello" <<endl;
        break;
    
    case 'b':
        cout << "how are you " <<endl;
        break;
    
    case 'c':
        cout << "I love YOU" <<endl;
        break;
    
    case 'd':
        cout << "Ef off!" <<endl;
        break;
    
    default:
    cout<<"I am still learning more"<<endl;
        break;
    }

    return 0;
}