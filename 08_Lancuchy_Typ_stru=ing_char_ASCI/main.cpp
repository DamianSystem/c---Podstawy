#include <iostream>

using namespace std;

int main()
{



    //*char napis[20]="Ala ma kota"; // [] w nawiasie podajemy ilosc znak�w
    //* \0 - znak null na koncu �a�cucha znak�w jest dodawany automatycznie na ko�cu �a�cucha
    //* liczymy znaki od 0
    //*cout<<napis<<endl;

   //* napis="kot"; - nie dzia�� dla powy�szych linijek

    //**char *napis="Ala ma kota"; // * oznacza u�ycie wska�nika
    //**cout<<napis<<endl;
    //**napis="kot";
    //**cout<<napis<<endl;

    string napis="Ala ma kota"; // deklaracja zmiennej znakowej
    // uwaga numerujemy znaki od 0

    cout<<napis[0]<<endl; //- wyswietlenie pierwsego znaku w zmiennej


    return 0;
}
