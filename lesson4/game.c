#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Welcome to the Mergen ATM!\n");

    printf("Please enter your PIN code: ");
    int pin_code;
    double random;
    scanf("%d", &pin_code);

    srand(time(NULL));
    
    random = (rand() % 99999) + 10000;


    if (pin_code == 0000) {
        printf("Welcome! ");

        printf("Would you like see your balance?\n1 for YES, 2 for NO. ");
        int bool_checkbal;
        scanf("%d", &bool_checkbal);

        if (bool_checkbal == 1) {
            printf("Your balance is %.2lf ", random);

            if (random >= 50000)
                printf("Wow! You are rich!\n");
            else
                printf("Oh dear, that's not good.\n");
                
                
            printf("Would you like to withdraw some money?\n1 for YES, 2 for NO. ");  
            int bool_checkwith;
            scanf("%d", &bool_checkwith);
            
            if (bool_checkbal == 1) {
                printf("How much?\n1 for 1000, 2 for 5000, 3 for 10000, 4 for 20000. ");
                int multibool_enough;
                scanf("%d", &multibool_enough);
                
                if (multibool_enough == 1) {
                    if (random >= 1000) {
                        printf("Your remaining balance: %.2lf", random - 1000);
                    }
                    else {
                        printf("Insufficient funds. Sorry about that.");
                    }
                }
                else if (multibool_enough == 2) {
                    if (random >= 5000) {
                        printf("Your remaining balance: %.2lf", random - 5000);
                    }
                    else {
                        printf("Insufficient funds. Sorry about that.");
                    }
                }
                else if (multibool_enough == 3) {
                    if (random >= 10000) {
                        printf("Your remaining balance: %.2lf", random - 10000);
                    }
                    else {
                        printf("Insufficient funds. Sorry about that.");
                    }
                }
                else if (multibool_enough == 4) {
                    if (random >= 20000) {
                        printf("Your remaining balance: %.2lf", random - 20000);
                    }
                    else {
                        printf("Insufficient funds. Sorry about that.");
                    }
                }
                else {
                    printf("Wrong number. Please start again");
                }
                
            }
                
            

        }

        else 
            printf("See you next time!");

    }
    else {
        printf("Erm, that's not right.");
    }



    return 0;
}