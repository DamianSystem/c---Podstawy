#include <iostream>

using namespace std;

int main()
{
    string napis; //

    cout << "Podaj napis: " ;
    //cin>>napis; //pobierze z zestawu wyraz�w tylko zestaw znak� do pierwszej spacji
    getline(cin,napis); //pobierze ca�� sentencje, nie tylko zestaw znak�w do spacji

    cout<<napis;

    return 0;
}
