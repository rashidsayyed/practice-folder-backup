#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter size of an array: "<< endl;
    cin >> n;
    int array[n];
    cout << "Enter elements of an array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
       int counter = 1;
       while(counter < n){
           for (int i = 0; i < n-counter; i++)
           {
               if(array[i]>array[i+1]){
                   int temp = array[i];
                   array[i] = array[i+1];
                   array[i+1]=temp;
               }
           }
           counter++;
       }
    for(int i=0; i<n;i++){
        cout << array[i] << " ";
    }
    return 0;
}