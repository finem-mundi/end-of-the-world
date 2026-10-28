// Usque ad finem mundi...
// Даалгавар 1. Хаалганы хонх

#include <stdio.h>
#define RATE 3450.0

void bell() {
    printf("Din-don!\n");
}

void line() {
    printf("----------\n");
}


int buuz(int a) {
    return a * 1500;
}

double to_mnt(double usd) {
    return usd * RATE;
}

double to_usd(double mnt) {
    return mnt / RATE;
}

int main() {
    
    printf("Даалгавар 1: Хаалганы хонх\n\n");

    for (int i = 0; i < 3; i++) {
        bell();
        line();
    }

    printf("\nДаалгавар 2: Буузны тооцоо\n\n");

    int buuz_Num, total_Price;
    scanf("%d", &buuz_Num);
    printf("Niit une: %d\n", buuz(buuz_Num));

    printf("\nДаалгавар 3: Валют хөрвүүлэгч\n\n");

    double usd, mnt;
    printf("USD: ");
    scanf("%lf", &usd);
    printf("MNT: ");
    scanf("%lf", &mnt);
    printf("\nMNT: %.2lf, USD: %.2lf\n", to_mnt(usd), to_usd(mnt));

    
    return 0;
}