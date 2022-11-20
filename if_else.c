#include<stdio.h>

int main(){
    int a,b;
    printf("ENTER THE AGE OF A");
    scanf("%d", &a);

    printf("Enter the value of B");
    scanf("%d", &b);

    if(a>b){
        printf("A IS ELDER THAN B");

    }

    else if(b>a){
        printf("B is elder than A");

    }

    else{
        printf("both are of same age");
    }
    return 0;

}