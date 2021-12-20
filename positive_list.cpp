#include "easy_list.h"

int itc_positive_list(const vector <int> &mass)
{
    int le = len(mass), i = 0, col = 0;
    while(i < le)
    {
        if(mass[i] > 0){col ++;}
        i ++;
    }
    return col;
}
