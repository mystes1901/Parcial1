#include <iostream>

using namespace std;

int main()
{
    float defx=0, defy=0;
    float atax=0, atay=0;
    float vel_at, vel_def;
    float distancia=0;
    float puntomedio;
    float tiempo, g=9.81;

    cout<<"Distancia entre ambos frentes (m): ";cin>>distancia;
    cout<<"Velocidad de la bala de ataque (m/s): ";cin>>vel_at;
    cout<<"Velocidad de la bala de defensa (m/s): ";cin>>vel_def;

    puntomedio=distancia/2;

    tiempo=puntomedio/vel_at;

       cout<<"tiempo: "<<tiempo<<endl;


    atax=atax+(vel_at*tiempo);
    atay=(atay+(vel_at*tiempo)-((1/2)*g*(tiempo*tiempo)));



       cout<<"\n\nCoordenada Y: "<<atay<<endl;

    cout<<"\n\nCoordenada Y: "<<atay<<endl;

    cout<<"\n\nCoordenada Proyectil de ataque: ("<<atax<<" , "<<atay<<") "<<endl;








}
