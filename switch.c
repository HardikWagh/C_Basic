#include <stdio.h>

int main() {
    int a;
    int b;
    char action;
    int ans;
    printf("Welcome, This is a calculator\n");
    printf("Actions: +,-,*,/\n");
    scanf("%d",&a);
    scanf("%c",&action);
    scanf("%d",&b);
    
    switch(action){
        case '+': ans = a+b;
                printf("Answer is %d", ans);
                break;
        case '-': ans = a-b;
                printf("Answer is %d", ans);
                break;
        case '*': ans = a*b;
                printf("Answer is %d", ans);
                break;
        case '/': ans = a/b;
                printf("Answer is %d", ans);
                break;
    }
    return 0;
}
