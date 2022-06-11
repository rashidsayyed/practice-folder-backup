// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     for( int i = 1;i<=n;i++){
//         int j;
//         for (j = 1; j<=n-i ; j++)
//         {
//              cout << "  ";
//          }
//         int k=i;
//         for(;j<=n;j++){
//             cout << k-- <<' ';
//         }
//         k=2;
//       for(;j<=n+i-1;j++){
//           cout << k++ <<" ";
//       }
//         cout << endl;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number  = ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
            cout<<"  ";
        //add only this for loop  on your triangle pattern (in previous one which didi taught us )
        for(int k=i; k>=2; k--)
            cout<<k<<" ";

        for(int m=1; m<=i; m++)
            cout<<m<<" ";
    
        cout<<endl;
    }
    return 0;
}