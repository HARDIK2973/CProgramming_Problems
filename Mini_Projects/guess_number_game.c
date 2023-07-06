#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int user_no;
    int try = 5;
    time_t t;
    srand((unsigned)time(&t));

    int randomnumber = rand() % 21;

    printf("This is Guessing Game.\n");
    printf("I have chosen number between 0-20 which you must guess.\n");

    printf("randomnumber : %d", randomnumber);

    do
    {
        /* code */
        printf("\nYou have %d try left.\n", try);
        printf("Enter a guess.");
        scanf("%d", &user_no);

        if (!(user_no <= 20))
        {
            printf("\nPlease Enter the valid number between 0-20.");
            scanf("%d", &user_no);
        }

        if (user_no == randomnumber)
            break;

        if (randomnumber < user_no)
            printf("\nSorry, %d is wrong number. My number is less than that", user_no);
        else if (randomnumber > user_no)
            printf("\nSorry, %d is wrong number. My number is greater than that", user_no);

        try--;

    } while (try > 0);

    if (user_no == randomnumber)
        printf("\n==> Congratulations: You guessed it!");
    else
        printf("\nSorry You lose this Game. My number was %d",randomnumber);

    return 0;
}