#include <iostream>
#include <random>
#include <time.h>
#include <windows.h>
using namespace std;
int i;
int howmany;
//int bytes = rand() % 100;
void generator()
{
    for(i = 1; i <= howmany; i++)
    {
        system("Color d");
        cout<<"__asm _emit 0x"<<rand() % 100<<endl;

    }
}
int main()
{
    cout<<"How many you want bytes: "<<endl;
    cin>>howmany;
    generator();


    return howmany;
}
