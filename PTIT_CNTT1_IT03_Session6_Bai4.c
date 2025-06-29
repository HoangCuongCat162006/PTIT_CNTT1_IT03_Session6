#include <stdio.h>

void thapHN(int n, char a, char b , char c) {
    if (n==1) {
        printf("Dia %d di chuyen tu %c sang %c \n",n,a,c);
        return;
    }
    thapHN(n-1,a,b,c);
    printf("Dia %d di chuyen tu %c sang %c \n",n,a,c);
    thapHN(n-1,b,a,c);
}
int main() {
    int n;
    printf("Nhap so luong phan tu :");
    scanf("%d",&n);
    if (n<=0) {
        printf("Input khong hop le");
        return 0;
    } else {
        thapHN(n,'A','B','C');
    }
}