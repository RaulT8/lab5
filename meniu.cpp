//
// Created by yoonl on 3/27/2022.
//
#include "meniu.h"
#include <iostream>
#include "consola.h"
#include "Patrat.h"
using namespace std;

int runMeniu(Patrat v[],Patrat rez[]){
    int ok = 1,n,j;
    char optiune;
    while(ok == 1)
    {
        Options();
        cout<<"Dati optiunea: ";
        cin>>optiune;
        switch(optiune)
        {
            case '1':
                cout<<"Numarul de patrate: ";
                citesteVector(n,v);
                break;
            case '2':
                afiseazavector(n,v);
                break;
            case '3':
                maximPatrat(n,v);
                break;
            case '4':
                primulCadran(n,v,rez,j);
                afiseazavector(j,rez);
                break;
            case '5':
                afiseazasecvmax(n,v);
                break;
            case 'x':
                ok = 0;
                break;
            default:
                cout<<"Optiune gresita! reincercati: ";
        }
    }
    delete[] v;
}
