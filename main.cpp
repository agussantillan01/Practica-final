#include <iostream>
#include <cstdlib>
#include <cstdio>
#include<cstring>
#include <ctime>

using namespace std;
#include "funciones.h"
#include "resoluciones.h"

int main()
{
int opcion;
//vectores tipo int de los puntos
///PUNTO A
int vendedorMayor [5]={};
///PUNTO B
int artSinVenta[10]={};
///PUNTO C
int unidadesVendidas [5][10]={};
///PUNTO D
int sinVentaEn1 [5]={};
///PUNTO E
int ventaTotal [5]={};


while (true){
            system("cls"); //limpia pantalla
        cout << "MENU PRODUCCION "<< endl << "----------------------------------"<< endl;
        cout << "1 - CARGA DE DATOS"<<endl;
        cout << "2 - PUNTO A "<<endl;
        cout << "3 - PUNTO B"<<endl;
        cout << "4 - PUNTO C"<<endl;
        cout << "5 - PUNTO D"<<endl;
        cout << "6 - PUNTO E"<<endl;
        cout << "----------------------------------"<<endl;
        cout << "7 - Salir"<<endl;

        cout << endl<< "> ";
        cin>> opcion;
        system ("cls");

    switch (opcion){
        case 1:
            //los vectorers declarados en el main
            cargaDeInformacion (vendedorMayor,artSinVenta, unidadesVendidas,sinVentaEn1,ventaTotal);
            break;
        case 2:
            puntoA (vendedorMayor);
            break;
        case 3:
            puntoB (artSinVenta);
            break;
        case 4:
            puntoC (unidadesVendidas);
            break;
        case 5:
            puntoD (sinVentaEn1);
            break;
        case 6:
            puntoE (ventaTotal);
            break;
        case 7:
            cout << "GRACIAS POR USAR EL PROGRAMA!! =)"<<endl;
            return 0;
            break;
        default:
            cout << "NUMERO INGRESADO INCORRECTO"<<endl;
            break;
    }
    system("pause");
    }


    return 0;
}
