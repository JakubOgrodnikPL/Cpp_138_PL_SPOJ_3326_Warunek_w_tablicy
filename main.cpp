#include <iostream>
using namespace std;

int main()
{
    int x;
    int k;
    int a;
    char znak;
    int liczba;
    cin>>x;
    int t[x];
    for(int i=0;i<x;i++)
    {
        cin>>a;
        t[i]=a;
    }
    cin>>znak>>liczba;

    if(znak=='<')
    {
        for(int i=0;i<x;i++)
        {
            if(t[i]<liczba)
                cout<<t[i]<<endl;
        }
    }
    if(znak=='>')
    {
        for(int i=0;i<x;i++)
        {
            if(t[i]>liczba)
                cout<<t[i]<<endl;
        }
    }
    return 0;
}
