#include <stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    printf("%d\n",a[0]);

 printf("%d\n",a[1]);

 printf("%d\n",a[2]);

 printf("%d\n",a[3]);

 printf("%d\n",a[4]);
 printf("%d\n",a[5]);

 printf("result using loop\n");

 for(int i=0;i<5;i++)
 {
     printf("%d\n",a[i]);

 }
 printf("normal array\n");
 for(int i=0; i<5; i++){
    printf("%d\n", a[i]);

 }
 printf("Reverse array\n");
 for(int i=4; i>=0; i--)
 {
    printf("%d\n", a[i]);
 }
 return 0;

}

