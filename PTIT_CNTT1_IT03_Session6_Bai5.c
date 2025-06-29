#include <stdio.h>

int findMax(int *arr,int size,int max) {
    if (size ==0 ) {
        return max;
    }
    if (arr[size -1]>max) {
        max == arr[size -1];
    }
    return findMax(arr , size -1,max);
}

int findMin(int * arr,int size,int min) {
    if (size ==0) {
        return min;
    }
    if (arr[size-1]<min) {
        min=arr[size-1];
    }
    return findMin(arr,size-1,min);
}
int main() {
    int n;
    printf("Nhap so luong phan tu mang : ");
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++) {
        printf("Moi ban nhap gia tri arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }


int num1=arr[0];
    int num2=arr[0];
    int max= findMax(arr,n,num1);
    int min=findMin(arr,n,num2);
    printf("Max=%d \nMin=%d",max,min  );
}
