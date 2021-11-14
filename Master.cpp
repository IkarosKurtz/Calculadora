#include <bits/stdc++.h>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;
//* Color para las frases
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
#define TEXT_COLOR SetConsoleTextAttribute
//todos estos son las variables globales
int resultado=0;
double res=0,p,pi=M_PI;
char utilant;
int a = 0,b = 0,i,VALID_TOKEN=0;
int opcion;
float resdiv=0;

//? Declaraciones de las funciones, se podria quitar
int suma(); void menu(); float division(); int resta(); int cuadrado(); int cubo(); int xpotencia(); int vabsoluto();
void submenu(); double seno(); double cos(); double tan(); double cotangente(); double secante(); double cosecante();
void combandpermenu(); int combinaciones(); int permutaciones(); int permutacionesfact(); int permutacionesrrepe(); int permutacionesrnorepe();
int permutacioneskobj();

//todos El VALID_TOKEN sirve para que se muestre en pantalla el resultado anterior en los menus
//todos Y el M_PI es el valor de pi

//! El main
int main(){ system("cls"); 
 TEXT_COLOR(hConsole,6);
 printf("Bienvenido a la calculadora cientifica\n\n");
 TEXT_COLOR(hConsole, 7);
 menu();
 cout<<"\nIngrese el numero de la opcion que quiere: "; cin>>opcion;
 //! Este es la seleccion del menu y algunas acciones
 switch (opcion){
 case 1:
        suma();
        cout<<"--->La suma es: "<<resultado;
        cout<<"\n\n"; system("pause"); main();
 case 2:
        resta();
        cout<<"--->La resta es: "<<resultado;
        cout<<"\n\n"; system("pause"); main();
 case 3:
        division();
        cout<<"--->La division es: "<<resdiv;
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
 default:
        TEXT_COLOR(hConsole,4);
        cout<<"ESTA NO ES UNA OPCION VALIDA, USUARIO ELIJA UNA OPCION VALIDA"<<endl; TEXT_COLOR(hConsole, 7);
        system("pause"); main();}}

//todos Este es el menu
void menu(){
 cout<<"Elejir una de las opciones"<<endl;
 cout<<"1- Suma"<<endl;
 cout<<"2- Resta"<<endl;
 cout<<"3- Division"<<endl;
 cout<<"4- Elevar al cuadrado"<<endl;
 cout<<"5- Elevar al cubo"<<endl;
 cout<<"6- Elevar a la n"<<endl;
 cout<<"7- Funciones Trigonometricas"<<endl;
 cout<<"8- Combinaciones y Permutaciones"<<endl;
 //todos Esta parte es para poner el resultaodo anterior y que el usaurio no tenga que recordarlo
 if (resultado==0 && res==0 && resdiv==0){ TEXT_COLOR(hConsole, 2); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, 7);}
 else{
     if (VALID_TOKEN==0){ TEXT_COLOR(hConsole, 2);
     cout<<"\nEl resultado de la operacion anterior: "<<resultado<<endl;TEXT_COLOR(hConsole, 7);}
     else{TEXT_COLOR(hConsole, 2);
      if (VALID_TOKEN==2){ TEXT_COLOR(hConsole, 2);
        cout<<"\nEl resultado de la operacions anterior: "<<resdiv<<endl;TEXT_COLOR(hConsole, 7);}
        else{TEXT_COLOR(hConsole, 2);
        cout<<"\nEl resultado de la operacion de la funcion anterior: "<<res<<endl;TEXT_COLOR(hConsole, 7);}}}}
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
 if (resultado==0){ TEXT_COLOR(hConsole, 2); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, 7);}
 else{
     if (VALID_TOKEN==0){ TEXT_COLOR(hConsole, 2);
     cout<<"\nEl resultado de la operacion anterior: "<<resultado<<endl;TEXT_COLOR(hConsole, 7);}
     else{TEXT_COLOR(hConsole, 2);
      if (VALID_TOKEN==2){ TEXT_COLOR(hConsole, 2);
        cout<<"\nEl resultado de la operacions anterior: "<<resdiv<<endl;TEXT_COLOR(hConsole, 7);}
        else{TEXT_COLOR(hConsole, 2);
        cout<<"\nEl resultado de la operacion de la funcion anterior: "<<res<<endl;TEXT_COLOR(hConsole, 7);}}}
