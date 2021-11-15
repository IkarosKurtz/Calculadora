#include <bits/stdc++.h>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;
//* Color para las frases
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
#define TEXT_COLOR SetConsoleTextAttribute
//todos estos son las variables globales
double res = 0,pi = M_PI,z,p;
char utilant;
double a = 0,b = 0;
int i,opcion,x;

//? Declaraciones de las funciones, se podria quitar
int suma(); void menu(); float division(); int resta(); int cuadrado(); int cubo(); int xpotencia();
void submenu(); double seno(); double cos(); double tan(); double cotangente(); double secante(); double cosecante();
void combandpermenu(); int combinaciones(); int permutaciones(); int permutacionesfact(); int permutacionesrrepe(); int permutacionesrnorepe();
int permutacioneskobj(); int absoluto(); double notacien(); double raizcuadrada(); double raizx(); double logaritmoN();
double logaritmo10();

//todos Y el M_PI es el valor de pi

//! El main
int main(){ system("cls"); 
 TEXT_COLOR(hConsole,6);
 printf("\t\t\t\t     Bienvenido a la calculadora cientifica.\n\n");
 TEXT_COLOR(hConsole, 7);
 menu();
 cout<<"\nIngrese el numero de la opcion que quiere: ";  cin>>opcion;
 //! Este es la seleccion del menu y algunas acciones
 switch (opcion){
 case 1:
        suma();
        cout<<"--->La suma es: "<<res;
        cout<<"\n\n"; system("pause"); main();

 case 2:
        resta();
        cout<<"--->La resta es: "<<res;
        cout<<"\n\n"; system("pause"); main();

 case 3:
        division();
        cout<<"--->La division es: "<<res;
        cout<<"\n\n"; system("pause"); main();
        
case 4:
        cuadrado();
        cout<<"--->La potencia al cuadrado es: "<<res;
        cout<<"\n\n"; system("pause"); main();
case 5:
        cubo();
        cout<<"--->La potencia al cubo es: "<<res;
        cout<<"\n\n"; system("pause"); main();
case 6:
        xpotencia();
        cout<<"--->La potencia a la n es: "<<res;
        cout<<"\n\n"; system("pause"); main();

case 7:
        submenu();

case 8:
        combandpermenu();

case 9:
        absoluto();
            cout<<"\n\n--->El valor absoluto es:"<<res;
            cout<<"\n\n"; system("pause"); main();

case 10:    system("cls");TEXT_COLOR(hConsole,9);
            printf("Notacion cientifica: \n\n"); TEXT_COLOR(hConsole,7);
            printf("1- De notacion cientifica a decimal.\n");
            printf("2- De decimal a notacion cientifica.\n");
            if (res == 0){ TEXT_COLOR(hConsole, 2); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, 7);}
            else{
                TEXT_COLOR(hConsole, 2);
                cout<<"\nEl resultado de la operacion anterior: "<<res<<endl;TEXT_COLOR(hConsole, 7);}

            cout<<"\nElije una opcion: "; cin>>opcion;
            notacien();
            if (opcion == 1){
                cout<<res;}
            cout<<"\n\n"; system("pause"); main();

case 11:    system("cls");TEXT_COLOR(hConsole,9);
            printf("Raices: \n\n"); TEXT_COLOR(hConsole,7);
            printf("1- Raiz cuadrada.\n");
            printf("2- Raiz a la n.\n");
            if (res == 0){ TEXT_COLOR(hConsole, 2); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, 7);}
            else{
                TEXT_COLOR(hConsole, 2);
                cout<<"\nEl resultado de la operacion anterior: "<<res<<endl;TEXT_COLOR(hConsole, 7);}
            cout<<"\nElije una opcion: "; cin>>opcion;
            if (opcion == 1){
                raizcuadrada();
                printf("Su raiz cuadrada es: ");
                cout<<res;}
            else{
                raizx();
                printf("Su raiz es: ");
                cout<<res;}
            cout<<"\n\n"; system("pause"); main();

