#include<stdio.h>
int main(){
    int num1,num2,temp = 0;
    int tong,hieu,thuong,tich = 0;
    printf("hay nhap so thu nhat: ");
    scanf("%d",&num1);
    printf("hay nhap so thu hai: ");
    scanf("%d",&num2);
    while (1)
    {
        printf("CALCULATOR\n\n");
        printf("nhap so 1. Tong 2 so\n");
        printf("nhap so 2. Hieu 2 so\n");
        printf("nhap so 3. Tich 2 so\n");
        printf("nhap so 4. Thuog 2 so\n");
    
        printf("nhap so 5. Thoat\n");
        printf("hay chon so: ");
        scanf("%d",&temp);
       if (temp == 1)
       {
        tong = num1 + num2;
        printf("tong:%d\n\n",tong);
       }else if (temp == 2)
       {
        hieu = num1 - num2;
        printf("hieu:%d\n\n",hieu);
       }else if (temp == 3)
       {
        tich = num1 * num2;
        printf("tich:%d\n\n",tich);
       }else if (temp == 4)
       {
        thuong = num1 / num2;
        printf("thuong:%d\n\n",thuong);
       }else if (temp == 5)
       {
        break;
       }
    }
    
    return 0;
}