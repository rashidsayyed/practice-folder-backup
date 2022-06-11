#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number of day: " << endl;
    cin >> n;
    int arr[n];
    int rbrk[n];
    int m=0;
    cout << "enter number of visitors: " << endl;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
                for(int s;s<n;s++){
                    rbrk[s]=i;
                    m++;
                }
                //incomplete
            }
    }
    for(int i=0;i<m;i++){
    cout << rbrk[i] << " ";
    }
    return 0;
}