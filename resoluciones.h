#ifndef RESOLUCIONES_H_INCLUDED
#define RESOLUCIONES_H_INCLUDED
void cargaDeInformacion (int vendedorMayor [5],int artSinVenta[10],int unidadesVendidas [5][10],int sinVentaEn1 [5],int ventaTotal [5]){
    int cVendedor,cArticulo, unidades;
    int posVendedor;
    float precio;


    ///TODAS LAS ENTRADAS
    cout << "Ingrese "<< endl<< "--------"<< endl;
    cout << "Codigo de vendedor (10,20,30,40,50): ";
    cin >> cVendedor;
        while (cVendedor!=10 && cVendedor!=20 && cVendedor!=30 && cVendedor!=40 && cVendedor!=50){
            cout << "ERROR- Codigo de vendedor incorrecto "<< endl<< "Ingrese nuevamente: ";
            cin >> cVendedor;
        }
    while (cVendedor !=0){
        cout <<endl<< "Codigo de articulo(1 a 10): ";
        cin >> cArticulo;
                while (cArticulo<1 || cArticulo>10){
                    cout << "Codigo de articulo incorrecto "<< endl<< "Ingrese nuevamente: ";
                    cin >> cArticulo;
                }
        cout << endl<< "Precio: $";
        cin >> precio;
        cout << endl<< "Unidades vendidas: ";
        cin >> unidades;

            ///RESOLUCIONES
        //PUNTO A
        posVendedor= (cVendedor/10)-1;
        if (cArticulo==1){
            vendedorMayor[posVendedor]+= unidades;
            //PUNTO D
           sinVentaEn1[posVendedor]++;
        }

        //PUNTO B
        artSinVenta[cArticulo-1]++;

        //PUNTO C
        unidadesVendidas [posVendedor][cArticulo-1]+=unidades;

        //PUNTO E
        ventaTotal [posVendedor]+=unidades;








        cout << endl<<"Codigo de vendedor (10,20,30,40,50): ";
        cin >> cVendedor;
    }






}








///DESARROLLO DEL PUNTO A

void puntoA (int vendedorMayor [5]){
    int pos;
    pos= mayor(vendedorMayor, 5);
    cout << "El vendedor #"<< pos << " vendio mas unidades con el articulo 1. "<< endl;

}

int mayor (int vendedorMayor[], int tam){
    int i,b, mayor, pos;
    for (i=0; i<5; i++){
        if (b==0){
            mayor= vendedorMayor[i];
            pos=(i+1)*10;
            b=1;
        }
        else {
            if (vendedorMayor[i]>mayor){
                mayor= vendedorMayor[i];
                pos=(i+1)*10;
            }
        }
    }
    return pos;

}


///DESARROLLO DEL PUNTO B


void puntoB (int artSinVenta [10]){
    int i;
    cout << "Los articulos que no se registraron ventas fueron: ";
    for (i=0; i<10; i++){
        if (artSinVenta[i]==0){
            cout << endl<< "# "<< i+1;
        }
    }
    cout <<endl;
}


///DESARROLLO DEL PUNTO C

void puntoC (int unidadesVendidas [5][10]){
    int i,x;
    cout << "UNIDADES VENDIDAS: "<<endl;

    for (i=0; i<5; i++){
        cout << "VENDEDOR # "<<(i+1)*10<<endl;
        for (x=0; x<10; x++){
            cout << endl<< "Articulo "<< x+1 << ": "<< unidadesVendidas[i][x];
        }
        system ("cls");
    }

}


///DESARROLLO DEL PUNTO D

void puntoD (int sinVentaEn1 [5]){
    int i,c=0;
    cout << "Los vendedores que no registraron ventas en el ARTICULO 1, son: ";
    for (i=0; i<5; i++){
        if (sinVentaEn1[i]==0){
            cout << endl<< "# "<< (i+1)*10;
            c++;
        }
    }
cout << endl<< endl<< "Entonces " << c << " vendedores no registraron ventas en el articulo 1 "<<endl;

}



///DESARROLLO DEL PUNTO E

void puntoE (int ventaTotal [5]){
    int i;
    cout << "UNIDADES TOTALES VENDIDAS: "<<endl;
    for (i=0; i<5; i++){
        cout << "VENDEDOR #" << (i+1)*10<< ": "<< ventaTotal[i]<<endl;
    }

}


#endif // RESOLUCIONES_H_INCLUDED
