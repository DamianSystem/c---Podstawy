#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Witaj pomyslalem sobie liczbe 1..100" << endl;
    srand(time(NULL)); //start ramdomaizing, zacznij generowaæ liczby losowe, ma byæ u¿yta tylko raz w programie
    //time(NULL)-pobieraczas w sekundach od 1970 roku do teraz
    // uwaga przy pojedynczym za³¹czeniu bêdzie widoczna cyklicznoœæ przy serii ju¿ nie bêdzie

    liczba = rand()%100+1; //rand - random liczba losowa
    //wylosuje liczbê z przedia³u 0..99 i dodam 1 aby przedzia³ by³ od 1-100
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
    getchar();getchar();//linijka pauzuj¹ca program do momentu az ktos wcisnie klawisz dwa razy
    //system("pause");
    return 0;
}
