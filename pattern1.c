#include<stdio.h>
int main()
    {
        int i,j,k,row;
        printf("ENTER THE NUMBER OF ROW: ");
        scanf("%d",&row);
        int save=row/2+1;
        int pass=row/2;
        for(i=1;i<=save;i++)
            {
                for(j=1;j<=save-i;j++)
                    { 
                        printf(" ");
                    }
                for(k=1;k<=2*i-1;k++)
                    {
                        printf("*");
                    }
                printf("\n");
            }
            int n=1;
            for(int i=pass;i>=1;i--)
                    {
                        for(int i=1;i<=n;i++)
                            {
                                printf(" ");
                            }
                        for(int j=2*i-1;j>=1;j--)
                            {
                                printf("*");
                            }
                            n++;
                             printf("\n");
                    }         
        return 0;
    }