#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Witaj pomyslalem sobie liczbe 1..100" << endl;
    srand(time(NULL)); //start ramdomaizing, zacznij generowa� liczby losowe, ma by� u�yta tylko raz w programie
    //time(NULL)-pobieraczas w sekundach od 1970 roku do teraz
    // uwaga przy pojedynczym za��czeniu b�dzie widoczna cykliczno�� przy serii ju� nie b�dzie

    liczba = rand()%100+1; //rand - random liczba losowa
    //wylosuje liczb� z przedia�u 0..99 i dodam 1 aby przedzia� by� od 1-100
//    cout<<liczba<<endl;

    while(liczba!=strzal)
    {
        ile_prob++;
        cout<<"Zgadnij jaka (to twoja "<<ile_prob <<"proba :";
        cin>>strzal;
        if (strzal==liczba)
            cout<<"Udalo sie! Wygrywasz w "<<ile_prob <<" probie" <<endl;
        else if (strzal<liczba)
            cout<<"To za malo"<<endl;
        else if (strzal>liczba)
            cout<<"To za duzo"<<endl;

    }
    getchar();getchar();//linijka pauzuj�ca program do momentu az ktos wcisnie klawisz dwa razy
    //system("pause");
    return 0;
}
