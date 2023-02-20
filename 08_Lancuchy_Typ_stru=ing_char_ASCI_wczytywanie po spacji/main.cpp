#include <iostream>

using namespace std;

int main()
{
    string napis; //

    cout << "Podaj napis: " ;
    //cin>>napis; //pobierze z zestawu wyrazów tylko zestaw znakó do pierwszej spacji
    getline(cin,napis); //pobierze ca³¹ sentencje, nie tylko zestaw znaków do spacji

    cout<<napis;

    return 0;
}
