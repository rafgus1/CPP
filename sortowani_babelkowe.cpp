#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time( NULL ));
    int ile_liczb = 100000;
    int liczby[ile_liczb];
    for(int i=0;i<ile_liczb;i++)
         liczby[i]= rand()%ile_liczb;
    cout << ile_liczb;//liczba elementów w tablicy
    int temp;
    for(int i=0; i<ile_liczb-1;i++){
        for(int n=0; n<ile_liczb-1-i; n++){
            if(liczby[n]>liczby[n+1]){
                temp=liczby[n+1];
                liczby[n+1] = liczby[n];
                liczby[n] = temp;
            }
            //cout << liczby[n] << ", ";
        }
    //cout << liczby[4] << endl;
    }
    return 0;
}
