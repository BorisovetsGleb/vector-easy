#include "easy_list.h"

int itc_sl_list(const vector <int> &mass)
{
    int i = 0, bol = 0, le = len(mass);
    while(i < le)
    {
        if(i != 0 && mass[i] > mass[i - 1]){bol ++;}
        i ++;
    }
    return bol;
}