case 12:    system("cls");TEXT_COLOR(hConsole,9);
            printf("Logaritmos: \n\n"); TEXT_COLOR(hConsole,7);
            printf("1- Logaritmo natural.\n");
            printf("2- Logaritmo base 10 o normal.\n");
            if (res == 0){ TEXT_COLOR(hConsole, 2); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, 7);}
            else{
                TEXT_COLOR(hConsole, 2);
                cout<<"\nEl resultado de la operacion anterior: "<<res<<endl;TEXT_COLOR(hConsole, 7);}

            cout<<"\nElije una opcion: "; cin>>opcion;
            if (opcion == 1){
                logaritmoN();
                printf("Su logaritmo natural es: ");
                cout<<res;}
            else{
                logaritmo10();
                printf("Su logaritmo a base 10 es: ");
                cout<<res;} cout<<"\n\n"; system("pause"); main();

 default:
        TEXT_COLOR(hConsole,4);
        cout<<"ESTA NO ES UNA OPCION VALIDA, USUARIO ELIJA UNA OPCION VALIDA."<<endl; TEXT_COLOR(hConsole, 7);
        system("pause"); main();}}

//todos Este es el menu
void menu(){
 cout<<"Elejir una de las opciones:\n"<<endl;
 cout<<"1- Suma."; cout<<"\t    2- Resta.  "; cout<<"\t\t      3- Division.  "; cout<<"\t\t       4- Elevar al cuadrado.\n"<<endl;
 cout<<"5- Elevar al cubo.  "; cout<<"6- Elevar a la n.  "; cout<<"\t      7- Funciones Trigonometricas.  "; cout<<"  8- Combinaciones y Permutaciones.\n"<<endl;
 cout<<"9- Valor absoluto.  "; cout<<"10- Notacion cientifica.  "; cout<<"11- Raices.  "; cout<<"\t\t       12- Logaritmos.\n"<<endl;
 //todos Esta parte es para poner el resultaodo anterior y que el usaurio no tenga que recordarlo
 if (res == 0){ TEXT_COLOR(hConsole, 2); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, 7);}
            else{
                TEXT_COLOR(hConsole, 2);
                cout<<"\nEl resultado de la operacion anterior: "<<res<<endl;TEXT_COLOR(hConsole, 7);}}
//todos Aqui acaba 

//todos menu de las funciones
void submenu(){ system("cls"); int opfun;
 TEXT_COLOR(hConsole,9); cout<<"FUNCIONES TRIGONOMETRICAS\n\n";TEXT_COLOR(hConsole,7);
 cout<<"Elejir una de las opciones"<<endl;
 cout<<"1- Funcion Seno"<<endl;
 cout<<"2- Funcion Coseno"<<endl;
 cout<<"3- Funcion Tangente"<<endl;
 cout<<"4- Funcion Cotangente"<<endl;
 cout<<"5- Funcion Secante"<<endl;
 cout<<"6- Funcion Cosecante"<<endl;
 //todos Esta parte es para poner el resultaodo anterior y que el usaurio no tenga que recordarlo
 if (res == 0){ TEXT_COLOR(hConsole, 2); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, 7);}
            else{
                TEXT_COLOR(hConsole, 2);
                cout<<"\nEl resultado de la operacion anterior: "<<res<<endl;TEXT_COLOR(hConsole, 7);}
//todos Aqui acaba 
 cout<<"\nIngrese el numero de la opcion que quiere: "; cin.ignore(); cin>>opfun;
    switch (opfun)
    {
    case 1:
        seno();
        cout<<"--->El Seno es: "<<res;
        cout<<"\n\n"; system("pause"); main();

    case 2:
        cos();
        cout<<"--->El Coseno es: "<<res;
        cout<<"\n\n"; system("pause"); main();

    case 3:
        tan();
        cout<<"--->La Tangente es: "<<res;
        cout<<"\n\n"; system("pause"); main();

    case 4:
        cotangente();
        cout<<"--->El Cotangente es: "<<res;
        cout<<"\n\n"; system("pause"); main();

    case 5:
        secante();
        cout<<"--->El Secante es: "<<res;
        cout<<"\n\n"; system("pause"); main();

    case 6:
        cosecante();
        cout<<"--->El Cosecante es: "<<res;
        cout<<"\n\n"; system("pause"); main();
        
    default:
        TEXT_COLOR(hConsole,4);
        cout<<"ESTA NO ES UNA OPCION VALIDA, USUARIO ELIJA UNA OPCION VALIDA"<<endl; TEXT_COLOR(hConsole, 7);
        system("pause"); main();}}

