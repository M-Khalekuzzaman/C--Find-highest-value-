#include<stdio.h>
#define MAX 6
int main()
{
    int number[MAX],i,j,max = 0,num_pos = 0;
    printf("Input 5 integer : ");
    for(i = 0;i<MAX;i++)
    {
        scanf("%d",&number[i]);
    }
    for(j= 0;j<MAX;j++)
    {
        if(number[j]>max){
            max = number[j];
            num_pos = j;
        }
    }
    printf("Highest value : %d\n Position : %d\n",max,num_pos+1);
    getch();
}
