#include <stdio.h>

int main() {
    int num1, num2, num3 = 0;
    int temp,tong,tbc,sln,snn,a;
    while (1)
    {
        printf("MENU\n\n");
        printf("nhap so 1. Nhap 3 so\n");
        printf("nhap so 2. tong ba so\n");
        printf("nhap so 3. trung binh cong 3 so\n");
        printf("nhap so 4. so nho nhat\n");
        printf("nhap so 5. so lop nhat\n");
        printf("nhap so 6. thoat\n");
        printf("nhap so\n\n: ");
        scanf("%d",&temp);
        if (temp == 1)
        {
            printf("nha so thu nhat: ");
            scanf("%d",&num1);
            printf("nha so thu hai: ");
            scanf("%d",&num2);
            printf("nha so thu ba: ");
            scanf("%d",&num3);
        }else if (temp == 2)
        {
            tong = num1 + num2 + num3;
            printf("tong cau %d + %d + %d = %d\n",num1,num2,num3,tong);
        }else if (temp == 3)
        {
            tbc = (num1 + num2 + num3) / 3;
             printf("trung binh cong cua %d + %d + %d = %d\n\n",num1,num2,num3,tbc);
        }else if (temp == 4)
        {
            if (num1 > num2 && num1 > num3)
            {
                a = num1;
            }else if (num2 > num1 && num2 > num3)
            {
                a = num2;
            }else
            {
                a = num3;
            }
             printf("so lon nhat la %d\n\n",a);
        }else if (temp == 5)
        {
            if (num1 < num2 && num1 < num3)
            {
                a = num1;
            }else if (num2 < num1 && num2 < num3)
            {
                a = num2;
            }else
            {
                a = num3;
            }
            printf("so nho nhat la %d\n\n",a);
        }else if (temp == 6)
        {
           break;
        } 
    }
    
    return 0;
}