//todos Este es el menu para las combinaiones y permutaciones
void combandpermenu(){system("cls"); int opcomb;
 TEXT_COLOR(hConsole,9); cout<<"COMBINACIONES Y PERMUTACIONES\n\n";TEXT_COLOR(hConsole,7);
 cout<<"Elejir una de las opciones"<<endl;
 cout<<"1- Combinacion"<<endl;
 cout<<"2- Permutacion"<<endl;
 cout<<"3- Permutaciones de n objetos sin repeticion"<<endl;
 cout<<"4- Permutaciones de n objetos en grupos de r con repeticion"<<endl;
 cout<<"5- Permutaciones de n objetos en grupos de r sin repeticion"<<endl;
 cout<<"6- Permutaciones de n objetos con repeticion de k tipos distintos"<<endl;
 //todos Esta parte es para poner el resultaodo anterior y que el usaurio no tenga que recordarlo
 if (res == 0){ TEXT_COLOR(hConsole, 2); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, 7);}
            else{
                TEXT_COLOR(hConsole, 2);
                cout<<"\nEl resultado de la operacion anterior: "<<res<<endl;TEXT_COLOR(hConsole, 7);}
 //todos Aqui acaba       
    cout<<"\nIngrese el numero de la opcion que quiere: ";cin.ignore(); cin>>opcomb;
    switch (opcomb){
    case 1: combinaciones();
        cout<<"\n\n--->El numero de combinaciones son: "<<res;
        cout<<"\n\n"; system("pause"); main();
    case 2: permutaciones();
        cout<<"\n\n--->El numero de permutaciones son: "<<res;
        cout<<"\n\n"; system("pause"); main();
    case 3:
        permutacionesfact();
        cout<<"--->El numero de permutaciones de n objetos sin repeticion es : "<<res;
        cout<<"\n\n"; system("pause"); main();
    case 4:
        permutacionesrrepe();
        cout<<"--->El numero de permutaciones de n objetos en grupos de r, con repeticion es : "<<res;
        cout<<"\n\n"; system("pause"); main();
    case 5:
        permutacionesrnorepe();
        cout<<"--->El numero de permutaciones de n objetos en grupos de r, con repeticion es : "<<res;
        cout<<"\n\n"; system("pause"); main();
    case 6:
        permutacioneskobj();
        cout<<"--->El numero de permutaciones de n objetos con repeticion de k timpos distintos : "<<res;
        cout<<"\n\n"; system("pause"); main();
    default:
        TEXT_COLOR(hConsole,4);
        cout<<"ESTA NO ES UNA OPCION VALIDA, USUARIO ELIJA UNA OPCION VALIDA"<<endl; TEXT_COLOR(hConsole, 7);
        system("pause"); main();}}

//*Es la operacion de la suma
int suma(){if(res == 0){ //! El if es por si el usuario quiere utilizar el resultado anterior
    cout<<"\n\n----->Ingrese los numeros a sumar como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
    res = a + b; return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
            cout<<"\n\n----->Ingrese los numeros a sumar como a y b pero separados con enter (se toma encuenta el resultado anterior): ";cin.ignore(); cin>>a;cin>>b;
            res = res + a + b;  return res;}
        else{
            cout<<"\n\n----->Ingrese los numeros a sumar como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
            res = a + b ;  return res;}}}

//*Es la operacion de la resta
int resta(){if(res == 0){ 
    cout<<"\n\n----->Ingrese los numeros a restar como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
    res = a - b;  return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
            cout<<"\n\n----->Ingrese los numeros a restar como a y b pero separados con enter (se toma encuenta el resultado anterior): ";cin.ignore(); cin>>a;cin>>b;
            res = res - a - b; return res;}
        else{
            cout<<"\n\n----->Ingrese los numeros a restar como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
            res = a - b;  return res;}}}

//*Es la operacion de la division
float division(){if(res == 0){
    cout<<"\n\n----->Ingrese los numeros a dividir como a y b pero separados con enter: ";cin.ignore(); cin>>p;cin>>z;
    if (z == 0){ TEXT_COLOR(hConsole,4); cout<<"\nMath ERROR, usaurio recuerde que no se puede dividir entre cero"<<endl; TEXT_COLOR(hConsole, 7); system("pause"); main();}
        else{res = p / z; return res;}}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
            cout<<"\n\n----->Ingrese el numero por el cual se va a divir el resultado anterior: ";cin.ignore();cin>>z;
            if (z == 0){ TEXT_COLOR(hConsole,4); cout<<"\nMath ERROR, usaurio recuerde que no se puede dividir entre cero"<<endl; TEXT_COLOR(hConsole, 7); system("pause"); main();}
            else{res = res / z;  return res;}}
            else{
            cout<<"\n\n----->Ingrese los numeros a dividir como a y b pero separados con enter: ";cin.ignore(); cin>>p;cin>>z;
            if (res == 0){ TEXT_COLOR(hConsole,4); cout<<"\nMath ERROR, usaurio recuerde que no se puede dividir entre cero"<<endl; TEXT_COLOR(hConsole, 7); system("pause"); main();}
            else{res = p / z; return res;}}}}

