#include <stdio.h>

int main() {
    int n;
    int sum = 0; 


    for (int i = 0; i < 10; i ++) 
    {
        printf("Nhap so n: ");
        scanf("%d", &n);

        if (n > 0) {
            break; 
        } else {
            printf("Hay nhap mot so lon hon 0\n");
        }
    }

    for (int i = 1; i <= n; i++) 
    {
        sum += i;
      
    }
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);

    return 0;
}
