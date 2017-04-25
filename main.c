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
    scanf ("%d", day);
    while (day>365) {
        printf ("Wrong term Deposit! Enter again: ");
        scanf ("%d", day);
    }
    if (money<=100000) {
        if (day<241) {
            if (day<121) {
                if (day<31) {
                    money-=money*day*0.1/365;
                }
                else money+=money*day*0.02/365;
            }
            else money+=money*day*0.06/365;
        }
        else money+=money*day*0.12/365;
    }
    else {
        if (day<241) {
            if (day<121) {
                if (day<31) {
                    money-=money*day*0.1/365;
                }
                else money+=money*day*0.03/365;
            }
            else money+=money*day*0.08/365;
        }
        else money+=money*day*0.15/365;
    }
    printf ("The Deposit amount at the end of the period: %d!", money);
    return 0;
}