//todos Aqui acaba 
 cout<<"\nIngrese el numero de la opcion que quiere: ";cin.ignore(); cin>>opfun;
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
 if (resultado==0){ TEXT_COLOR(hConsole, 2); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, 7);}
 else{
     if (VALID_TOKEN==0){ TEXT_COLOR(hConsole, 2);
     cout<<"\nEl resultado de la operacion anterior: "<<resultado<<endl;TEXT_COLOR(hConsole, 7);}
     else{TEXT_COLOR(hConsole, 2);
      if (VALID_TOKEN==2){ TEXT_COLOR(hConsole, 2);
        cout<<"\nEl resultado de la operacions anterior: "<<resdiv<<endl;TEXT_COLOR(hConsole, 7);}
        else{TEXT_COLOR(hConsole, 2);
        cout<<"\nEl resultado de la operacion de la funcion anterior: "<<res<<endl;TEXT_COLOR(hConsole, 7);}}}
 //todos Aqui acaba       
    cout<<"\nIngrese el numero de la opcion que quiere: ";cin.ignore(); cin>>opcomb;
    switch (opcomb){
    case 1: combinaciones();
        cout<<"\n\n--->El numero de combinaciones son: "<<resultado;
        cout<<"\n\n"; system("pause"); main();
    case 2: permutaciones();
        cout<<"\n\n--->El numero de permutaciones son: "<<resultado;
        cout<<"\n\n"; system("pause"); main();
    case 3:
        permutacionesfact();
        cout<<"--->El numero de permutaciones de n objetos sin repeticion es : "<<resultado;
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
int suma(){if(resultado==0 && res==0 && resdiv == 0){ //! El if es por si el usuario quiere utilizar el resultado anterior
    cout<<"\n\n----->Ingrese los numeros a sumar como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
    resultado=a+b; VALID_TOKEN=0; return resultado;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            cout<<"\n\n----->Ingrese los numeros a sumar como a y b pero separados con enter (se toma encuenta el resultado anterior): ";cin.ignore(); cin>>a;cin>>b;
            if (VALID_TOKEN == 0){
                resultado+=a+b; VALID_TOKEN=0; return resultado;}
            else{if (VALID_TOKEN == 1){
                resultado = res + a + b; VALID_TOKEN = 0; return resultado;}
            else{resdiv = resdiv + a + b; VALID_TOKEN = 2; return resdiv;}}}
        else{
            cout<<"\n\n----->Ingrese los numeros a sumar como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
            resultado=a+b; VALID_TOKEN=0; return resultado;}}}

//*Es la operacion de la resta
int resta(){if(resultado==0 && res==0 && resdiv == 0){ 
    cout<<"\n\n----->Ingrese los numeros a restar como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
    resultado=a-b; VALID_TOKEN=0; return resultado;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            cout<<"\n\n----->Ingrese los numeros a restar como a y b pero separados con enter (se toma encuenta el resultado anterior): ";cin.ignore(); cin>>a;cin>>b;
            if (VALID_TOKEN == 0){
               resultado -= a - b ;  VALID_TOKEN = 0; return resultado;}
            else{if (VALID_TOKEN == 1){
                resultado = res - a - b;  VALID_TOKEN = 0; return resultado;}
            else{resdiv = resdiv + a + b; VALID_TOKEN = 2; return resdiv;}}}
        else{
            cout<<"\n\n----->Ingrese los numeros a restar como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
            resultado=a-b; VALID_TOKEN=0; return resultado;}}}

