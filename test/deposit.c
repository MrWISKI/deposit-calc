#include <stdio.h>

void checkMoney (double *money) {
    while (*money<10000.0) {
        printf ("Invalid Deposit amount! Enter again: ");
        scanf ("%lf", &(*money));
    }
}

void checkDay (int *day) {
    while (*day>365 || *day<0) {
        printf ("Wrong term Deposit! Enter again: ");
        scanf ("%d", &(*day));
    }
}

void calculationDeposit (double *money1, double money, int day) {
    if (money<=100000) {
        if (day<241) {
            if (day<121) {
                if (day<31) {
                    *money1-=money*day*0.1/365;
                }
                else *money1+=money*day*0.02/365;
            }
            else *money1+=money*day*0.06/365;
        }
        else *money1+=money*day*0.12/365;
    }
    else {
        if (day<241) {
            if (day<121) {
                if (day<31) {
                    *money1-=money*day*0.1/365;
                }
                else *money1+=money*day*0.03/365;
            }
            else *money1+=money*day*0.08/365;
        }
        else *money1+=money*day*0.15/365;
    }
}
