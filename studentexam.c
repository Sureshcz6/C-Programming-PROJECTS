#include<stdio.h>
#include<string.h>
#include<conio.h>
                                                        // students of exam results create using C language in struct 
struct Student
        {
            unsigned int roll_no;
            char name[30];
            char section;
            int eng;
            int hin;
            int math;
            int che;
            int phy;
            int Result;
        };

    int main()
        {
            struct Student exam[100];
            int n,i;
            int total[10],save=0;
            printf("ENTER HOW MANY STUDENT ENROLL IN EXAM : \n");
            scanf("%d",&n);
            for(i=0;i<n;i++)
                {    save=0;
            
                    printf("ENTER STUDENT ROLL NO : ");
                    scanf("%d",&exam[i].roll_no);
                    printf("ENTER STUDENT NAME : ");
                    scanf("%s",&exam[i].name);-
                    printf("ENTER STUDENT SECTION : ");
                    scanf("%s",&exam[i].section);
                    printf("ENTER SUBJECTS: \n");
                    printf("ENG--HIN--MAHT--CHE--PHY\n");
                    scanf("%d",&exam[i].eng);
                    save+=exam[i].eng;
                    scanf("%d",&exam[i].hin);
                    save+=exam[i].hin;
                    scanf("%d",&exam[i].math);
                    save+=exam[i].math;
                    scanf("%d",&exam[i].che);
                    save+=exam[i].che;
                    scanf("%d",&exam[i].phy);
                    save+=exam[i].phy;
                    total[i]=save;
                    exam[i].Result=(total[i]>250)?1:0;
                }
            printf("\n\t\t\t\t\t\t[STUDENT's OF EXAMINAION RESULTS] \n\n");
            printf(" ROLL_NO\t\tNAME\t\t\tSECTION\t\t\t\t\tSUBJECTS\t\t\tTOTAL\t\tRESULT\n");
            printf("_\t_\t_\t_\t_\t_\t_\t_\t_\t[ENG]\t[HIN]\t[MATH]\t[CHE]\t[PHY]\n");
            for(i=0;i<n;i++)
                {
                    printf("  %d\t\t\t %s\t\t\t %c\t\t\t %d\t %d\t %d\t %d\t %d\t\t[%d]\t\t",exam[i].roll_no,exam[i].name,exam[i].section,exam[i].eng,exam[i].hin,exam[i].math,exam[i].che,exam[i].phy,total[i]);
                    printf("[%d]\n",exam[i].Result);
                }

            return 0;
        }