#include <stdio.h>

int main(){
    int num1, num2, ucln;
    while (1)
    {
         printf("Hay nhap so nguyen duong thu nhat: ");
        scanf("%d", &num1);
        printf("Hay nhap so nguyen duomg thu hai: ");
        scanf("%d", &num2);
        if (num1 > 0 && num2 >0)
        {
            break;
        }
        
    }
    int tempA = num1, tempB = num2;
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    ucln = tempA;

    printf("uoc chung lon nhat cua %d va %d la: %d", num1, num2, ucln);

    return 0;  
}