//*Es la operacion de elevar al cuadrado
int cuadrado(){if(res == 0){
    cout<<"\n\n----->Ingrese el numero para elevar al cuadrado: ";cin.ignore(); cin>>a;
    res = pow(a,2); return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
        res = pow(res,2); return res;}
        else{
            cout<<"\n\n----->Ingrese el numero para elevar al cuadrado: ";cin.ignore(); cin>>a;
            res = pow(a,2); return res;}}}

//*Es la operacion de elevar al cubo
int cubo(){if(res == 0){
    cout<<"\n\n----->Ingrese el numeros para elevar al cubo: ";cin.ignore(); cin>>a;
    res = pow(a,3); return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
            res = pow(res,3); return res;}
        else{
            cout<<"\n\n----->Ingrese el numeros para elevar al cubo: ";cin.ignore(); cin>>a;
            res = pow(a,3); return res;}}}

//*Es la operacion de elevar a la n
int xpotencia(){if(res == 0){
    cout<<"\n\n----->Ingrese los numeros para elevar a la x^n pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
    res = pow(a,b); return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
             cout<<"\n\n----->Ingrese el numero que sera n para elevar x^n: ";cin.ignore(); cin>>b;
             res = pow(res,b); return res;}
        else{
            cout<<"\n\n----->Ingrese los numeros para elevar a la x^n pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
            res = pow(a,b); return res;}}}

//* Operacion raiz cuadrada
double raizcuadrada(){ if(res == 0){
    do{
        printf("Ingresa valor para obtener la raiz cuadrada: ");cin>>z;
    }while(z<0);
    res = sqrt(z); return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
                if (res < 0){ TEXT_COLOR(hConsole,12);cout<<"Usuario no se puede sacar raiz a numeros negativos"<<endl;
                TEXT_COLOR(hConsole,7); system("pause"); main();}
                res = sqrt(res); return res;}
        else{do{
                printf("Ingresa valor para obtener la raiz cuadrada: ");cin>>z;
            }while(z<0);
            res = sqrt(z); return res;}}}

//*Operacion raiz a la n
double raizx(){ double w; if(res == 0){
    printf("\n\n----->Ingresa valor del grado de la raiz y el valor al cual aplicarle dicha raiz separados por ENTER: "); cin>>w; cin>>z; x=w;
    if (x % 2 == 0){
        while(z<0){
            printf("*El valor que sacara la raiz debe ser 0 o mayor: "); cin>>z;}
        res = pow(z, 1 / w);}
    else{
        if(z < 0){
            z = z*- 1;
            res = pow(z, 1 / w);
            res = res*-1;}
        else{res = pow(z, 1 / w);} return res;}}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
    if (utilant == 'n' || utilant == 'N'){
                        printf("\n\n----->Ingresa valor del grado de la raiz ya el el valor de x sera el resultado anterior: "); cin>>w; a=w;
                    if (x % 2 == 0){
                        if(res<0){TEXT_COLOR(hConsole,12); printf("*El valor que sacara la raiz debe ser 0 o mayor"); TEXT_COLOR(hConsole,7); system("pause"); main();}
                        res = pow(res, 1/ w);}
                    else{
                        if(res < 0){
                            res = res * -1;
                            res = pow(res, 1 / w);
                            res = res * -1;}
                        else{res = pow(res, 1 / w);} return res;}}
    else{
        printf("\n\n----->Ingresa valor del grado de la raiz y el valor al cual aplicarle dicha raiz separados por ENTER: "); cin>>w; cin>>z; a=w;
    if (x % 2 == 0){
        while(z < 0){
            printf("*El valor que sacara la raiz debe ser 0 o mayor: "); cin>>z;}
        res=pow(z, 1 / w);}
    else{
        if(z < 0){
            z = z * -1;
            res = pow(z, 1  / w);
            res = res * -1;}
        else{res = pow(z, 1 / w);} return res;}}}}

