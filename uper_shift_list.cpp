#include "easy_list.h"

void itc_super_shift_list(vector <int> &mass, int n)
{
    int le = len(mass), i = 0;
    vector <int> ou;
    if(n > le)
    {
        while(n > le){n = n - le;}
    }
    while(i < le)
    {
        if(i + n >= le){ou.push_back(mass[i + n - le]);}
        else{ou.push_back(mass[i + n]);}
        i ++;
    }
    out(ou);
}
