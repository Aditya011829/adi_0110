#include <stdio.h>

int main(){
    int a,b;
    float c,d;

    printf("ENTER THE VALUE OF A\n");

    scanf("%d", &a);
    
    printf("ENTER THE VALUE OF B\n");
    scanf("%d", &b);

    printf("ENTER THE VALUE OF C\n");
    scanf("%d", &c);

    printf("ENTER THE VALUE OF d\n");
    scanf("%d", &d);

    printf("THE SUM OF TWO NUMBERS IS = %d", a+b);
    printf("THE DIFFERENCE OF TWO NUMBERS IS = %d", c-d);

    return 0;
    

}