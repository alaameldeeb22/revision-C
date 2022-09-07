#include <stdio.h>

int main()
{
    int num, i , bit,ones=0 , zeros=0;
    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i= 0; i < 32; i++) {

        if((num >> i) & 1)
            ones++;
        else
            zeros++;
    }
    printf("ones : %d , zeros : %d",ones, zeros);
    return 0;
}