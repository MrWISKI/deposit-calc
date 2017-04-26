#include <stdio.h>

int main () {
    int day;
    float money, money1;
    printf ("Specify the Deposit amount (RUR): ");
    scanf ("%f", &money);
    while (money<10000.0) {
        printf ("Invalid Deposit amount! Enter again: ");
        scanf ("%f", &money);
    }
    money1=money;
    printf ("Specify the Deposit term (days): ");
    scanf ("%d", &day);
    while (day>365 || day<0) {
        printf ("Wrong term Deposit! Enter again: ");
        scanf ("%d", &day);
    }
    if (money<=100000) {
        if (day<241) {
            if (day<121) {
                if (day<31) {
                    money1-=money*day*0.1/365;
                }
                else money1+=money*day*0.02/365;
            }
            else money1+=money*day*0.06/365;
        }
        else money1+=money*day*0.12/365;
    }
    else {
        if (day<241) {
            if (day<121) {
                if (day<31) {
                    money1-=money*day*0.1/365;
                }
                else money1+=money*day*0.03/365;
            }
            else money1+=money*day*0.08/365;
        }
        else money1+=money*day*0.15/365;
    }
    printf ("The Deposit amount at the end of the period: %.2f!\n", money1);
    printf ("The contribution of yield: %.2f!\n", money1-money);
    return 0;
}
