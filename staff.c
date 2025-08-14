#include<stdio.h>
#include<conio.h>

 struct Employe
        {
            int ID;
            char name[20];
            float salary;
        };
int main()
    {
        struct Employe e[50];
        int n,i;
        printf("\n ENTER HOW MANY RECORD YOU WANT TO STORE: ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
            {
                printf("\n ENTER EMPLOYE ID = ");
                scanf("%d",&e[i].ID);
                printf("ENTER EMPLOYE NAME = ");
                scanf(" %s",&e[i].name);
                printf("ENTER EMPLOYE SALARY = ");
                scanf("%f",&e[i].salary);
            }
        printf("\n ID \t\t\tNAME \t\t\t SALARY \n");
        for(i=0;i<n;i++)
            {
                printf("%d\t\t\t%s\t\t\t%f\n",e[i].ID,e[i].name,e[i].salary);
            }
        return 0;
    }

