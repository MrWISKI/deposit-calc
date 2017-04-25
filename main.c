#include <stdio.h>

int main () {
    int money, day;
    printf ("Specify the Deposit amount (RUR): ");
    scanf ("%d", money);
    while (maney<10000) {
        printf ("Invalid Deposit amount! Enter again: ");
        scanf ("%d", money);
    } 
    printf ("Specify the Deposit term (days): ");
    while (day>365) {
        printf ("Wrong term Deposit! Enter again: ");
        scanf ("%d", day);
    }
    scanf ("%d", day);
    return 0;
}
