#include <stdio.h>

int main(){
    int num;
    int x=10, y=3;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("The number is even.");
    }  else {
        printf("The number is odd.");
    }

    printf("\n%d\n", 5 / 2);
    printf("%f\n", 5.0 / 2);
    printf("%d\n", x % y);
    printf("%d\n", x / y);
    printf("%d\n", (x > y) && (y > 0));

    return 0;
}