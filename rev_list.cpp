#include "easy_list.h"

void itc_rev_list(vector <int> &mass)
{
    int le = len(mass) - 1, i = 0;
    //cout <<"le = " <<le <<endl;
    while(le >= i)
    {
        cout <<mass[le] <<" ";
        le --;
    }
}
