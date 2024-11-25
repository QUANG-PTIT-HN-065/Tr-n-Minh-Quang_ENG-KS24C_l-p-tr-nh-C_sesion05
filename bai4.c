#include<stdio.h>
int main(){
    int num1 = 1;
    int multiplication = 0;
   do
   {
     printf("hay nhap mot so tu 1 den 10: ");
        scanf("%d",&num1);
   } while (num1 < 1 || num1 > 10);
   printf("bang cuu chuong cua %d la\n",num1);
   for (int i = 1; i < 11; i++)
   {
     multiplication = num1 * i;
     printf("%d * %d = %d\n",num1,i,multiplication);
   }
   
    
    return 0;
}