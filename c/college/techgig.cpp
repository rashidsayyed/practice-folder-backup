/* Read input from STDIN. Print your output to STDOUT*/
#include<iostream>
using namespace std;
int main(int argc, char *a[])
{
	int h,m;
	cin >> h ;
	cin >>  m;
	 int h2,m2;
	cin >> h2 ;
	cin >> m2 ;
	int h3 = 0,m3 =0;
	if(h+h2 <= 24 && m+m2 < 60)
	{	h3 = h+h2;
		m3 = m+m2;
	}
    else if(h+h2 > 24 && m+m2 > 60){
		h3 = (h+h2)-24;
        m3 =(m+m2)-60;
	}
	cout << h3 << " "<< m3 << endl;
}
