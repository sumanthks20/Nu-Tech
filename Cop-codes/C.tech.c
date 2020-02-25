#include <stdio.h>

int main() {
int n=5;
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
            if(j==0||j==n)
              printf("*\t");
            else
              printf("");
        }
    }
    printf("\n");
}
    return 0;
}
