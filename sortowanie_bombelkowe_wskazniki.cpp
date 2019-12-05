#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void zamien(int *a, int *b){ //a=5, b=6
    int temp=*a;
    *a = *b;
    *b = temp;
}
int main(){
    srand(time( NULL ));
    int ile_liczb = 10;
    int liczby[ile_liczb];
    for(int i=0;i<ile_liczb;i++){
         liczby[i]= rand()%ile_liczb;
         cout << liczby[i] << ", ";
    }
    //cout << ile_liczb;//liczba elementów w tablicy
    int temp;
    for(int i=0; i<ile_liczb-1;i++){
        for(int n=0; n<ile_liczb-1-i; n++){
            if(liczby[n]>liczby[n+1]){
                zamien(&liczby[n],&liczby[n+1]);
                /*temp=liczby[n+1];
                liczby[n+1] = liczby[n];
                liczby[n] = temp;*/
            }
            //cout << liczby[n] << ", ";
        }
    //cout << liczby[4] << endl;
    }
    cout << endl;
    for(int i=0;i<ile_liczb;i++){
         //liczby[i]= rand()%ile_liczb;
         cout << liczby[i] << ", ";
    }
    return 0;
}
