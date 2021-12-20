#include "easy_list.h"

void itc_rev_par_list(vector <int> &mass)
{
    //out(mass);
    int le = len(mass), i = 0;
    //cout <<"le = "<< le <<endl;
    vector <int> ou = {};
    while(i < le)
    {
        if(i != le)
        {
            if(le == i + 1){ou.push_back(mass[i]); /*cout <<"USED" <<endl;*/}
            else{ou.push_back(mass[i + 1]); ou.push_back(mass[i]);}
            //cout <<"i = " <<i <<" le = " <<le <<endl;
            //cout <<"mass[i + 1] = " <<mass[i + 1] <<" mass[i] = " <<mass[i] <<endl;
        //ou.push_back(i + 1);
        //ou.push_back(i);
        i = i + 2;
        }
    }
    out(ou);
}
