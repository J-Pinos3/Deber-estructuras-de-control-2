#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{

    //EJERCICIO 1 3 VALORES ENTEROS...
    /*
    int num_1 = 0, num_2 = 0, num_3 = 0;
    int  aux;

    cout <<"Ingrese 3 numeros"<<endl;
    cin >> num_1 >> num_2 >> num_3;
    //num1 es el menor, num2 es el medio y num3 es el mayor



    if(num_1 > num_2){
        aux = num_2;
        num_2 = num_1;
        num_1 = aux;
    }



    if(num_1 > num_3){
        aux = num_3;
        num_3 = num_1;
        num_1 = aux;
    }



    if(num_2 > num_3){
        aux = num_2;
        num_2 = num_3;
        num_3 = aux;
    }


    cout<< num_1<<","<<num_2<<","<<num_3<<endl<<endl;

    */



    //EJERCICIO 2 MONEDAS
    /*
    double dolares;
    int dolares_aux;
    int centavos1, centavos5, centavos10, centavos25, centavos50, dolar, moneda;

    cout <<"Ingrese una cantidad de dinero: ";
    cin >> dolares;

    dolares_aux = dolares * 100;//transformo los dolares a centavos


    dolar = dolares_aux/100;//obtengo las monedas de 1 dolar
    dolares_aux %= 100;//obtengo los centavos restantes luego de almacenar un dolar


    centavos50 = dolares_aux/50;//obtengo las monedas de a 50ctvs
    dolares_aux %= 50;//obtengo los centavos restantes luego de almacenar 50 centavos


    centavos25 = dolares_aux/25;
    dolares_aux %= 25;


    centavos10 = dolares_aux/10;
    dolares_aux %= 10;


    centavos5 = dolares_aux/5;
    dolares_aux %= 5;

    centavos1 = dolares_aux;


    cout << dolares <<" se pueden representar como "<<endl;
    cout <<dolar<<" monedas de a dolar"<<endl;
    cout <<centavos50<<" monedas de 50 centavos"<<endl;
    cout <<centavos25<<" monedas de 25 centavos"<<endl;
    cout <<centavos10<<" monedas de 10 centavos"<<endl;
    cout <<centavos5<<" monedas de 5 centavos"<<endl;
    cout <<centavos1<<" monedas de 1 centavo"<<endl;
    */




    //EJERCICIO 3 TIENDA DE ROPA
    /*
    int vestidos, zapatos, carteras, desc = 0;//cantidad de cada uno
    double total = 0;

    cout <<"Ingrese la cantidad de vestidos: ";
    cin >> vestidos;

    cout <<"Ingrese la cantidad de zapatos: ";
    cin >> zapatos;

    cout <<"Ingrese la cantidad de carteras: ";
    cin >> carteras;

    total = vestidos*80 + zapatos*50 + carteras*40;

    if( (vestidos + carteras + zapatos)>10 ){
        desc = 10;
        total = total * 90.0/100;

    }else if( (vestidos + carteras + zapatos)>20 &&  (vestidos + carteras + zapatos)<30  ){
        desc = 20;
        total = total * 80.0/100;

    }else if( (vestidos + carteras + zapatos)>40 ){
        desc = 40;
        total = total * 60.0/100;
    }


    cout <<endl<<endl;


    cout <<"\t|FACTURA|"<<endl;

    cout <<"Vestidos: "<<setw(15)<<vestidos*80<<endl;
    cout <<"Zapatos: "<<setw(15)<<zapatos*50<<endl;
    cout <<"Carteras: "<<setw(15)<<carteras*40<<endl<<endl;

    cout <<"Descuento: "<<setw(12)<<desc<<"%"<<endl;
    cout <<"Total a pagar: "<<setw(10)<<total<<endl;

    */




    //EJERCICIO 4 ADMISION DE ALUMNOS
    /*
    char carrera;
    double nota;

    cout <<"\t MEN"<<char(233)<<endl;
    cout <<"1) Medicina"<<endl;
    cout <<"2) Mec"<<char(160)<<"nica"<<endl;
    cout <<"3) Rob"<<char(162)<<"tica"<<endl;
    cout <<"4) Asministraci"<<char(162)<<"n"<<endl;
    cout <<">";

    cin.get(carrera);
    cin.ignore();

    cout <<"Ingrese la nota obtenida: ";
    cin >> nota;
    cout <<endl;

    if( carrera == '1' ){

         if (nota >= 8.8){
             cout <<"Calificacion: "<<nota<<endl;
             cout <<"Carrera: Medicina"<<endl;
             cout <<"ACEPTADO"<<endl;
         }else{
             cout <<"No aceptado"<<endl;
         }

    }


    if( carrera == '2' ){

         if (nota > 8.5){
             cout <<"Calificacion: "<<nota<<endl;
             cout <<"Carrera: Mec"<<char(160)<<"nica"<<endl;
             cout <<"ACEPTADO"<<endl;
         }else{
             cout <<"No aceptado"<<endl;
         }

    }


    if( carrera == '3' ){

         if (nota >= 8.3){
             cout <<"Calificacion: "<<nota<<endl;
             cout <<"Carrera: Rob"<<char(162)<<"tica"<<endl;
             cout <<"ACEPTADO"<<endl;
         }else{
             cout <<"No aceptado"<<endl;
         }

    }


    if( carrera == '4' ){

         if (nota >= 7.8){
             cout <<"Calificacion: "<<nota<<endl;
             cout <<"Carrera: Administraci"<<char(162)<<"n"<<endl;
             cout <<"ACEPTADO"<<endl;
         }else{
             cout <<"No aceptado"<<endl;
         }

    }

    */





    //EJERCICIO 5 ALMACEN

    /*
    short numeroProd;
    short cantidad;
    double total = 0;
    int i = 196; // ───_
    int k = 162; //
    char a = ' ', b = ' ';
    a = i;
    b = k;

    cout <<"     ________"<<endl;
    cout <<"      opci"<<b<<"n"<<endl;
    cout <<"     "<<a<<a<<a<<a<<a<<a<<a<<a<<endl;
    cout <<" Producto 1: $2.98"<<endl
    <<" Producto 2: $4.50"<<endl
    <<" Producto 3: $9.98"<<endl
    <<" Producto 4: $4.49"<<endl
    <<" Producto 5: $6.87"<<endl;
    cout <<"-1 para salir"<<endl;
    cin >> numeroProd;

    while(numeroProd != -1){

      switch(numeroProd){
        case 1:{

          int u = 191; //┐
          int z = 218; //┌
          int y = 192; //└
          int r = 217; //┘

          char p = ' ';
          char o = ' ';
          char t = ' ';
          char w = ' ';

          p = z;
          o = u;
          t = y;
          w = r;

            cout <<p<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<o<<endl;
            cout <<" Producto 1"<<endl;
            cout <<t<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<w<<endl<<endl<<endl;

            cout <<p<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<o<<endl;
            cout <<"Ingrese la cantidad del producto"<<endl;
            cout <<t<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<w<<endl;
            cin >> cantidad;
            total = total + cantidad*(2.98);
            system("pause");
            system("cls");
        }
        break;


        case 2:{
          int u = 191; //┐
          int z = 218; //┌
          int y = 192; //└
          int r = 217; //┘

          char p = ' ';
          char o = ' ';
          char t = ' ';
          char w = ' ';

          p = z;
          o = u;
          t = y;
          w = r;

            cout <<p<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<o<<endl;
            cout <<" Producto 2"<<endl;
            cout <<t<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<w<<endl<<endl<<endl;

            cout <<p<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<o<<endl;
            cout <<"Ingrese la cantidad del producto"<<endl;
            cout <<t<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<w<<endl;
            cin >> cantidad;
            total = total + cantidad*(4.50);
            system("pause");
            system("cls");


        }
        break;


        case 3:{
          int u = 191; //┐
          int z = 218; //┌
          int y = 192; //└
          int r = 217; //┘

          char p = ' ';
          char o = ' ';
          char t = ' ';
          char w = ' ';

          p = z;
          o = u;
          t = y;
          w = r;

            cout <<p<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<o<<endl;
            cout <<" Producto 3"<<endl;
            cout <<t<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<w<<endl<<endl<<endl;

            cout <<p<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<o<<endl;
            cout <<"Ingrese la cantidad del producto"<<endl;
            cout <<t<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<w<<endl;
            cin >> cantidad;
            total = total + cantidad*(9.98);
            system("pause");
            system("cls");


        }
        break;


        case 4:{
          int u = 191; //┐
          int z = 218; //┌
          int y = 192; //└
          int r = 217; //┘

          char p = ' ';
          char o = ' ';
          char t = ' ';
          char w = ' ';

          p = z;
          o = u;
          t = y;
          w = r;

            cout <<p<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<o<<endl;
            cout <<" Producto 4"<<endl;
            cout <<t<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<w<<endl<<endl<<endl;

            cout <<p<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<o<<endl;
            cout <<"Ingrese la cantidad del producto"<<endl;
            cout <<t<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<w<<endl;
            cin >> cantidad;
            total = total + cantidad*(4.49);
            system("pause");
            system("cls");


        }
        break;


        case 5:{
          int u = 191; //┐
          int z = 218; //┌
          int y = 192; //└
          int r = 217; //┘

          char p = ' ';
          char o = ' ';
          char t = ' ';
          char w = ' ';

          p = z;
          o = u;
          t = y;
          w = r;

            cout <<p<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<o<<endl;
            cout <<" Producto 5"<<endl;
            cout <<t<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<w<<endl<<endl<<endl;

            cout <<p<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<o<<endl;
            cout <<"Ingrese la cantidad del producto"<<endl;
            cout <<t<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<w<<endl;
            cin >> cantidad;
            total = total + cantidad*(6.87);
            system("pause");
            system("cls");


        }
        break;


        default:{
          cout <<"Error, inténtelo de nuevo"<<endl;
          system("pause");
          system("cls");

        }
        break;
      } // fin switch




      cout <<"     ________"<<endl;
      cout <<"      opci"<<b<<"n"<<endl;
      cout <<"     "<<a<<a<<a<<a<<a<<a<<a<<a<<endl;
      cout <<" Producto 1: $2.98"<<endl
      <<" Producto 2: $4.50"<<endl
      <<" Producto 3: $9.98"<<endl
      <<" Producto 4: $4.49"<<endl
      <<" Producto 5: $6.87"<<endl;
      cout <<"-1 para salir"<<endl;
      cin >> numeroProd;



    } // while principal


      cout <<endl<<endl<<endl<<"Las ventas totales fueron: "<<total<<endl;

    */




    //EJERCICIO 6 DIBUJAR BARRAS
    /*
    short int n = 0, i = 1, j = 1;

    while(i <= 5){
        cout <<i<<" Ingrese el número: ";
        cin >> n;
        while( (n < 1)||(n > 30) ){
            cout <<i<<" Ingrese el número: ";
            cin >> n;
        }
        j = 1;
        while(j <= n){
            cout <<"*";
            j++;
        }

        cout <<endl;
        i++;
    }

    */




    //EJERCICIO 7 DIBUJAR CUADRADO
    /*
    short int Nfigura,k = 1, l = 1;

    cout <<"Ingrese el tamanio de la figura: ";
    cin >> Nfigura;
    cout <<endl;


    while(k <= Nfigura){
        cout <<"*";
        k++;
    }
    cout<<endl;
    while(l <= Nfigura-2){
        cout <<"*"<<setw(Nfigura-1)<<"*"<<endl;
        l++;
    }
    k = 1;

    while(k <= Nfigura){
        cout <<"*";
        k++;
    }
    cout <<endl;

    */




    //EJERCICIO 8 FACTORIAL
    /*
    int i = 1, factorial = 1;
    short int valor = 0;
    cout <<"Ingrese un valor para hallar su factorial: ";
    cin >> valor;
    while(valor < 0){
        cout <<"Ingrese un valor para hallar su factorial: ";
        cin >> valor;
    }

    while(i <= valor){

        factorial = factorial * i;
        i++;
    }

    cout <<"El factorial de "<<valor<<" es: "<<factorial<<endl;


    */




    //EJERCICIO 9 NUMEROS
    /*
    int entero_1 = 100, entero_2 = 100, contador = 100;


    for(contador = 100; contador <= 200; contador++){

        if( (entero_1+entero_2)%9 == 0 ){
            cout <<">"<<entero_1+entero_2<<endl;
        }
        entero_1++;
        entero_2++;
    }

    */




    //EJERCICIO 10 CALCULADORA
    short int opcion = 0;
    double numero_1 = 0, numero_2 = 0;
    short int numero_3 = 0, numero_4 = 0;

    cout <<"\t\tMEN"<<char(233)<<endl;
    cout <<"1)Sumar"<<endl;
    cout <<"2)Restar"<<endl;
    cout <<"3)Multiplicar"<<endl;
    cout <<"4)Dividir"<<endl;
    cout <<"5)M"<<char(162)<<"dulo"<<endl;
    cout <<"6)Potencia"<<endl;
    cout <<"7)Ra"<<char(161)<<"z Cuadrada"<<endl;
    cout <<"0)SALIR"<<endl;
    cout <<"Opci"<<char(162)<<"n: ";

    cin >> opcion;

    while( (opcion < 0)||(opcion > 7) ){
        cout <<"Error"<<endl;
        cout <<"Opcion: ";
        cin >> opcion;
    }

    if (opcion == 0){
        cout <<"Vuelva Pronto"<<endl;
    }

    //cout <<"LA OPCIÓN INGRESADA FUE: "<<opcion<<endl;
        cin.ignore();

    while( opcion != 0 ){

        switch(opcion){

            case 1:{
                cout <<"\t\tSUMA"<<endl<<endl;
                cout <<"Ingrese el primer n"<<char(163)<<"mero: ";
                cin >>numero_1;
                cout <<"Ingrese el segundo n"<<char(163)<<"mero: ";
                cin >>numero_2;

                cout<<endl<<numero_1<<" + "<<numero_2 << " = "<<numero_1+numero_2<<endl;
            }
            break;


            case 2:{
                cout <<"\t\tRESTA"<<endl<<endl;
                cout <<"Ingrese el primer n"<<char(163)<<"mero: ";
                cin >>numero_1;
                cout <<"Ingrese el segundo n"<<char(163)<<"mero: ";
                cin >>numero_2;

                cout<<endl<<numero_1<<"  "<<numero_2 << " = "<<numero_1-numero_2<<endl;
            }
            break;



            case 3:{
                cout <<"\t\tMULTIPLICACI"<<char(224)<<"N"<<endl<<endl;
                cout <<"Ingrese el primer n"<<char(163)<<"mero: ";
                cin >>numero_1;
                cout <<"Ingrese el segundo n"<<char(163)<<"mero: ";
                cin >>numero_2;

                cout<<endl<<numero_1<<" * "<<numero_2 << " = "<<numero_1*numero_2<<endl;
            }
            break;


            case 4:{
                cout <<"\t\tDIVISI"<<char(224)<<"N"<<endl<<endl;
                cout <<"Ingrese el numerador: ";
                cin >>numero_1;
                cout <<"Ingrese el denominador: ";
                cin >>numero_2;

                while(numero_2 == 0){
                    cout <<"El denominador debe ser diferente de cero"<<endl;
                    cout <<"Ingrese el denominador: ";
                    cin >>numero_2;
                }

                cout<<endl<<numero_1<<" / "<<numero_2 << " = "<<numero_1/numero_2<<endl;
            }
            break;


            case 5:{
                cout <<"\t\tM"<<char(224)<<"DULO"<<endl<<endl;
                cout <<"Ingrese el primer n"<<char(163)<<"mero: ";
                cin >>numero_3;
                cout <<"Ingrese el segundo n"<<char(163)<<"mero: ";
                cin >>numero_4;

                cout<<endl<<numero_3<<" % "<<numero_4 << " = "<<numero_3%numero_4<<endl;
            }
            break;


            case 6:{
                cout <<"\t\tPOTENCIA"<<endl<<endl;
                cout <<"Ingrese la base: ";
                cin >>numero_3;
                cout <<"Ingrese el exponente: ";
                cin >>numero_4;

                int i = 1, exponente = 1;
                while(i <= numero_4){
                    exponente = exponente * numero_3;
                    i++;
                }
                cout <<numero_3<<" ^ "<<numero_4<<" = "<<exponente<<endl;
            }
            break;



            case 7:{
                cout <<"\t\tRA"<<char(214)<<"Z CUADRADA"<<endl<<endl;
                cout <<"Ingrese un n"<<char(163)<<"mero: ";
                cin >>numero_3;

                cout <<"sqrt("<<numero_3<<") = "<<sqrt(numero_3)<<endl;

            }
            break;


            default :{
                cout <<"Error,int"<<char(130)<<"ntelo de nuevo"<<endl;
            }
            break;

        }//fin del switch

        system("pause");
        system("cls");

        cout <<"\t\tMEN"<<char(233)<<endl;
        cout <<"1)Sumar"<<endl;
        cout <<"2)Restar"<<endl;
        cout <<"3)Multiplicar"<<endl;
        cout <<"4)Dividir"<<endl;
        cout <<"5)M"<<char(162)<<"dulo"<<endl;
        cout <<"6)Potencia"<<endl;
        cout <<"7)Ra"<<char(161)<<"z Cuadrada"<<endl;
        cout <<"0)SALIR"<<endl;
        cout <<"Opci"<<char(162)<<"n: ";

        cin >> opcion;

        while( (opcion < 0)||(opcion > 7) ){
            cout <<"Error"<<endl;
            cout <<"Opcion: ";
            cin >> opcion;
        }

        cin.ignore();

        if (opcion == 0){
            cout <<"Vuelva Pronto"<<endl;
        }


    }//fin del while principal





    system("pause");
    return 0;
}
