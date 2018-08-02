#include "smartctl.h"

int Factorial(const int a)
{
	return a;
}

int IsPrime(const int a)
{
	return a;
}


//ID# ATTRIBUTE_NAME          FLAG     VALUE WORST THRESH TYPE      UPDATED  WHEN_FAILED RAW_VALUE
//1   2                       3        4     5     6      7         8        9           10

//5   Reallocated_Sector_Ct   0x0033   200   200   140    Pre-fail  Always       -       0
//197 Current_Pending_Sector  0x0032   200   200   000    Old_age   Always       -       0
//198 Offline_Uncorrectable   0x0030   100   253   000    Old_age   Offline      -       0


//./smartctl -A /dev/sda | grep -i Reallocated_Sector_Ct | awk '{print $6}'

//get RAW_VALUE of 198
//./smartctl -A /dev/sda | grep -i Offline_Uncorrectable | awk '{print $10}'

