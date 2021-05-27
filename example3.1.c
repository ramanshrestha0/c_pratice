#include<stdio.h>

int main (){
    int a, b;
    printf("Enter a number");
    scanf("%d",&a);

    if(a%2==0){
        printf("%d is the even \n",a);
    }
    else{
        printf("%d is the odd \n",a);
    }
    return 0;
}