//*Es la operacion de la division
float division(){if(resultado==0 && res==0 && resdiv==0){
    cout<<"\n\n----->Ingrese los numeros a dividir como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
    if (b == 0){ TEXT_COLOR(hConsole,4); cout<<"\nMath ERROR, usaurio recuerde que no se puede dividir entre cero"<<endl; TEXT_COLOR(hConsole, 7); system("pause"); main();}
        else{resdiv=a/b; VALID_TOKEN=2; return resdiv;}}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            cout<<"\n\n----->Ingrese el numero por el cual se va a divir el resultado anterior: ";cin.ignore();cin>>b;
            if (VALID_TOKEN == 0){
                if (b == 0){ TEXT_COLOR(hConsole,4); cout<<"\nMath ERROR, usaurio recuerde que no se puede dividir entre cero"<<endl; TEXT_COLOR(hConsole, 7); system("pause"); main();}
                else{resdiv = resultado / b; VALID_TOKEN = 2; return resdiv;}}
            else{if (VALID_TOKEN == 1){
                if (b == 0){ TEXT_COLOR(hConsole,4); cout<<"\nMath ERROR, usaurio recuerde que no se puede dividir entre cero"<<endl; TEXT_COLOR(hConsole, 7); system("pause"); main();}
                else{resdiv = res / b;  VALID_TOKEN = 2; return resdiv;}}
            else{if (b == 0){ TEXT_COLOR(hConsole,4); cout<<"\nMath ERROR, usaurio recuerde que no se puede dividir entre cero"<<endl; TEXT_COLOR(hConsole, 7); system("pause"); main();}
            else{resdiv = resdiv / b; VALID_TOKEN = 2; return resdiv;}}}}
        else{
            cout<<"\n\n----->Ingrese los numeros a dividir como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
            if (b == 0){ TEXT_COLOR(hConsole,4); cout<<"\nMath ERROR, usaurio recuerde que no se puede dividir entre cero"<<endl; TEXT_COLOR(hConsole, 7); system("pause"); main();}
            else{resdiv=a/b; VALID_TOKEN=2; return resdiv;}}}}

//*Es la operacion de elevar al cuadrado
int cuadrado(){if(res==0 && resultado==0 && resdiv==0){
    cout<<"\n\n----->Ingrese el numero para elevar al cuadrado: ";cin.ignore(); cin>>a;
    res= pow(a,2); VALID_TOKEN = 1; return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            if (VALID_TOKEN == 0){
                res= pow(resultado,2); VALID_TOKEN = 1; return res;
            }else{if(VALID_TOKEN == 1){
                res = pow(res,2); VALID_TOKEN = 1; return res;
            }else{
                resdiv= pow(resdiv,2); VALID_TOKEN = 2; return resdiv;}}}
        else{
            cout<<"\n\n----->Ingrese el numero para elevar al cuadrado: ";cin.ignore(); cin>>a;
            res= pow(a,2); VALID_TOKEN=1; return res;}}}

//*Es la operacion de elevar al cubo
int cubo(){if(res==0 && resultado==0 && resdiv == 0){
    cout<<"\n\n----->Ingrese el numeros para elevar al cubo: ";cin.ignore(); cin>>a;
    res= pow(a,3); VALID_TOKEN=1; return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            if (VALID_TOKEN == 0){
                res= pow(resultado,3); VALID_TOKEN=1; return res;
            }else{if(VALID_TOKEN == 1){
                res= pow(res,3); VALID_TOKEN=1; return res;
            }else{
                resdiv= pow(resdiv,3); VALID_TOKEN=2; return resdiv;}}}
        else{
            cout<<"\n\n----->Ingrese el numeros para elevar al cubo: ";cin.ignore(); cin>>a;
            res= pow(a,3); VALID_TOKEN=1; return res;}}}

//*Es la operacion de elevar a la n
int xpotencia(){if(res==0 && resultado==0 && resdiv == 0){
    cout<<"\n\n----->Ingrese los numeros para elevar a la x^n pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
    res=pow(a,b); VALID_TOKEN = 1; return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
             cout<<"\n\n----->Ingrese el numero que sera n para elevar x^n: ";cin.ignore(); cin>>b;
            if (VALID_TOKEN == 0){
                res=pow(resultado,b); VALID_TOKEN = 1; return res;
            }else{if(VALID_TOKEN == 1){
                res=pow(res,b); VALID_TOKEN = 1; return res;
            }else{
                resdiv=pow(resdiv,b); VALID_TOKEN = 2; return resdiv;}}}
        else{
            cout<<"\n\n----->Ingrese los numeros para elevar a la x^n pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
            res=pow(a,b); VALID_TOKEN = 1; return res;}}}
            
