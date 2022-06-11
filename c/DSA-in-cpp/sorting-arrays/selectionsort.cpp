#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the size of an array: " << endl;
    int n;
    cin >> n;
    int array[n];
    cout << "Enter the elements of an array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

        cout << "sorted array is: ";
        for (int i = 0; i < n; i++)
        {
            cout << array[i];
        }
        return 0;
    }