#include <iostream>
#include <fstream> // do plików
#include <cstdlib> //do exit

using namespace std;

float liczby[100];

int main()
{
   int nr_linii=1;
    string linia;


    fstream plik;
    plik.open("pomiary.txt", ios::in);

    if (plik.good()==false) cout<<"Nie mozna otworzyc pliku!";

    int licznik=0;

    while(!plik.eof()) // end of file - pokazuje wartoœæ true gdy jestesmy na koncu pliku (plik - nazwa zmiennej plikowej)
    {
        getline(plik,linia);
        liczby[licznik]=atof(linia.c_str()); //f - float, zmiana zmiennej do liczby zmienno przecinkowej
        licznik++;

    }
    plik.close();

    cout<<"ilosc pomiarow: "<<licznik<<endl<<endl;
    for (int i=0; i<licznik; i++)
    {
        cout<<liczby[i]<<endl;
    }

    return 0;
}
