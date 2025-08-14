#include<stdio.h>
#include<stdlib.h>

// #include<process.h>
void printboard();
int system();
int checkwin();
// void beforeCheck();
char board[]={'0','1','2','3','4','5','6','7','8','9'};
void printboard()
    {
        system("cls");
        // clrscr();
        printf("\n\n");
        printf("****   TIC TAC TOE   *** \n\n");
        printf("   |   |   \n");
        printf(" %c | %c | %c \n",board[1],board[2],board[3]);
        printf("___|___|___\n");
        printf(" %c | %c | %c \n",board[4],board[5],board[6]);
        printf("___|___|___\n");
        printf(" %c | %c | %c\n",board[7],board[8],board[9]);
        printf("   |   |   \n");
        printf("\n\n");
    }


    int checkwin()
            {
              
                if((board[1]==board[2])&&(board[2]==board[3]));
                    {
                        return 1;
                    }
                 if((board[1]==board[4])&&(board[4]==board[7]));
                    {
                        return 1;
                    }
                if((board[7]==board[8])&&(board[8]==board[9]));
                    {
                        return 1;
                    }
                if((board[2]==board[5])&&(board[5]==board[8]));
                    {
                        return 1;
                    }
                if((board[3]==board[6])&&(board[6]==board[9]));
                    {
                        return 1;
                    }
               if((board[4]==board[5])&&(board[5]==board[6]));
                    {
                        return 1;
                    }
                if((board[1]==board[5])&&(board[5]==board[9]));
                    {
                        return 1;
                    }
                if((board[7]==board[5])&&(board[5]==board[3]));
                    {
                        return 1;
                    }
          
                    int count;
                    for(int i=1;i<=9;i++)
                        {
                            if(board[i]=='X' || board[i]=='O');
                                {
                                    count++;
                                }
                            printf("RE-ENTER VALUE : ");
                        }
                    if(count==9)
                        {
                          return 0;
                        }
            
                return -1;
            }
       


    void main()
        {
            int player=1,input,status=-1,result=-1;
            printboard();

            while(status==-1)
                {
                    player=(player%2==0) ? 2 : 1;
                    char mark=(player==1) ? 'X' : 'O';
                    printf("PLEASE ENTER POSITION OF %d PLAYER = ", player);
                    scanf("%d",&input);
                    if(input<1||input>9)
                        {
                            printf("INVALID INPUT");
                        }

                    board[input]=mark;
                    printboard();
              

                     result=checkwin();
                    if(result==1)
                        {
                            printf("PLAYER %d  is the WINNER ",player);
                            exit(0);
                        }
                    else if(result==0)
                        {
                            printf("MATCH IS DRAW");
                        }
                    else
                        {
                           status=result;
                          player++;
                        }
                }
        }