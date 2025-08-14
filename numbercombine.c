#include<stdio.h>
void swap(int *a,int *b);
void permute(int arr[],int,int);

    void swap(int *a,int *b)
        {
            int temp=*a;
            *a=*b;
            *b=temp;
        }
    void permute(int arr[],int start,int end)
        {   
            if(start==end)
                {
                    for(int i=0;i<=end;i++)
                        {
                            printf("%d",arr[i]);
                        }
                    printf("\n");
                }
            else   
                {
                    for(int i=start;i<=end;i++)
                        {
                            printf("%d : ",start);
                            printf("%d : ",i);

                            swap((arr+start),(arr+i));      // main hai
                            printf("%d : ",start);
                            printf("%d : ",i);

                            // printf("%d",arr+start);
                            // printf("%d",arr+i);

                            permute(arr,start+1,end);       // recalling as recursion 
                               printf("%d : ",start);
                            printf("%d : ",i);

                            // printf("%d",arr+start);
                            // printf("%d",arr+i);

                            swap((arr+start),(arr+i));
                               printf("%d : ",start);
                            printf("%d : ",i);

                            // printf("%d",arr+start);         // last in swapping 
                            // printf("%d",arr+i);
                        }
                }
        }
    int main()
    {
        int arr[100],size;
        printf("ENTER HOW MANY NUMBERS OF COMBINATION SHOULD BE CREATE : ");  
        scanf("%d",&size);
        for(int i=0;i<size;i++)
            {
                scanf("%d",&arr[i]);                                                       
            }
        int n=sizeof(arr)/sizeof(arr[0]);
        permute(arr,0,size-1);
        return 0;
    }