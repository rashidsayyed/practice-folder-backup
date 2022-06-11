#include <iostream>
#include <math.h>
using namespace std;
int bisearch(int array[], int key, int n){
    int left = 0;
    int right = n;
    while(left<right){
    int middle = (left+right)/2;
    //cout <<"middle: "<< middle << endl;
        if(array[middle]==key){
            //cout << "array{middle}: "<< array[middle] << endl;
            return middle;
        }else if(array[middle]>key){
            right = middle-1;
        }else{
            left = middle+1; 
        }
    }
}
int main(){
    int n,key;
    cout << "Enter size of array:"<< endl;
    cin >> n;
    int array[n];
    cout << "Enter the elements of array" <<endl;
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    cout << "Enter the keyword to search" <<endl;
    cin >> key;
    cout<< "index at: " << bisearch(array,key,n);
    return 0;
}
//[1,2,3,4,5,6,7,8,9,10]