//*Es la operacion de sacar el seno
double seno(){if(res==0 && resultado==0 && resdiv == 0){
    cout<<"\n\n----->Ingrese el grado para sacar el seno: ";cin.ignore(); cin>>a;
    res=sin(a*pi/180); VALID_TOKEN = 1; return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            if (VALID_TOKEN == 0){
                res=sin(resultado*pi/180); VALID_TOKEN = 1; return res;
            }else{if(VALID_TOKEN == 1){
                res=sin(res*pi/180); VALID_TOKEN = 1; return res;}}}
        else{
            cout<<"\n\n----->Ingrese el grado para sacar el seno: ";cin.ignore(); cin>>a;
            res=sin(a*pi/180); VALID_TOKEN = 1; return res;}}}

//*Es la operacion de sacar el cos
double cos(){if(res==0 && resultado==0 && resdiv == 0){
    cout<<"\n\n----->Ingrese el grado para sacar el cos: ";cin.ignore(); cin>>a;
    res=cos(a*pi/180); VALID_TOKEN = 1; return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            if (VALID_TOKEN == 0){
                res=cos(resultado*pi/180); VALID_TOKEN = 1; return res;
            }else{if(VALID_TOKEN == 1){
                res=cos(res*pi/180); VALID_TOKEN = 1; return res;}}}
        else{
            cout<<"\n\n----->Ingrese el grado para sacar el cos: ";cin.ignore(); cin>>a;
            res=cos(a*pi/180); VALID_TOKEN = 1; return res;}}}

//*Es la operacion de sacar el tan
double tan(){if(res==0 && resultado==0 && resdiv == 0){
    cout<<"\n\n----->Ingrese el grado para sacar el tan: ";cin.ignore(); cin>>a;
    res=tan(a*pi/180); VALID_TOKEN = 1; return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
             if (VALID_TOKEN == 0){
                res=tan(resultado*pi/180); VALID_TOKEN = 1; return res;
            }else{if(VALID_TOKEN == 1){
                res=tan(res*pi/180); VALID_TOKEN = 1; return res;}}}
        else{
            cout<<"\n\n----->Ingrese el grado para sacar la tan: ";cin.ignore(); cin>>a;
            res=tan(a*pi/180); VALID_TOKEN = 1; return res;}}}
            
//*Es la operacion que calcula la cotangente
double cotangente(){ if(res==0 && resultado==0 && resdiv == 0){
    cout<<"\n\n----->Ingrese el numero para calcularle su cotangente: ";cin>>a; a = a * pi / 180;
    res = 1 / tan(a); VALID_TOKEN = 1; return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            if ( VALID_TOKEN == 0){
                resultado = resultado * pi / 180; res = 1 / tan(resultado); VALID_TOKEN = 2; return res;
            }else{if( VALID_TOKEN == 1){
                res = res * pi / 180; res = 1 / tan(res); VALID_TOKEN = 1; return res;
            }else{
                resdiv = resdiv * pi / 180; res = 1 / tan(resdiv); VALID_TOKEN = 1; return res;}}}
            else{
                cout<<"\n\n----->Ingrese el numero para calcularle su cotangente: ";cin>>a; a = a * pi / 180;
                res = 1 / tan(a); VALID_TOKEN = 1; return res;}}}

//*Es la operacion que calcula la secante
double secante(){ if(res==0 && resultado==0 && resdiv == 0){
    cout<<"\n\n----->Ingrese el numero para calcularle su secante: ";cin>>a; a = a * pi / 180;
    res=1/cos(a); VALID_TOKEN = 1; return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            if ( VALID_TOKEN == 0){
                resultado = resultado * pi / 180; res=1/cos(resultado); VALID_TOKEN = 1; return res;
            }else{if( VALID_TOKEN == 1){
                res = res * pi / 180; res=1/cos(res); VALID_TOKEN = 2; return res;
            }else{
                resdiv = resdiv * pi / 180; res=1/cos(resdiv); VALID_TOKEN = 1; return res;}}}
            else{
                cout<<"\n\n----->Ingrese el numero para calcularle su secante: ";cin>>a; a = a * pi / 180;
                res=1/cos(a); VALID_TOKEN = 1; return res;}}}
            

