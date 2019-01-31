#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2;

    printf("Enter 1st Number:");
    scanf("%d",&no1);

    printf("Enter 2nd Number:");
    scanf("%d",&no2);

    if (no1>=no2){
        printf("No 1 Is The max Number");
    }
    else
    {
       printf("No 2 Is the max Number");
    }

    return 0;
}
