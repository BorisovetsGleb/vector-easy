#include "easy_list.h"

void itc_even_index_list(const vector <int> &mass, vector <int> &mass2)
{
    int lenn = len(mass);
    int i = 0;
    while(i <= lenn)
    {
        mass2.push_back(mass[i]);
        i = i + 2;
    }
}

int len(const vector <int> &mass)
{
    /*int i = 0;
    while(mass[i])
    {
        i ++;
    }*/
    return mass.size();
}

void out(vector <int> a)
{
    //cout <<endl;
    int i = 0, le = len(a);
    //cout <<"le = "<<le<<endl;
    while(i < le)
    {
        //cout <<"i = "<<i <<"  ";
        cout <<a[i] <<" ";
        i ++;
    }
}

int lenn(vector <int> &mass)
{
    int i = 0;
    while(mass[i])
    {
        i ++;
    }
    return i;
}
