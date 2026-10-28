#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Welcome to the Mergen ATM!\n");
    printf("I am your assistant, Coinly!");

    printf("Please enter your PIN code: ");
    int pin_code;
    double random;
    scanf("%d", &pin_code);

    srand(time(NULL));
    
    random = (rand() % 99999) + 10000;


    if (pin_code == 0000) {
        printf("Welcome!");

        printf("Would you like see your balance?\n1 for YES, 2 for NO");
        int bool_check;
        scanf("%d", &bool_check);

        if (bool_check == 1) 
            printf("Your balance is %.2lf", random);
        else 
            printf("See you next time!");

    }
    else {
        printf("Erm, that's not right.");
    }



    return 0;
}
