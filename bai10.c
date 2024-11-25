#include <stdio.h>

int main() {
    char soNguyen[50];
    int i = 0; 

    printf("Nhap vao mot so nguyen bat ky: ");
    scanf("%s", soNguyen);  

    printf("Cac chu so trong so da nhap la:\n");
    
    
    while (soNguyen[i] != '\0') {
        printf("%c\n", soNguyen[i]); 
        i++;  
    }

    return 0;
}
