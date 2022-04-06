#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int clase,ventas,compra,id,costo,d,tnt,cierre,val;
    double desc,descuento;
    string articulo,nom;
    ventas = 0;
    compra = 0;
    tnt = 0;
    d = 0;
    val = 0;
    costo = 0;
    desc = 0;
    do
    {
        cout <<"Digite el nombre del cliente"<< endl;
        cin >> nom;
        cout <<"Digite la identificacion del cliente"<< endl;
        cin >>id;
        cout <<"Pertence alguna clas: 1,2,3,4,5"<<endl;
        cout <<"Sino ingrese 0 "<<endl;
        cin >>clase;
        cout <<"Ingrese la cantidad a comprar"<<endl;
        cin >>tnt;
        switch (clase)
        {
            case 0:
                descuento=0;
                break;
            case 1:
                descuento= 0.05;
                break;
            case 2:
                descuento=0.08;
                break;
            case 3:
                descuento=0.1;
                break;
            case 4:
                descuento=0.12;
                break;
            case 5:
                descuento=0.15;
                break;
            default:
                cout<<"Ingrese una clase valida"<<endl;
        }
        do
        {
            cout<<"Ingrese el nombre del articulo a comprar"<<endl;
            cin >>articulo;
            cout<<"Ingrese el costo del articulo"<<endl;
            cin >>val;
            compra =val+compra;
            ventas++;
        }
        while(tnt != ventas);
        {
            cout <<"El costo total es de: "<<endl;
            descuento=compra-(compra*desc);
            cout <<descuento<<endl;
            d++;
            cout<<"Quiere saber la cantidad de ventas en el dia,Si(1) o No(0)"<<endl;
            cin >>cierre;
        }
    }
    while(cierre=1);
    {
        cout<<"El total de ventas en el dia es de: "<<ventas<<endl;
        cout<<"El total de clientes atendidos es de: "<<d<<endl;
    }
return 0;
}
