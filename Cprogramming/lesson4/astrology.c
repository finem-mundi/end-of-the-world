#include <stdio.h>

int main() {
    int year, month, day;

    printf("Welcome to the Mergen's Astrology!\n");
    printf("Please enter your birthyear (year, month, day): ");
    scanf("%d%d%d", &year, &month, &day);

    if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
        printf("Your Zodiac Sign is Aries.\n");

    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
        printf("Your Zodiac Sign is Taurus.\n");

    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
        printf("Your Zodiac Sign is Gemini.\n");

    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
        printf("Your Zodiac Sign is Cancer.\n");

    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
        printf("Your Zodiac Sign is Leo.\n");

    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
        printf("Your Zodiac Sign is Virgo.\n");

    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
        printf("Your Zodiac Sign is Leo.\n");

    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
        printf("Your Zodiac Sign is Scorpio.\n");

    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
        printf("Your Zodiac Sign is Sagittarius.\n");

    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
        printf("Your Zodiac Sign is Capricorn.\n");

    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
        printf("Your Zodiac Sign is Aquarius.\n");

    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20))
        printf("Your Zodiac Sign is Pisces.\n");

    else
        printf("Invalid date entered.\n");
    

    


    return 0;
}
