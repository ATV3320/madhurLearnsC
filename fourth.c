#include <stdio.h>

int main()
{

    int x = 10;

    //loop1
    for (int i = 0; i < x; i++)
    {
        printf("%d", i);
        printf(" ho gaya\n");
    }

    //loop2
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            int temp = i * j;
            printf("%d", temp);
            printf(" the numbers were %d and %d\n", i, j);
        }
        printf("chota break le leta hu\n");
    }
    printf("completed both loops");

    //loop3

    for(int i=1; i<100;i*2){
        printf("answer is %d\n", i);
    }
    printf("done with the third loop as well");

    return 0;
}