#include <stdio.h>

int main() {
    int year, month, day, bilig;

    printf("Welcome to the Mergen's Astrology!\n");
    printf("Please enter your birthyear (year, month, day): ");
    scanf("%d%d%d", &year, &month, &day);

    bilig = (year - 1026) % 60;

    if (bilig == 1 || bilig == 13 || bilig == 25 || bilig == 37 || bilig == 49)
        printf("You were born on the Year of the Rabbit.");

    else if (bilig == 50 || bilig == 2 || bilig == 14 || bilig == 26 || bilig == 38)
        printf("You were born on the Year of the Dragon.");

    else if (bilig == 51 || bilig == 3 || bilig == 15 || bilig == 27 || bilig == 39)
        printf("You were born on the Year of the Snake.");

    else if (bilig == 40 || bilig == 52 || bilig == 4 || bilig == 16 || bilig == 28)
        printf("You were born on the Year of the Horse.");
    
    else if (bilig == 41 || bilig == 53 || bilig == 5 || bilig == 17 || bilig == 29)
        printf("You were born on the Year of the Sheep.");
    
    else if (bilig == 30 || bilig == 42 || bilig == 54 || bilig == 6 || bilig == 18)
        printf("You were born on the Year of the Monkey.");

    else if (bilig == 31 || bilig == 43 || bilig == 55 || bilig == 7 || bilig == 19)
        printf("You were born on the Year of the Rooster.");

    else if (bilig == 20 || bilig == 32 || bilig == 44 || bilig == 56 || bilig == 8)
        printf("You were born on the Year of the Dog.");
        
    else if (bilig == 21 || bilig == 33 || bilig == 45 || bilig == 57 || bilig == 9)
        printf("You were born on the Year of the Pig.");

    else if (bilig == 10 || bilig == 22 || bilig == 34 || bilig == 46 || bilig == 58)
        printf("You were born on the Year of the Rat.");

    else if (bilig == 11 || bilig == 23 || bilig == 35 || bilig == 47 || bilig == 59)
        printf("You were born on the Year of the Ox.");

    else if (bilig == 60 || bilig == 12 || bilig == 24 || bilig == 36 || bilig == 48)
        printf("You were born on the Year of the Tiger.");

    else   
        printf("Invalid year");

    return 0;
}
