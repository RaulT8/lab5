//
// Created by yoonl on 3/27/2022.
//
#include "consola.h"
#include "Patrat.h"
#include <iostream>
#include <cmath>
using namespace std;

Patrat re[20];

void citesteVector(int &n,Patrat v[]){
    float x1,x2,y2,y1;
    int i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<endl;
        cout<<"Introduceti coordonatele pentru patratul: "<<i+1<<endl;
        cout<<"x1= ";
        cin>>x1;
        cout<<"y1= ";
        cin>>y1;
        cout<<"x2= ";
        cin>>x2;
        cout<<"y2= ";
        cin>>y2;
        cout<<endl;

        if(ePatrat(x1,y1,x2,y2)) {
            Patrat p(x1,y1,x2,y2);
            v[i] = p;
            cout<<v[i]<<" ";
        }
        else
        {
            cout<<"Patrat incorect! Reintroduceti alt set de coordonate: ";
            i--;
        }
    }
}

void afiseazavector(int &n,Patrat v[]){
    for(int i=0;i<n;i++) {
        cout << "Patrat: " << i+1 << endl;
        cout<<v[i]<<endl;
    }
}

void afiseazasecvmax(int &n,Patrat v[]){
    int p1=0;
    cout<<endl;
    cout<<"Secventa maxima de patrate de aceeasi dimensiune este: "<<endl;

    for(int i=0;i<n;i++)
            if(v[i].diagonala() == v[i+1].diagonala())
            {
                re[p1] = v[i];
                p1++;
            }
    for(int i=0;i<p1;i++)
        cout<<re[i]<<endl;
}

void maximPatrat(int &n,Patrat v[]){
    float maxDiagonala = 0.0;
    int i;
    Patrat p;
    for(i=0;i<n;i++)
    {
        if(v[i].diagonala()>maxDiagonala)
        {
            maxDiagonala = v[i].diagonala();
            p = v[i];
        }
    }
    cout<<p;
}

bool ePatrat(float x1,float x2,float y1,float y2){
    if(abs(x1-y1) == abs(x2-y2))
        return true;
    return false;
}

void primulCadran(int &n, Patrat v[],Patrat rez[],int &j){
    j=0;
    for(int i=0;i<n;i++)
        if(v[i].get_x1()>0 && v[i].get_x2() && v[i].get_x2() && v[i].get_y2())
            rez[j++] = v[i];
}

void Options()
{
    cout<<endl<<"1.Citeste coordonatele diagonalei patratului: "<<endl;
    cout<<"2.Afiseaza lista de patrate: "<<endl;
    cout<<"3.Cel mai mare patrat: "<<endl;
    cout<<"4.Patratele aflate doar in primul cadran: "<<endl;
    cout<<"5.Afiseaza secventa maxima de patrate cu aceeasi dimensiune: "<<endl;
    cout<<"x.  Iesire"<<endl;
}
