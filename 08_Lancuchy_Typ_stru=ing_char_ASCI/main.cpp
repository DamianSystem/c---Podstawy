#include <iostream>

using namespace std;

int main()
{



    //*char napis[20]="Ala ma kota"; // [] w nawiasie podajemy ilosc znaków
    //* \0 - znak null na koncu ³añcucha znaków jest dodawany automatycznie na koñcu ³añcucha
    //* liczymy znaki od 0
    //*cout<<napis<<endl;

   //* napis="kot"; - nie dzia³¹ dla powy¿szych linijek

    //**char *napis="Ala ma kota"; // * oznacza u¿ycie wskaŸnika
    //**cout<<napis<<endl;
    //**napis="kot";
    //**cout<<napis<<endl;

    string napis="Ala ma kota"; // deklaracja zmiennej znakowej
    // uwaga numerujemy znaki od 0

    cout<<napis[0]<<endl; //- wyswietlenie pierwsego znaku w zmiennej


    return 0;
}
