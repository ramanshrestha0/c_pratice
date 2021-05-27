#include<stdio.h>

int main (){
    int age;

    printf("Enter your age:\n");
    scanf("%d",&age);

    if(age>70){
        printf("Your age is above 70,you cannt drive");
    }
    else{
        printf("you can drive");
    }
    return 0;;

}