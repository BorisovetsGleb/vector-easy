#include "easy_list.h"

void itc_even_parts_list(const vector <int> &mass, vector <int> &mass2)
{
    int lenn = len(mass);
    int i = 0;
    while(i <= lenn)
    {
        mass2.push_back(mass[i]);
        i = i + 2;
    }
    out(mass2);
}
