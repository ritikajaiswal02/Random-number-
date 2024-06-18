#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num,guess,count=1;
    char ch;
    do
    {
    srand(time(0));
    num = rand() % 100 + 1; //Generates number from 1 to 100;
    printf("%d",num);
        printf("\nGuess the number between 1-100 :");
        scanf("%d",&guess);
        while(num!=guess)
        {
            if(guess > num)
            {
                printf("\nEnter smaller number :");
                scanf("%d",&guess);
            }
            else if (guess < num)
            {
                printf("\nEnter bigger number :");
                scanf("%d",&guess);
            }
            count++;
        }
        printf("\nYou guessed it in %dth time",count);
        printf("\n\n\n***********Do you wish to continue***********\n(Y/N)>>>>>");
        scanf(" %s",&ch);
    }while(ch == 'Y' || ch == 'y');
    return 0;
}