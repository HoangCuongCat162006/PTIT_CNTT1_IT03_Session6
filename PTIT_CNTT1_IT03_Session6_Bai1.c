#include <stdio.h>

int binary(int n) {
    if (n==0) {
        return ;
    }
    binary(n/2);
    printf("%d",n%2);
}

int main() {
    int number;
    printf("Nhap 1 so nguyen duong :");
    scanf("%d",&number);

    if (number>0) {
        binary(number);
        printf("\n");
    } else {
        printf("Khong hop le");
    }
}