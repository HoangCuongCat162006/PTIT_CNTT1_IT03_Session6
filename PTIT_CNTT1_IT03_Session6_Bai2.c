#include <stdio.h>
int fibonacci(int n) {
    if (n==1 || n==2) {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

void fibonacciReverse(int i) {
    if (i==0) {
        return ;
    }
    printf("%d",fibonacci(i));
    if (i>1) {
        printf(",");
    }
    fibonacciReverse(i -1);
    printf("\n");

}
int main() {
    int n;
    printf("Nhap so nguyen duong : ");
    scanf("%d",&n);

    if (n<=0) {
        printf("Input khong hop le ");
    } else {
        fibonacciReverse(n);
        printf("\n");
    }
}