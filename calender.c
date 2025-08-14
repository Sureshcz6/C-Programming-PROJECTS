#include<stdio.h>
#include<stdlib.h>
 int get_1st_Weekday(int);

            int get_1st_Weekday(int year)
                {
                    int Day;
                    Day=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
                    return Day;
                }
 int main()
    {
        //system("Color 1A");
        int year,month,day,Start_day,week_day=0,Starting_Day;
        char *Months[]={"JANUARY","FEBUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
        int monthDay[]={30,28,31,30,31,30,31,31,30,31,30,31};
        printf("ENTER YEAR = ");
        scanf("%d",&year);
        if((year%4==0&&year%100!=0)||(year%400==0))
            {
                monthDay[1]=29;
            }
        Starting_Day=get_1st_Weekday(year);
        for(month=0;month<12;month++)
            {
                week_day=0;
                Start_day=monthDay[month];
                printf("\n\n\t\t%s\n\n",Months[month]);
                printf("   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n");
                 for(week_day=0;week_day<Starting_Day;week_day++)
                            {
                                printf("      ");
                            }
                for(day=1;day<=Start_day;day++)
                    {
                        if(week_day==7)
                            {
                                printf("\n");
                                week_day=0;
                            }
                        ++week_day;
                        printf("%6d",day);
                    }
                Starting_Day=week_day;
            }
        return 0;
    }