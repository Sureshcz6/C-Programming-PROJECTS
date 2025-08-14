#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void RRB_Quest(int,int);
void iftrueRb(char,int,int);
void wrongRb(char,int,int);                     // this is a KBC OR objectives questions game or app
// void RRS_Quest(int,int);
// void iftrueRs(char,int,int);
// void wrongRs(char,int,int);
// void RRC_Quest(int,int);
// void iftrueRc(char,int,int);
// void wrongRc(char,int,int);
// void RRM_Quest(int,int);
// void iftrueRm(char,int,int);
// void wrongRm(char,int,int);
void Start();
        
        void RRB_Quest(int next_quest,int point)
            {
                char opti;
                switch(next_quest)
                    {
                        case 1: printf("WHO is the Father of Railway? \n");
                                printf("(a)William jasep\t  (b)Mr. Jorj Stenphension\n");
                                printf("(c)Panesela\t     (d)Mr. Scoten\t\t\n");
                                scanf("%s",&opti);
                                if(opti=='b'||opti=='B')
                                    {
                                        iftrueRb(opti,next_quest,point);
                                    }
                                else
                                    {
                                        wrongRb(opti,next_quest,point);
                                    }
                                break;
                        case 2: printf("Force=___?\n");
                                printf("(a)mass*acceleration\t (b)mass*volume\n");
                                printf("(c)mass*presure\t    (d)mass*velocity\t\t\n");
                                scanf("%s",&opti);
                                if(opti=='a'||opti=='A')
                                    {
                                        iftrueRb(opti,next_quest,point);
                                    }
                                else
                                    {
                                        wrongRb(opti,next_quest,point);
                                    }
                                break;
                        case 3: printf("First Train ran in the world at __ ?\n");
                                printf("(a)1825\t (b)1800\n");
                                printf("(c)1893\t    (d)1901\t\t\n");
                                scanf("%s",&opti);
                                if(opti=='a'||opti=='A')
                                    {
                                        iftrueRb(opti,next_quest,point);
                                    }
                                else
                                    {
                                        wrongRb(opti,next_quest,point);
                                    }
                                break;
                        case 4: printf("who was invented a steam engine Train ?\n");
                                printf("(a)Mr. Jorj Williamsion \t(b)Mr. Wasco dado\n");
                                printf("(c)Mr. Scoten man\t    (d)Mr. Jorj Stephension\t\n");
                                scanf("%s",&opti);
                                if(opti=='d'||opti=='D')
                                    {
                                        iftrueRb(opti,next_quest,point);
                                    }
                                else
                                    {
                                        wrongRb(opti,next_quest,point);
                                    }
                                break;
                        default: printf("FINISH QUESTION :: \n");
                                printf("[B]: FOR MENU SUBJECTS: \t");
                                printf("[E]: FOR EXIT QUIZE GAME: \n");
                                char elsw;
                                scanf("%s",&elsw);
                                if(elsw=='b'||elsw=='B')
                                    {
                                        Start();
                                    }
                                else
                                    {
                                        exit(0);
                                    }
                    }
            }
        void iftrueRb(char opti,int next_quest,int point)
                {
                    ++next_quest;
                    point+=1;
                    printf("\nRIGHT : [%c]\tPoints: [%d]\n\n",opti,point);
                    RRB_Quest(next_quest,point);
                }
        void wrongRb(char opti,int next_quest,int point)
                {
                    char elsw;
                    ++next_quest;
                    printf("\nWRONG ANSWER !: [%c] \\ Points: [%d]\t",opti,point);
                    printf(" [B]: CLICK FOR MENU SUBJECTS\t");
                    printf(" [N]: CLICK FOR CONTINOUS QUESTION\t");
                    printf(" [E]: CLICK FOR EXIT FOR THE QUIZES GAMES....");
                    scanf("%s",&elsw);
                    if(elsw=='b'||elsw=='B')
                        {
                            Start();
                        }
                    else if(elsw=='n'||elsw=='N')
                        {
                            RRB_Quest(next_quest,point);
                        }
                    else
                        {
                            exit(0);
                        }
                }
        void Start()
            {
                char Choose;
                static int point=0,next_quest=1;
                printf("\n\t\tCHOOSE SUBJECTS===>>\n");
                printf("\t[R] for RAILWAY        -->GROUP D \n");
                printf("\t[G] FOR BOTH RRB & SSC --> GK\n");
                printf("\t[C] for BOTH           --> CURRENT AFFAIR QUESTION \n");
                printf("\t[M] for BOTH           --> MAHTEMATICS\n ");
                scanf("%s",&Choose);
                switch(Choose)
                    {
                        case ('R'):RRB_Quest(next_quest,point);
                                       break;
                        // case ('g'||'G'):RRS_Quest(next_quest,point);
                        //                break;
                        // case ('c'||'C'):RRC_Quest(next_quest,point);
                        //                 break;
                        // case ('m'||'M'):RRM_Quest(next_quest,point);
                        //                 break;
                        default:printf("invalid input");
                              break;
                    }
            }
int main()
    {
        printf("\n\t\t\t\t\tWELCOME SSC AND RRB OF QUESTIONS QUIZES GAMES *** \n");
        printf("\t\t\tSTARTING ...\n\n");
        Start();
        return 0;
    }  