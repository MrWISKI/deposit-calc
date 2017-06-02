#include <stdio.h>
#include "deposit.h"

int main () {
    int day;
    double money, money1;
    printf ("Specify the Deposit amount (RUR): ");
    scanf ("%lf", &money);
    checkMoney (&money);
    money1=money;
    printf ("Specify the Deposit term (days): ");
    scanf ("%d", &day);
    checkDay (&day);
    calculationDeposit (&money1, money, day);
    printf ("The Deposit amount at the end of the period: %.2f!\n", money1);
    printf ("The contribution of yield: %.2f!\n", money1-money);
    return 0;
}
