#include <iostream>

using namespace std;

int main()
{
    float defx=0, defy=0;
    float atax=0, atay=0;
    float vel_at, vel_def;
    float distancia=0;
    float puntomedioA,puntomedioB;
    float tiempoA,tiempoD, g=9.81;

    cout<<"Distancia entre ambos frentes (m): ";cin>>distancia;
    cout<<"Velocidad de la bala de ataque (m/s): ";cin>>vel_at;
    cout<<"Velocidad de la bala de defensa (m/s): ";cin>>vel_def;

    puntomedioA=distancia/2;
    puntomedioB=distancia/2;


    tiempoA=puntomedioA/vel_at;
    tiempoD=puntomedioB/vel_def;

       cout<<"tiempo: "<<tiempoA<<endl;


    atax=atax+(vel_at*tiempoA);
    atay=atay+(vel_at*tiempoA)-((g*tiempoA*tiempoA)/2);

    defx=distancia+(vel_def*tiempoD);
    defy=defy+(vel_def*tiempoD)-((g*tiempoD*tiempoD)/2);




    cout<<"\n\nCoordenada Y: "<<atax<<endl;
    cout<<"\n\nCoordenada Y: "<<atay<<endl;
    cout<<"\n\nCoordenada Proyectil de ataque: ("<<atax<<" , "<<atay<<") "<<endl;


    cout<<"\n\nCoordenada Y: "<<defx<<endl;
    cout<<"\n\nCoordenada Y: "<<defy<<endl;
    cout<<"\n\nCoordenada Proyectil de ataque: ("<<defx<<" , "<<defy<<") "<<endl;








}
