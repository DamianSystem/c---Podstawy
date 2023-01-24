#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h> // aby wykonać responsywne sterowanie tak jak w grach komuperowych

using namespace std;

float x,y;
char wybor; // zmiana typu danych na char #include <conio.h>

int main()
{
    for(;;)
    {


        cout << "Podaj 1 liczbe: " ;
        cin>> x;
        cout << "Podaj 2 liczbe: " ;
        cin>> y;

        cout<<endl;
        cout<<"MENU GLOWNE"<<endl;
        cout<<"---------------"<<endl;
        cout<<"1. Dodawanie"<<endl;
        cout<<"2. Odejmowanie"<<endl;
        cout<<"3. Mnozenie"<<endl;
        cout<<"4. Dzielenie"<<endl;
        cout<<"5. Koniec programu"<<endl;

        cout <<endl; //#include <conio.h>
        wybor=getch(); //#include <conio.h>

        switch (wybor) // zmienna wybor
        {
        case '1': //instrukcja pod numerem 1 zmiana na apostrofy  #include <conio.h>

        {
            cout<<"Suma = "<<x+y;
        }
        break;

        case '2': //instrukcja pod numerem 2 zmiana na apostrofy #include <conio.h>

        cout<<"Roznica = "<<x-y; //mo¿e byc bez klamer przy jednej instrukcji
        break;

        case '3': //instrukcja pod numerem 3 zmiana na apostrofy #include <conio.h>

        cout<<"Iloczyn = "<<x*y;
        break;

        case '4': //instrukcja pod numerem 4 zmiana na apostrofy #include <conio.h>

            if (y=0) cout<<"Nie dzielimy przez zero!";
            else cout<<"Iloraz = "<<x/y;
        break;

        case '5': //instrukcja pod numerem 5 zmiana na apostrofy #include <conio.h>

            exit(0);
        break;
        default: //w pozosta³ych przypadkach
        cout<<"Nie ma takiej opcji w menu!";
        }
        getchar();
        getchar();
        system("cls");
    }
    return 0;
}
