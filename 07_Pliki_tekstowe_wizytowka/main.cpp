#include <iostream>
#include <fstream> //file stream strumieñ danych // aby zapisywaæ pliki na dysku

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    cout << "Podaj imie: "; cin>>imie;
    cout << "Podaj nazwisko: "; cin>>nazwisko;
    cout << "Podaj nr telefonu: "; cin>>nr_tel;

    fstream plik; // deklkaracja zmiennej plikowej
    plik.open("wizytowka.txt",ios::out | ios::app); //otwiermy plik, wizytowka.txt -œcie¿ka pliku,
    //ios::out - parametr otwarcia, strumieñ danych do pliku, otwarcie pliku do zapisu
    // | ios::app - input output stream append - dołącz do istniejącego pliku dane
    plik<<imie<<endl; //zamiana cout na plik powoduje zapis w pliku z danych
    plik<<nazwisko<<endl; //zamiana cout na plik powoduje zapis w pliku z danych
    plik<<nr_tel<<endl; //zamiana cout na plik powoduje zapis w pliku z danych

    plik.close();//zamykanie otwartego pliku

    return 0;
}