//*Es la operacion que calcula la cosecante
double cosecante(){ if(res==0 && resultado==0 && resdiv == 0){
    cout<<"\n\n----->Ingrese el numero para calcularle su cosecante: ";cin>>a; a = a * pi / 180;
    res=1/sin(a); VALID_TOKEN = 1; return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            if ( VALID_TOKEN == 0){
                resultado = resultado * pi / 180; res=1/sin(resultado);  VALID_TOKEN = 2; return res;
            }else{if( VALID_TOKEN == 1){
                res = res * pi / 180; res=1/sin(res);  VALID_TOKEN = 1; return res;
            }else{
                resdiv = resdiv * pi / 180; res=1/sin(resdiv);  VALID_TOKEN = 1; return res;}}}
            else{
               cout<<"\n\n----->Ingrese el numero para calcularle su cosecante: ";cin>>a; a = a * pi / 180;
                res=1/sin(a); VALID_TOKEN = 1; return res;}}}

//*Es la operacion de sacar combinaciones
int combinaciones(){ int n,r,fact,nr,rr,n_r;
printf("\n\n----->Proporciona 2 valores separados por enter que indiquen N y R: ");cin.ignore(); cin>>n;cin>>r;
        fact=1;
            for ( i = 1; i <= n; i++){
                  fact=fact*i;} nr=fact; fact=1;
                for ( i = 1; i <= r; i++){
                    fact=fact*i;} rr=fact; fact=1;
                   for ( i = 1; i <= n-r; i++){
                        fact=fact*i;} n_r=fact;
                    resultado=nr/(rr*n_r); VALID_TOKEN = 0; return resultado;}
//*Es la operacion de sacar permutaciones
int permutaciones(){int n,r,fact,nr,n_r;
printf("\n\n----->Proporciona 2 valores separados por enter que indiquen N y R: "); cin>>n;cin>>r;
    fact=1;
    for ( i = 1; i <= n; i++){
         fact=fact*i;} nr=fact; fact=1;
        for ( i = 1; i <= r; i++){
            fact=fact*i;} n_r=fact;
        resultado=nr/n_r; VALID_TOKEN = 0; return resultado;}

//*Formula de permutaciones de n objetos sin repeticion
int permutacionesfact(){
	cout<<"\n\n----->Ingrese el numero de los objetos: ";cin>>a; resultado=a;
	if (a==0){ resultado=1; } else { for (i=a-1;i>1;i--){ resultado=resultado*(i); }} VALID_TOKEN = 0; return resultado;}

//*Formula de permutaciones de n objetos en grupos de r con repeticion
int permutacionesrrepe(){
	cout<<"\n\n----->Ingrese el numero de los objetos: ";cin>>a; cout<<"----->Ingrese r, el numero de objetos que integran los grupos : ";cin>>b;
	res=pow(a,b); VALID_TOKEN = 1; return res;}

//*Formula de permutaciones de n objetos en grupos de r sin repeticion
int permutacionesrnorepe(){ int af,bf;
	cout<<"\n\n----->Ingrese el numero de los objetos: ";cin>>a; af=a; cout<<"----->Ingrese r, el numero de objetos que integran los grupos : ";cin>>b; b=a-b; bf=b;
	if (a==0){ af=1; } else { for (i=a-1;i>1;i--){ af=af*(i); }} if (b==0){ bf=1; }
    else { for (i=b-1;i>1;i--){ bf=bf*(i); }} res=af/bf; VALID_TOKEN = 1; return res;}

//*Formula de permutaciones de n objetos con repeticion de k tipos distintos
int permutacioneskobj(){ int af,bf,k,kf,kfn;
	cout<<"\n\n----->Ingrese el numero de los objetos: "; cin>>a; res=a;
	if (a==0){ res=1;} else { for (i=a-1;i>1;i--){ res=res*(i);}} kfn=1; 
	do {cout<<"----->Introduce el numero de el objeto que se repite (introduce 0 para acabar dejar de ingresar k): "; cin>>k; 
    kf=k;if (k==0){ kf=1;}
    else { for (i=k-1;i>1;i--){ kf=kf*(i);}}kf=kf*kfn;kfn=kf;} while (k!=0);res=res/kfn; VALID_TOKEN = 1; return res;}



//* La operacion del valor absoluto
int vabsoluto(){
    cout<<"\n\n----->Ingrese el numero para sacar el valor absoluto: ";cin.ignore(); cin>>a;
    resultado=tan(a*pi/180); return resultado;
}