//* Operacion de logaritmo natural
double logaritmoN(){ if(res == 0){
    do{
        printf("\n\nIngrese valor para calcular el logartimo natural, mayor a 0: "); cin>>z;
    }while(z <= 0);
    res = log(z); return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
    if (utilant == 'n' || utilant == 'N'){
            if (res <= 0){TEXT_COLOR(hConsole,12); printf("*El valor debe ser 0 o mayor"); TEXT_COLOR(hConsole,7); system("pause"); main();}
            res = log(res); return res;}
    else{
        do{
            printf("\n\nIngrese valor para calcular el logartimo natural, mayor a 0: "); cin>>z;
        }while(z <= 0);
        res = log(z); return res;}}}

//*Operacion de logaritmo de base 10
double logaritmo10(){if(res == 0){
    do{
        printf("\n\nIngrese valor para calcular el logartimo base 10, mayor a 0: "); cin>>z;
    }while(z <= 0);
    res = log10(z); return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
    if (utilant == 'n' || utilant == 'N'){
            if (res<=0){TEXT_COLOR(hConsole,12); printf("*El valor debe ser 0 o mayor"); TEXT_COLOR(hConsole,7); system("pause"); main();}
            res = log(res);  return res;}
    else{
        do{
            printf("\n\nIngrese valor para calcular el logartimo base 10, mayor a 0: "); cin>>z;
        }while(z <= 0);
        res = log10(z);  return res;}}}

//*Es la operacion de sacar el seno
double seno(){if(res == 0){
    cout<<"\n\n----->Ingrese el grado para sacar el seno: ";cin.ignore(); cin>>a;
    res = sin(a * pi / 180); return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
            res = sin(res * pi / 180); return res;}
        else{
            cout<<"\n\n----->Ingrese el grado para sacar el seno: ";cin.ignore(); cin>>a;
            res = sin(a * pi / 180); return res;}}}

//*Es la operacion de sacar el cos
double cos(){if(res == 0){
    cout<<"\n\n----->Ingrese el grado para sacar el cos: ";cin.ignore(); cin>>a;
    res = cos(a * pi / 180); return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
            res = cos(res * pi / 180); return res;}
        else{
            cout<<"\n\n----->Ingrese el grado para sacar el cos: ";cin.ignore(); cin>>a;
            res = cos(a * pi / 180); return res;}}}

//*Es la operacion de sacar el tan
double tan(){if(res == 0){
    cout<<"\n\n----->Ingrese el grado para sacar el tan: ";cin.ignore(); cin>>a;
    res = tan(a * pi / 180); return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
            res = tan(res * pi / 180); return res;}
        else{
            cout<<"\n\n----->Ingrese el grado para sacar la tan: ";cin.ignore(); cin>>a;
            res = tan(a * pi / 180); return res;}}}
            
//*Es la operacion que calcula la cotangente
double cotangente(){ if(res == 0){
    cout<<"\n\n----->Ingrese el numero para calcularle su cotangente: ";cin>>a; a = a * pi / 180;
    res = 1 / tan(a); return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
                res = res * pi / 180; res = 1 / tan(res); return res;}
            else{
                cout<<"\n\n----->Ingrese el numero para calcularle su cotangente: ";cin>>a; a = a * pi / 180;
                res = 1 / tan(a); return res;}}}

//*Es la operacion que calcula la secante
double secante(){ if(res == 0){
    cout<<"\n\n----->Ingrese el numero para calcularle su secante: ";cin>>a; a = a * pi / 180;
    res = 1 / cos(a); return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
            res = res * pi / 180; res = 1 / cos(res); return res;}
            else{
                cout<<"\n\n----->Ingrese el numero para calcularle su secante: ";cin>>a; a = a * pi / 180;
                res = 1 / cos(a);  return res;}}}
            

//*Es la operacion que calcula la cosecante
double cosecante(){ if(res == 0){
    cout<<"\n\n----->Ingrese el numero para calcularle su cosecante: ";cin>>a; a = a * pi / 180;
    res = 1 / sin(a); return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
                res = res * pi / 180; res = 1 / sin(res); return res;}
            else{
               cout<<"\n\n----->Ingrese el numero para calcularle su cosecante: ";cin>>a; a = a * pi / 180;
                res = 1 / sin(a); return res;}}}

//*Es la operacion de sacar combinaciones
int combinaciones(){ int n,r,fact,nr,rr,n_r;
printf("\n\n----->Proporciona 2 valores separados por enter que indiquen N y R: ");cin.ignore(); cin>>n;cin>>r;
        fact=1;
            for ( i = 1; i <= n; i++){
                  fact = fact * i;} nr = fact; fact = 1;
                for ( i = 1; i <= r; i++){
                    fact = fact * i;} rr = fact; fact = 1;
                   for ( i = 1; i <= n-r; i++){
                        fact = fact * i;} n_r = fact;
                    res = nr /(rr * n_r); return res;}

