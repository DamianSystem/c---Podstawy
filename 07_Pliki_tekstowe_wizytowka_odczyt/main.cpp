#include <iostream>
#include <fstream> //file stream strumieñ danych // aby zapisywaæ pliki na dysku
#include <cstdlib>
using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    fstream plik; // deklkaracja zmiennej plikowej
    plik.open("wizytowka.txt",ios::in ); //otwiermy plik, wizytowka.txt -œcie¿ka pliku,
    //ios::in - parametr otwarcia, strumieñ danych z pliku, wprowadź do programu

    if (plik.good()== false)
    //funkcja sprawdzająca czy dany plik istnieje zwraca prade jak istnieje a nieprawde jak nieistnieje
    {
            cout<<"Plik nie istnieje!";
            exit(0);//Zakończenie programu

    }

    string linia;
    int nr_linii=1;

    while(getline(plik, linia)) //getline() - funkcja pobiera linię z pliku
    // uwaga funkcjia zwróci fałsz jeśli nie ma lini, jak będzie linia odczyt jest kontynuowany
    // Uwaga linie w pliku tekstowym numerowane są od 1 nie od 0
    {
        switch (nr_linii)
        {
            case 1: imie = linia; break;
            case 2: nazwisko = linia; break;
            case 3: nr_tel = atoi(linia.c_str()); break; // linia.c_str() - linia tekstu przekonwertowana funkcją atoi (a to integer)
        }

        nr_linii++;

    }
    cout<<imie<<endl; //zamiana cout na plik powoduje zapis w pliku z danych
    cout<<nazwisko<<endl; //zamiana cout na plik powoduje zapis w pliku z danych
    cout<<nr_tel<<endl; //zamiana cout na plik powoduje zapis w pliku z danych

    plik.close();//zamykanie otwartego pliku

    return 0;
}
