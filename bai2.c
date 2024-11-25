#include<stdio.h>
int main(){
    int num1 = 100;
    int num2;
    for (int i = 0; num2 != 100; i++)
    {
        printf("hay nhap mot so ngau nhien 1-100: ");
        scanf("%d",&num2);
        if (num2==num1)
        {
            printf("bingo");
            break;
        }else
        {
            printf("sai roi hay nhap lai\n");
        }
        
        
    }
    
    return 0;
}