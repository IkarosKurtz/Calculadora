#include <bits/stdc++.h>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;
//* TEXT_COLORes para las frases
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
#define TEXT_COLOR SetConsoleTextAttribute
//todos estos son las variables globales
int resultado=0;
double res=0,p,pi=M_PI;
char utilant;
int a = 0,b = 0,i,VALID_TOKEN=0;
int opcion,opfun;
float resdiv=0;

//? Declaraciones de las funciones, se podria quitar
int suma(); void menu(); float division(); int resta(); int cuadrado(); int cubo(); int xpotencia(); int combinaciones(); int permutaciones(); int vabsoluto();
void submenu(); double seno(); double cos(); double tan();

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
        combinaciones();
        cout<<"\n\n--->Las combinaciones son: "<<resultado;
        cout<<"\n\n"; system("pause"); main();
case 9:
        permutaciones();
        cout<<"\n\n--->Las permutaciones son: "<<resultado;
        cout<<"\n\n"; system("pause"); main();
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
 cout<<"7- Funciones trigonometricas"<<endl;
 cout<<"8- Combinaciones"<<endl;
 cout<<"9- Permutaciones"<<endl;
 
 if (resultado==0 && res==0 && resdiv==0){ TEXT_COLOR(hConsole, 2); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, 7);}
 else{
     if (VALID_TOKEN==0){ TEXT_COLOR(hConsole, 2);
     cout<<"\nEl resultado de la operacion anterior: "<<resultado<<endl;TEXT_COLOR(hConsole, 7);}
     else{TEXT_COLOR(hConsole, 2);
      if (VALID_TOKEN==2){ TEXT_COLOR(hConsole, 2);
        cout<<"\nEl resultado de la operacion anterior: "<<resdiv<<endl;TEXT_COLOR(hConsole, 7);}
        else{TEXT_COLOR(hConsole, 2);
        cout<<"\nEl resultado de la operacion de la funcion anterior: "<<res<<endl;TEXT_COLOR(hConsole, 7);}}}}

//todos menu de las funciones
void submenu(){ system("cls");
 TEXT_COLOR(hConsole,9); cout<<"Funciones trigonometricas\n\n";TEXT_COLOR(hConsole,7);
 cout<<"Elejir una de las opciones"<<endl;
 cout<<"1- Funcion seno"<<endl;
 cout<<"2- Funcion coseno"<<endl;
 cout<<"3- Funcion tangente"<<endl;
 if (resultado==0){ TEXT_COLOR(hConsole, 2); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, 7);}
 else{
     if (VALID_TOKEN==0){ TEXT_COLOR(hConsole, 2);
     cout<<"\nEl resultado de la operacion anterior: "<<resultado<<endl;TEXT_COLOR(hConsole, 7);}
     else{TEXT_COLOR(hConsole, 2);
      if (VALID_TOKEN==2){ TEXT_COLOR(hConsole, 2);
        cout<<"\nEl resultado de la operacion anterior: "<<resdiv<<endl;TEXT_COLOR(hConsole, 7);}
        else{TEXT_COLOR(hConsole, 2);
        cout<<"\nEl resultado de la operacion de la funcion anterior: "<<res<<endl;TEXT_COLOR(hConsole, 7);}}}

 cout<<"\nIngrese el numero de la opcion que quiere: ";cin.ignore(); cin>>opfun;
    switch (opfun)
    {
    case 1:
        seno();
        cout<<"--->El seno es: "<<res;
        cout<<"\n\n"; system("pause"); main();
    case 2:
        cos();
        cout<<"--->El seno es: "<<res;
        cout<<"\n\n"; system("pause"); main();
    case 3:
        tan();
        cout<<"--->El seno es: "<<res;
        cout<<"\n\n"; system("pause"); main();
    default:
        break;}}

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
    resdiv=a/b; VALID_TOKEN=2; return resdiv;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            cout<<"\n\n----->Ingrese los numeros a dividir como a pero separados con enter (se toma encuenta el resultado anterior): ";cin.ignore();cin>>b;
            if (VALID_TOKEN == 0){
                resdiv = resultado / b; VALID_TOKEN = 2; return resdiv;}
            else{if (VALID_TOKEN == 1){
                resdiv = res / b;  VALID_TOKEN = 2; return resdiv;}
            else{resdiv = resdiv / b; VALID_TOKEN = 2; return resdiv;}}}
        else{
            cout<<"\n\n----->Ingrese los numeros a dividir como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
            resdiv=a/b; VALID_TOKEN=2; return resdiv;}}}

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
    cout<<"\n\n----->Ingrese el numero para sacar el seno: ";cin.ignore(); cin>>a;
    res=sin(a*pi/180); VALID_TOKEN = 1; return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            if (VALID_TOKEN == 0){
                res=sin(resultado*pi/180); VALID_TOKEN = 1; return res;
            }else{if(VALID_TOKEN == 1){
                res=sin(res*pi/180); VALID_TOKEN = 1; return res;}}}
        else{
            cout<<"\n\n----->Ingrese el numero para sacar el seno: ";cin.ignore(); cin>>a;
            res=sin(a*pi/180); VALID_TOKEN = 1; return res;}}}

//*Es la operacion de sacar el cos
double cos(){if(res==0 && resultado==0 && resdiv == 0){
    cout<<"\n\n----->Ingrese el numero para sacar el cos: ";cin.ignore(); cin>>a;
    res=cos(a*pi/180); VALID_TOKEN = 1; return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            if (VALID_TOKEN == 0){
                res=cos(resultado*pi/180); VALID_TOKEN = 1; return res;
            }else{if(VALID_TOKEN == 1){
                res=cos(res*pi/180); VALID_TOKEN = 1; return res;}}}
        else{
            cout<<"\n\n----->Ingrese el numero para sacar el cos: ";cin.ignore(); cin>>a;
            res=cos(a*pi/180); VALID_TOKEN = 1; return res;}}}

//*Es la operacion de sacar el tan
double tan(){if(res==0 && resultado==0 && resdiv == 0){
    cout<<"\n\n----->Ingrese el numero para sacar el tan: ";cin.ignore(); cin>>a;
    res=tan(a*pi/180); VALID_TOKEN = 1; return res;}
    else{ TEXT_COLOR(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,7);
        if (utilant=='n' || utilant=='N'){
             if (VALID_TOKEN == 0){
                res=cos(resultado*pi/180); VALID_TOKEN = 1; return res;
            }else{if(VALID_TOKEN == 1){
                res=cos(res*pi/180); VALID_TOKEN = 1; return res;}}}
        else{
            cout<<"\n\n----->Ingrese el numero para sacar el cos: ";cin.ignore(); cin>>a;
            res=cos(a*pi/180); VALID_TOKEN = 1; return res;}}}

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
                    resultado=nr/(rr*n_r); return resultado;}
//*Es la operacion de sacar permutaciones
int permutaciones(){int n,r,fact,nr,n_r;
printf("\n\n----->Proporciona 2 valores separados por enter que indiquen N y R: "); cin>>n;cin>>r;
    fact=1;
    for ( i = 1; i <= n; i++){
         fact=fact*i;} nr=fact; fact=1;
        for ( i = 1; i <= r; i++){
            fact=fact*i;} n_r=fact;
        resultado=nr/n_r; return resultado;}
//* La operacion del valor absoluto
int vabsoluto(){
    cout<<"\n\n----->Ingrese el numero para sacar el valor absoluto: ";cin.ignore(); cin>>a;
    resultado=tan(a*pi/180); return resultado;
}