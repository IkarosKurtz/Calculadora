#include <bits/stdc++.h>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;
//* Colores para las frases
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
#define color SetConsoleTextAttribute
//todos estos son las variables globales
int resultado;
double res,p,pi=M_PI,resulantdob;
char utilant;
int x,a,b,i,resulant,token=0;
int opcion,opfun;
//? Declaraciones de las funciones, se podria quitar
int suma(); void menu(); float division(); int resta(); int cuadrado(); int cubo(); int xpotencia(); int combinaciones(); int permutaciones(); int vabsoluto();
void submenu(); double seno(); double cos(); double tan();

//! El main
int main(){ system("cls"); 
 color(hConsole,6);
 printf("Bienvenido a la calculadora cientifica\n\n");
 color(hConsole, 7);
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
        cout<<"--->La division es: "<<resultado;
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
        color(hConsole,4);
        cout<<"ESTA NO ES UNA OPCION VALIDA, USUARIO ELIJA UNA OPCION VALIDA"<<endl; color(hConsole, 7);
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
 
 if (resultado==0){ cout<<"El resultado anterior es: 0"<<endl;
 }
 else{
     if (token==0){ color(hConsole, 2);
     cout<<"\nEl resultado de la operacion anterior: "<<resultado<<endl;color(hConsole, 7);}
     else{color(hConsole, 2);
     cout<<"\nEl resultado de la operacion de la funcion anterior: "<<res<<endl;color(hConsole, 7);}}}
//todos menu de las funciones
void submenu(){ system("cls");
 color(hConsole,9); cout<<"Funciones trigonometricas\n\n";color(hConsole,7);
 cout<<"Elejir una de las opciones"<<endl;
 cout<<"1- Funcion seno"<<endl;
 cout<<"2- Funcion coseno"<<endl;
 cout<<"3- Funcion tangente"<<endl;
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
        break;
    }
}
//*Es la operacion de la suma
int suma(){if(resultado==0){ //! El if es por si el usuario quiere utilizar el resultado anterior
    cout<<"\n\n----->Ingrese los numeros a sumar como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
    resultado=a+b; token=0; return resultado;}
    else{ color(hConsole,12);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; color(hConsole,7);
        if (utilant=='n' || utilant=='N'){
            cout<<"\n\n----->Ingrese los numeros a sumar como a y b pero separados con enter(se toma encuenta el resultado anterior): ";cin.ignore(); cin>>a;cin>>b;
            resultado+=a+b; token=0; return resultado;}
        else{
            cout<<"\n\n----->Ingrese los numeros a sumar como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
            resultado=a+b; token=0; return resultado;}}}
//*Es la operacion de la resta
int resta(){
    cout<<"\n\n----->Ingrese los numeros a restar como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
    resultado=a-b; return resultado;}
//*Es la operacion de la division
float division(){
    cout<<"\n\n----->Ingrese los numeros a dividir como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
    resultado=a/b; return resultado;}
//*Es la operacion de elevar al cuadrado
int cuadrado(){
    cout<<"\n\n----->Ingrese el numero para elevar al cuadrado: ";cin.ignore(); cin>>a;
    res= pow(a,2); return res;}
//*Es la operacion de elevar al cubo
int cubo(){
    cout<<"\n\n----->Ingrese el numeros para elevar al cubo: ";cin.ignore(); cin>>a;
    res= pow(a,3); return res;}
//*Es la operacion de elevar a la n
int xpotencia(){
    cout<<"\n\n----->Ingrese los numeros para elevar a la x^n pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
    res=pow(a,b); return res;}
//*Es la operacion de sacar el seno
double seno(){
    cout<<"\n\n----->Ingrese el numero para sacar el seno: ";cin.ignore(); cin>>a;
    res=sin(a*pi/180); return res;} 
//*Es la operacion de sacar el cos
double cos(){
    cout<<"\n\n----->Ingrese el numero para sacar el cos: ";cin.ignore(); cin>>a;
    res=cos(a*pi/180); return res;}
//*Es la operacion de sacar el tan
double tan(){
    cout<<"\n\n----->Ingrese el numero para sacar el tan: ";cin.ignore(); cin>>a;
    res=tan(a*pi/180); return res;}
//*Es la operacion de sacar combinaciones
int combinaciones(){ int n,r,fact,nr,rr,n_r;
printf("\n\n----->Proporciona 2 valores separados por enter que indiquen N y R: ");cin.ignore(); cin>>n;cin>>r;
        fact=1;
            for ( i = 1; i <= n; i++)
                {
                  fact=fact*i;
                }
                nr=fact;
                fact=1;
                for ( i = 1; i <= r; i++)
                {
                    fact=fact*i;
                }
                rr=fact;
                fact=1;
                   for ( i = 1; i <= n-r; i++)
                    {
                        fact=fact*i;
                    }
                    n_r=fact;
                    resultado=nr/(rr*n_r); return resultado;}
//*Es la operacion de sacar permutaciones
int permutaciones(){int n,r,fact,nr,n_r;
printf("\n\n----->Proporciona 2 valores separados por enter que indiquen N y R: "); cin>>n;cin>>r;
    fact=1;
    for ( i = 1; i <= n; i++)
    {
         fact=fact*i;
    }
    nr=fact;
    fact=1;
        for ( i = 1; i <= r; i++)
        {
            fact=fact*i;
        }
        n_r=fact;
        resultado=nr/n_r; return resultado;}
//* La operacion del valor absoluto
int vabsoluto(){
    cout<<"\n\n----->Ingrese el numero para sacar el valor absoluto: ";cin.ignore(); cin>>a;
    resultado=tan(a*pi/180); return resultado;
}