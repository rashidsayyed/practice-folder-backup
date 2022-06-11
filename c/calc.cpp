#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "input two numbers" << endl;
    cin >> a >> b;
    char op;
    cout << "input operator" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    
    case '-':
        cout << a - b;
        break;
        
    case '*':
        cout << a * b;
        break;
        
    case '/':
        cout << a / b;
        break;
    default:
        cout << "input only -+*/" << endl;
        break;
                
            
        
    }
    return 0;
}