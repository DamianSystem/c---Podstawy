#include <iostream>
#include <Windows.h>// aby sleep zadzia³a³
#include <cstdlib>
using namespace std;

int main()
{
       for(int i=15; i>=0; i--)
    // i=1 od jakiej wartoœci licznika pêtli zaczynamy
    //i<=10 warunek w pêtli
    //i++ - inaczej i=i+1
    {
        Sleep(1000);//wstrzymanie programu w milisekundach 1000milisekund=1sekunda
        system("cls");
        cout << i << endl;
    }
    cout <<"JEBUT"<< endl;
    return 0;
}
