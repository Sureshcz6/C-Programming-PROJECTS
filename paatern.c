#include<stdio.h>
#include<conio.h>
int main()
    {
        int i,j,row,p;
        printf("ENTER THE NUMBER OF ROW : ");
        scanf("%d",&row);
        printf("\n\n");
        p=row;
        for(i=row;i>=1;i--)
            {
            if(i==p||i==1||i==2)
                {
                for(j=1;j<=i;j++)
                    {
                        printf("*");
                    }
                }
            else
                {
                    int n=i;
                    printf("*");
                for(int k=1;k<i;k++)
                    {
                    if(n-1==1)
                        {
                            printf("* ");
                        }
                    else
                        {
                            printf("_");
                            --n;
                        }
                    }
                }
            printf("\n");
            }
        return 0;
    }