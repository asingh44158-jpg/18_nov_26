#include<stdio.h>
int main(){
    int arr[10];
    printf("enter the elements of array");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    
    }

    printf("element are :");
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}