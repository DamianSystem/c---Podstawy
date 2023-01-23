#include <iostream>

using namespace std;

float x,y;
int wybor;

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
        cout <<"Wybierz: ";
        cin >> wybor;
        switch (wybor) // zmienna wybor
        {
        case 1: //instrukcja pod numerem 1

        {
            cout<<"Suma = "<<x+y;
        }
        break;

        case 2: //instrukcja pod numerem 2

        cout<<"Roznica = "<<x-y; //mo¿e byc bez klamer przy jednej instrukcji
        break;

        case 3: //instrukcja pod numerem 3

        cout<<"Iloczyn = "<<x*y;
        break;

        case 4: //instrukcja pod numerem 41

            if (y=0) cout<<"Nie dzielimy przez zero!";
            else cout<<"Iloraz = "<<x/y;
        break;

        case 5: //instrukcja pod numerem 41

            exit(0)
        break;
        default: //w pozosta³ych przypadkach
        cout<<"Nie ma takiej opcji w menu!";
        }
    }
    return 0;
}
