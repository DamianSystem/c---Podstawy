#include <iostream>

using namespace std;
float oceny[5]; float suma=0, srednia;
int i;

int main()
{
    for ( i=0; i<5 ;i++) //do pracy z tablicami
    {
        cout<<endl<<"Podaj "<<i+1<<" ocene: "; //numeracja
        cin>>oceny[i];
        suma=suma+oceny[i]; //suma+= oceny[i];
    }
    srednia = suma / (i);
 cout<<endl<<"srednia = "<<srednia;
    return 0;
}
