#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a ,&b);
    printf("\n Before swapping a = %d , b = %d", a ,b);
   a =a+b;
   b= a-b;
   a= a-b;
    printf("\n after swapping a= %d, b=%d",a,b);
    return 0;
}