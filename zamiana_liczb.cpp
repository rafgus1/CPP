#include <iostream>
using namespace std;
int decToBin(int a, int b){
    if(b>1)
        if(a>0&&b<10)
            return decToBin(a/b, b)*10+a%b;
        else
            return 0;
    else
        return 0;
}
int main()
{
    int liczba;
    int b;
    char binarna[32];
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Podaj podstawe systemu (2..9): ";
    cin >> b;
    cout << decToBin(liczba, b);
    return 0;
}
    /*itoa(liczba, binarna,16); komentarz
    cout << binarna;
    int pozycja=0;
    while(liczba>0){
        binarna[pozycja]=liczba%2;
        liczba=liczba/2;
        pozycja++;
    }
    while(pozycja>0){
        cout << binarna[pozycja-1];
        pozycja--;
    }
    char zamiana[32];
    itoa(liczba, zamiana,2);
    cout << liczba << " w systemie binarnym to " << zamiana;*/
