#include "easy_list.h"

void itc_rshift_list(vector <int> &mass)
{
    int le = len(mass), i = 0;
    vector <int> ou;
    while(i < le)
    {
        if(i + 1 == le){ou.push_back(mass[0]);}
        else{ou.push_back(mass[i + 1]);}
        i ++;
    }
    out(ou);
}
