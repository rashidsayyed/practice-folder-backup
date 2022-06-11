#include <iostream>
#include <climits>

using namespace std;
int main()
{
    cout << "enter size of array:" << endl;
    int n;
    cin >> n;
    int array[n];
    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        // if(array[i]>max){
        //     max = array[i];
        // }
        // if(array[i]<min){
        //     min = array[i];
        // }
        maxNo = max(maxNo, array[i]);
        minNo = min(maxNo, array[i]);
    }
    cout << "maximum number is:" << maxNo << endl;
    cout << "minimum number is:" << minNo << endl;
    ;
    return 0;
}