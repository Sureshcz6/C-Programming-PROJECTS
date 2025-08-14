#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
float Rupees(float);
float Dollar(float);
float Euro(float);
float Peso(float);
void Currency();
void Continue();

        float Rupees(float money)
            {
                int choose;
                printf("[1] for Dollar...\n");
                printf("[2] for Euro ....\n");
                printf("[3] for Peso ...\n");
                scanf("%d",&choose);
                switch (choose)
                {
                case 1 :return(money/83.69);
                       break;
                case 2 :return(money/93.6);
                       break;
                case 3 :return(money/0.086);
                       break;
                default:printf("INVAID INPUT MONEY: \n");
                       break;
                }

            }
         float Dollar(float money)
            {
                int choose;
                printf("[1] for Rupees ...\n");
                printf("[2] for Euro ...\n");
                printf("[3] for Peso.... \n");
                scanf("%d",&choose);
                switch (choose)
                {
                case 1 :return(money*83.69);
                       break;
                case 2 :return(money*0.8938);
                       break;
                case 3 :return(money*965.0);
                       break;
                default:printf("INVAID INPUT MONEY: \n");
                       break;
                }
            }
         float Euro(float money)
            {
                int choose;
                printf("[1] for Dollar... \n");
                printf("[2] for Rupees... \n");
                printf("[3] for Peso ...\n");
                scanf("%d",&choose);
                switch (choose)
                {
                case 1 :return(money*1.1187);
                       break;
                case 2 :return(money*93.6);
                       break;
                case 3 :return(money*1083.03);
                       break;
                default:printf("INVAID INPUT MONEY: \n");
                       break;
                }
            }
         float Peso(float money)
            {
                int choose;
                printf("[1] for Dollar \n");
                printf("[2] for Euro \n");
                printf("[3] for Rupees \n");
                scanf("%d",&choose);
                switch (choose)
                {
                case 1 :return(money/965.07);
                       break;
                case 2 :return(money/1083.03);
                       break;
                case 3 :return(money/11.57);
                       break;
                default:printf("INVAID INPUT MONEY: \n");
                       break;
                }
            }
        void Currency( )
            {
                int coin,money;float save_money;
                printf("\nSELECT Currency.....\n");
                printf("[1] ENTER Rupees \n");
                printf("[2] ENTER Dollar \n ");
                printf("[3] ENTER Euro \n");
                printf("[4] ENTER Peso \n");
                scanf("%d",&coin);
                switch(coin)
                    {
                        case 1 : printf("\nENTER RUPEES MONEY = Rs ");
                                 scanf("%d",&money);
                                 save_money=Rupees(money);
                                 printf("[%f]",save_money);
                                 Continue();
                                 break;
                        case 2 : printf("\n DOLLAR MONEY = $ ");
                                 scanf("%d",&money);
                                 save_money=Dollar(money);
                                 printf("[%f]",save_money);
                                 Continue();
                                 break;
                        case 3 : printf("\nENTER EURO MONEY = Euro ");
                                 scanf("%d",&money);
                                 save_money=Euro(money);
                                 printf("[%f]",save_money);
                                 Continue();
                                 break;
                        case 4 : printf("\nENTER PESO MONEY = Peso ");
                                 scanf("%d",&money);
                                 save_money=Peso(money);
                                 printf("[%f]",save_money);
                                 Continue();
                                 break;
                        default: printf("INVALID CURRENCY FORM THE GIVEN OPTIONS------\n");
                                break;
                    }
            }
            
              void Continue()
                     {
                            char yes;
                            printf("\tCONTINUE FOR CLICK [Y]/[N] => ");
                            scanf("%s",&yes);
                            if(yes=='y'||yes=='Y')
                                   {
                                          Currency();
                                   }
                            else
                                   {
                                          exit(0);
                                   }
                     }

int main()
     {
        
       //  printf("CURRENCY = ");
       
        Currency();
        return 0;
    }