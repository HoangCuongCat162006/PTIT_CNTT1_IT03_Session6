#include <stdio.h>

int leoThang(int n) {
    if (n==1) {
        return 1;
    }
    if (n==2) {
        return 2;
    }
    return leoThang(n-1) + leoThang(n-2);
}

int main() {
    int n;
    printf("Nhap so : ");
    scanf("%d",&n);

    int c=leoThang(n);
    printf("Cach la : %d",c);

}