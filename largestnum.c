#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(a>b&&a>c){
        printf("Largest Number is:%d",a);
    }else if(b>c){
        printf("Largest Number is:%d",b);
    }else{
        printf("Largest Number is:%d",c);
    }
    return 0;
}
