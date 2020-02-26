#include <stdio.h>

int main() {
    int n;
    printf("enter no of stars\n");
    scanf("%d",&n);
    int i ,j;
    for(i=0;i<n;i++)
    {
        if(i==0||i==n-1)
        {
           for(j=0;j<n;j++)
           printf("* ");
        }
        else
        {
            for(j=0;j<=n;j++)
            {
                if(j==0)
                  printf("*");
                else if(j==n)
                    printf(" *");
                else
                    if(j<n-1)
                        printf(" $");
            }
        }
        printf("\n");
    }
    return 0;
}