//*Es la operacion de sacar permutaciones
int permutaciones(){int n,r,fact,nr,n_r;
printf("\n\n----->Proporciona 2 valores separados por enter que indiquen N y R: "); cin>>n;cin>>r;
    fact=1;
    for ( i = 1; i <= n; i++){
         fact = fact * i;} nr = fact; fact = 1;
        for ( i = 1; i <= r; i++){
            fact = fact * i;} n_r = fact;
        res = nr / n_r; return res;}

//*Formula de permutaciones de n objetos sin repeticion
int permutacionesfact(){
	cout<<"\n\n----->Ingrese el numero de los objetos: ";cin>>a; res = a;
	if (a == 0){ res = 1; } else { for (i = a-1 ;i > 1;i--){ res = res * (i); }} return res;}

//*Formula de permutaciones de n objetos en grupos de r con repeticion
int permutacionesrrepe(){
	cout<<"\n\n----->Ingrese el numero de los objetos: ";cin>>a; cout<<"----->Ingrese r, el numero de objetos que integran los grupos : ";cin>>b;
	res = pow(a,b); return res;}

//*Formula de permutaciones de n objetos en grupos de r sin repeticion
int permutacionesrnorepe(){ int af,bf;
	cout<<"\n\n----->Ingrese el numero de los objetos: ";cin>>a; af=a; cout<<"----->Ingrese r, el numero de objetos que integran los grupos : ";cin>>b; b=a-b; bf=b;
	if (a == 0){ af = 1; } else { for (i=a-1;i>1;i--){ af = af * (i); }} if (b == 0){ bf= 1; }
    else { for (i = b-1;i > 1;i--){ bf = bf * (i); }} res = af / bf; return res;}

//*Formula de permutaciones de n objetos con repeticion de k tipos distintos
int permutacioneskobj(){ int af,bf,k,kf,kfn;
	cout<<"\n\n----->Ingrese el numero de los objetos: "; cin>>a; res=a;
	if (a == 0){ res = 1;} else { for (i = a-1;i > 1;i--){ res = res * (i);}} kfn = 1; 
	do {cout<<"----->Introduce el numero de el objeto que se repite (introduce 0 para acabar dejar de ingresar k): "; cin>>k; 
    kf = k;if (k == 0){ kf = 1;}
    else { for (i = k-1;i > 1;i--){ kf = kf * (i);}}kf = kf *kfn;kfn = kf;} while (k != 0);res = res / kfn; return res;}

//* La operacion del valor absoluto
int absoluto(){if(res == 0){
    printf("\n\n----->Ingrese el numero para obtener su valor absoluto: "); cin>>a;
    if (a >= 0){res = a;}
    else {
        res = a * -1;} return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant == 'n' || utilant == 'N'){
            if (res < 0){res = res * -1;} return res;}
        else{
            printf("\n\n----->Ingrese el numero para obtener su valor absoluto :"); cin>>a;
            if (a >= 0){
                res = a;}
            else {
                res = a * -1;} return res;}}}

//* Notacion cientifica
double notacien(){
    int cont = 0;
    double aux;
    switch(opcion){
        case 1:
            printf("\n\n----->Ingresa valor (x) que multiplica a 10 y el valor (y) que es su exponente separados por enter: ");
            cin>>a;
            cin>>b;
            if (b >= 0){
                res = a*(pow(10,b));
            }
            else{
                res = a * (pow(10,b));
            }
            cout<<"\n\n--->Tu valor de notacion cientifica a decimal es: ";
            return res;break;
        case 2:
            printf("\n----->Ingresa valor numerico para su notacion cientifica: ");
            cin>>z;
            if (z <= 1){
                aux = z;
                while(aux < 1){
                    aux = aux * 10.0;
                    cont = cont + 1;}
                cont = cont * -1;
                printf("--->En notacion cientifica es: ");cout<<aux;
                printf("(10)^");cout<<cont;}
            else{
                aux=z;
                while(aux > 10){
                    aux = aux / 10.0;
                    cont = cont + 1;}
                printf("En notacion cientifica es: ");cout<<aux;
                printf("(10)^");cout<<cont;}break;}}