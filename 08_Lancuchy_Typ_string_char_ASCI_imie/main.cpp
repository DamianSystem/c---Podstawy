#include <iostream>

using namespace std;

int main()
{
    string imie;

    cout << "Podaj imie:";
    cin>>imie;

    int dlugosc=imie.length(); //dlugosc imienia bedzie przechowywana
    // .length() - funkcja liczy ilosc znakow w nazwie
    //cout<<dlugosc;

    if (imie[dlugosc-1]=='a')
    // uwaga pojedyncza literka jest zapisywana w ' ' a nie w " " np. 'a'
    //"a"=a \0
    //'a'= a
        cout<<"Wydaje mi sie, ze jestes kobieta";
        else cout<<"Wydaje mi sie, ze jestes facetem";
    return 0;
}
