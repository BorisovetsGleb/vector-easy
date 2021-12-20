#include "easy_list.h"

bool itc_same_parts_list(const vector <int> &mass)
{
    int le = len(mass), i = 1;
    while(i < le)
    {
        if((mass[i] < 0 && mass[i - 1] < 0) || (mass[1] >= 0 && mass[i - 1] >= 0)){return 1;}
        //cout <<"mass[i] = " <<mass[i] <<" mass[i - 1] = " <<mass[i - 1] <<endl;
        i ++;
    }
    return 0;
}
