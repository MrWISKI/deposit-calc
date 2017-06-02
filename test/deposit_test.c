#include "ctest.h"
#include "deposit.h"
#include "deposit.c"

// Whem money = 50000
const double money = 50000;
double money1;

CTEST(calculationDeposit, day29__money50000)
{
	int day = 29;
	money1=money;
	calculationDeposit(&money1, money, day);
	double result = money1;
	double expected = money-money*day*0.1/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day30_money50000)
{
	int day = 30;
	money1=money;
	calculationDeposit(&money1, money, day);
	double result = money1;
	double expected = money-money*day*0.1/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day31_money50000)
{
	int day = 31;	
	money1=money;
	calculationDeposit(&money1, money, day);
	double result = money1;
	double expected = money+money*day*0.02/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day120_money50000)
{
	int day = 120;
	money1=money;
	calculationDeposit(&money1, money, day);
	double result = money1;
	double expected = money+money*day*0.02/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day121_money50000)
{
	int day = 121;
	money1=money;
	calculationDeposit(&money1, money, day);
	double result = money1;
	double expected = money+money*day*0.06/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day240_money50000)
{
	int day = 240;
	money1=money;
	calculationDeposit(&money1, money, day);
	double result = money1;
	double expected = money+money*day*0.06/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day241_money50000)
{
	int day = 241;
	money1=money;
	calculationDeposit(&money1, money, day);
	double result = money1;
	double expected = money+money*day*0.12/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day365_money50000)
{
	int day = 365;
	money1=money;
	calculationDeposit(&money1, money, day);
	double result = money1;
	double expected = money+money*day*0.12/365;
	ASSERT_DBL_NEAR(expected, result);
}

// Whem money = 100000
const double money2 = 100000;

CTEST(calculationDeposit, day29_money100000)
{
	int day = 29;
	money1=money2;
	calculationDeposit(&money1, money2, day);
	double result = money1;
	double expected = money2-money2*day*0.1/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day30_money100000)
{
	int day = 30;
	money1=money2;
	calculationDeposit(&money1, money2, day);
	double result = money1;
	double expected = money2-money2*day*0.1/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day31_money100000)
{
	int day = 31;
	money1=money2;
	calculationDeposit(&money1, money2, day);
	double result = money1;
	double expected = money2+money2*day*0.02/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day120_money100000)
{
	int day = 120;
	money1=money2;
	calculationDeposit(&money1, money2, day);
	double result = money1;
	double expected = money2+money2*day*0.02/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day121_money100000)
{
	int day = 121;
	money1=money2;
	calculationDeposit(&money1, money2, day);
	double result = money1;
	double expected = money2+money2*day*0.06/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day240_money100000)
{
	int day = 240;
	money1=money2;
	calculationDeposit(&money1, money2, day);
	double result = money1;
	double expected = money2+money2*day*0.06/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day241_money100000)
{
	int day = 241;
	money1=money2;
	calculationDeposit(&money1, money2, day);
	double result = money1;
	double expected = money2+money2*day*0.12/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day365_money100000)
{
	int day = 365;
	money1=money2;
	calculationDeposit(&money1, money2, day);
	double result = money1;
	double expected = money2+money2*day*0.12/365;
	ASSERT_DBL_NEAR(expected, result);
}

// Whem money = 200000
const double money3 = 200000;

CTEST(calculationDeposit, day29_money200000)
{
	int day = 29;
	money1=money3;
	calculationDeposit(&money1, money3, day);
	double result = money1;
	double expected = money3-money3*day*0.1/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day30_money200000)
{
	int day = 30;
	money1=money3;
	calculationDeposit(&money1, money3, day);
	double result = money1;
	double expected = money3-money3*day*0.1/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day31_money200000)
{
	int day = 31;	
	money1=money3;
	calculationDeposit(&money1, money3, day);
	double result = money1;
	double expected = money3+money3*day*0.03/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day120_money200000)
{
	int day = 120;
	money1=money3;
	calculationDeposit(&money1, money3, day);
	double result = money1;
	double expected = money3+money3*day*0.03/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day121_money200000)
{
	int day = 121;
	money1=money3;
	calculationDeposit(&money1, money3, day);
	double result = money1;
	double expected = money3+money3*day*0.08/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day240_money200000)
{
	int day = 240;
	money1=money3;
	calculationDeposit(&money1, money3, day);
	double result = money1;
	double expected = money3+money3*day*0.08/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day241_money200000)
{
	int day = 241;
	money1=money3;
	calculationDeposit(&money1, money3, day);
	double result = money1;
	double expected = money3+money3*day*0.15/365;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calculationDeposit, day365_money200000)
{
	int day = 365;
	money1=money3;
	calculationDeposit(&money1, money3, day);
	double result = money1;
	double expected = money3+money3*day*0.15/365;
	ASSERT_DBL_NEAR(expected, result);
}
