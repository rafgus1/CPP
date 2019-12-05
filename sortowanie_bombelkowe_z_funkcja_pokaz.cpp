#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void zamien(int *a, int *b){
    int temp=*a;
    *a = *b;
    *b = temp;
}
void pokaz(int tab[], int ile){
    //int i_elem = sizeof(tab)/sizeof(tab[0]);
    for(int i=0;i<ile;i++){
         cout << tab[i] << ", ";
    }
}
int main(){
    srand(time( NULL ));
    int ile_liczb = 10;
    int liczby[ile_liczb];
    //cout << sizeof(liczby)/sizeof(liczby[0]) << endl;
    for(int i=0;i<ile_liczb;i++){
         liczby[i]= rand()%ile_liczb;
    }
    pokaz(liczby, ile_liczb);
    for(int i=0; i<ile_liczb-1;i++){
        for(int n=0; n<ile_liczb-1-i; n++){
            if(liczby[n]>liczby[n+1]){
                zamien(&liczby[n],&liczby[n+1]);
            }
        }
    }
    cout << endl;
    pokaz(liczby, ile_liczb);
    return 0;
}
