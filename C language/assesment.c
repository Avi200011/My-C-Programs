#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10];
    for (int i =0; i<10 ;i++){
        printf("Enter the %dth Number" ,i);
        scanf("%d", &A[i]);
    }
    for(int j=0; j<10 ; j++){
        printf("%d ",A[j]);
    }
    return 0;
}