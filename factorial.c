#include <stdio.h>

int main() {
    int a;
    int fact=1;
    printf("Enter the number");
    scanf("%d", &a);
    for (int i=a; i>0; i--){
        fact = fact*i;
    }
    printf("Factorial of the given number is %d",fact );
    return 0;
}
