#include <stdio.h>
int main(){
    char ch;
    int a, b, z;
    printf("Enter an Operator (+, *, -, /): ");
    scanf("%c", &ch);
    printf("Enter two num: \n");
    scanf("%d %d", &a, &b);

    switch(ch){
        case '+':
           z = a + b;
            break;
        case '-':
            z = a - b;
            break;
        case '*':
            z = a * b;
            break;
        case '/':
            z = a / b;
            break;
    }
    printf("Result = %d",z);
    return 0;
}