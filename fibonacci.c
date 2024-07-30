#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;
    int n;
    int c;
    printf("How many numbers of fibonacci series are required\n");
    scanf("%d",&n);
    printf("%d,",a);
    printf("%d,",b);
    for (int i =1; i<=n-2; i++){
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }
    printf("...");
    return 0;
}
