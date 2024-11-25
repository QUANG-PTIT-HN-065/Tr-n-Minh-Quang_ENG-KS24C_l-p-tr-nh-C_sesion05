#include<stdio.h>
int main(){
    int n;
    int multiplication = 0;
    printf("bang cuu chuong\n");
   for (int n = 1; n < 10; n++)
   {
    printf("bang cuu chuong cho %d\n\n",n);
     for (int i = 1; i <= 10; i++)
    {
        multiplication = n * i;
        printf("%d * %d = %d\n",n,i,multiplication);
    }
   }
   
    
    return 0;
}