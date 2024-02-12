#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int MAX = 100;
    const int MIN = 1;
    int guess;
    int guesses=0;
    int num;
    srand(time(0));
    num = (rand() % MAX) + MIN;
    do
    {
        printf("Enter a number between 1 and 100 \n");
        scanf("%d",&guess);
        
        if (guess > num)
        {
            printf("Try a lower number\n");
        }
        else if (guess < num)
        {
            printf("Try a highier number\n");
        }
        else
        {
            printf("CORRECT YOU WON!!!\n");
        }
        guesses++;
    } 
    while (guess != num);

    printf("*************************************************\n");
    printf("CORRECT ANSWER IS : %d\n", num);
    printf("You tried %d times \n", guesses);

    return 0;
}