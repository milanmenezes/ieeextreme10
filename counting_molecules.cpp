#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    long long int c,h,o,temp;
    int f=0;
    long long int W=0,C=0,G=0;
    cin>>c>>h>>o;
    for(;;)
    {
        f=0;
        if((c-6)>=0 && (h-12)>=0 && (o-6)>=0)
        {
            G++;
            c=c-6;
            h=h-12;
            o=o-6;
            f=1;
        }

        else {
        if((c-1)>=0 && (o-2)>=0){
            C++;
            c--;
            o=o-2;
            f=1;
        }


        if((h-2)>=0 && (o-1)>=0)
        {
            W++;
            h=h-2;
            o--;
            f=1;
        }
        if(!f)
            break;
        }
    }

    temp=(o/12);
    G-=temp;
    o+=(6*temp);
    h+=(12*temp);
    c+=(6*temp);

    while(c || h || o)
    {
        f=0;
        if((c-1)>=0 && (o-2)>=0){
            C++;
            c--;
            o=o-2;
            f=1;
        }
        else if((h-2)>=0 && (o-1)>=0)
        {
            W++;
            h=h-2;
            o--;
            f=1;
        }
        if(!f)
            break;
        }
    if(o || c || h)
    {
        cout<<"Error"<<endl;
    }

    else
    cout<<W<<" "<<C<<" "<<G<<endl;

    return 0;
}