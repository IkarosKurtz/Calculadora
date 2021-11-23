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
int i,opcion,x,opcolor,VALID_TOKEN = 0,readsave = 1;
int TITLE_COLOR = 6,SUBTITLE_COLOR = 9,MENU_COLOR = 7, ERROR_MESSAGE = 4,RESULT_INMENU = 2, QUEST_NUMBER  = 12, RES_COLOR = 7, COLORANT;
//Gillbran Cadengo Rodríguez ID: 332939 Sebastián Herrera Murillo  ID: 233324 Carlos Leonardo Cruz Ortiz ID: 261696
//? Declaraciones de las funciones, se podria quitar
int suma(); void menu(); float division(); int resta(); int cuadrado(); int cubo(); int xpotencia();
void submenu(); double seno(); double cos(); double tan(); double cotangente(); double secante(); double cosecante();
void combandpermenu(); int combinaciones(); int permutaciones(); int permutacionesfact(); int permutacionesrrepe(); int permutacionesrnorepe();
int permutacioneskobj(); int absoluto(); double notacien(); double raizcuadrada(); double raizx(); double logaritmoN();
double logaritmo10(); void config(); void save(); void read(); void colors();

//todos Y el M_PI es el valor de pi

//! El main
int main(){ system("cls"); 
//if (!TITLE_COLOR == 6 && !SUBTITLE_COLOR == 9 && !MENU_COLOR == 7 && !ERROR_MESSAGE == 4 && !RESULT_INMENU == 2 && !QUEST_NUMBER  == 12){}
  if(readsave == 1){read();}
 TEXT_COLOR(hConsole,TITLE_COLOR);
 printf("\t\t\t\t     BIENVENIDO A LA CALCULADORA CIENTIFICA.\n\n");
 TEXT_COLOR(hConsole, MENU_COLOR);
 menu();
 cout<<"\nIngrese el numero de la opcion que quiere: ";  cin>>opcion;
 //! Este es la seleccion del menu y algunas acciones
 switch (opcion){
 case 1:
        suma(); TEXT_COLOR(hConsole, RES_COLOR);  
        cout<<"--->La suma es: "<<res; TEXT_COLOR(hConsole, MENU_COLOR);
        cout<<"\n\n"; system("pause"); main();

 case 2:
        resta(); TEXT_COLOR(hConsole, RES_COLOR);
        cout<<"--->La resta es: "<<res; TEXT_COLOR(hConsole, MENU_COLOR);
        cout<<"\n\n"; system("pause"); main();

 case 3:
        division(); TEXT_COLOR(hConsole, RES_COLOR);
        cout<<"--->La division es: "<<res; TEXT_COLOR(hConsole, MENU_COLOR);
        cout<<"\n\n"; system("pause"); main();
        
case 4:
        cuadrado(); TEXT_COLOR(hConsole, RES_COLOR);
        cout<<"--->La potencia al cuadrado es: "<<res; TEXT_COLOR(hConsole, MENU_COLOR);
        cout<<"\n\n"; system("pause"); main();
case 5:
        cubo(); TEXT_COLOR(hConsole, RES_COLOR);
        cout<<"--->La potencia al cubo es: "<<res; TEXT_COLOR(hConsole, MENU_COLOR);
        cout<<"\n\n"; system("pause"); main();
case 6:
        xpotencia(); TEXT_COLOR(hConsole, RES_COLOR);
        cout<<"--->La potencia a la n es: "<<res;  TEXT_COLOR(hConsole, MENU_COLOR);
        cout<<"\n\n"; system("pause"); main();

case 7:
        submenu();

case 8:
        combandpermenu();

case 9:
        absoluto();
            cout<<"\n\n--->El valor absoluto es:"<<res;
            cout<<"\n\n"; system("pause"); main();

case 10:    system("cls");TEXT_COLOR(hConsole,SUBTITLE_COLOR);
            printf("NOTACION CIENTIFICA: \n\n"); TEXT_COLOR(hConsole,MENU_COLOR);
            printf("1- De notacion cientifica a decimal.\n");
            printf("2- De decimal a notacion cientifica.\n");
            cout<<"3- <----Regresar."<<endl;
            if (res == 0){ TEXT_COLOR(hConsole, RESULT_INMENU); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, MENU_COLOR);}
            else{
                TEXT_COLOR(hConsole, RESULT_INMENU);
                cout<<"\nEl resultado de la operacion anterior: "<<res<<endl;TEXT_COLOR(hConsole, MENU_COLOR);}

            cout<<"\nElije una opcion: "; cin>>opcion; if(opcion == 3){main();} if(opcion > 3 || opcion <= 0){TEXT_COLOR(hConsole,ERROR_MESSAGE);
            cout<<"ESTA NO ES UNA OPCION VALIDA, USUARIO ELIJA UNA OPCION VALIDA."<<endl; TEXT_COLOR(hConsole, MENU_COLOR);
            system("pause"); main();}
            notacien();
            if (opcion == 1){
                cout<<res;}
            cout<<"\n\n"; system("pause"); main();

case 11:    system("cls");TEXT_COLOR(hConsole,SUBTITLE_COLOR);
            printf("RAICES: \n\n"); TEXT_COLOR(hConsole,MENU_COLOR);
            printf("1- Raiz cuadrada.\n");
            printf("2- Raiz a la n.\n");
            cout<<"3- <----Regresar."<<endl;
            if (res == 0){ TEXT_COLOR(hConsole, RESULT_INMENU); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, MENU_COLOR);}
            else{
                TEXT_COLOR(hConsole, RESULT_INMENU);
                cout<<"\nEl resultado de la operacion anterior: "<<res<<endl;TEXT_COLOR(hConsole, MENU_COLOR);}
            cout<<"\nElije una opcion: "; cin>>opcion;
            if (opcion == 1){
                raizcuadrada(); TEXT_COLOR(hConsole, RES_COLOR);
                printf("Su raiz cuadrada es: ");TEXT_COLOR(hConsole, MENU_COLOR);
                cout<<res;}
            else{if(opcion == 3){main();} if(opcion > 3 || opcion <= 0){TEXT_COLOR(hConsole,ERROR_MESSAGE);
                cout<<"ESTA NO ES UNA OPCION VALIDA, USUARIO ELIJA UNA OPCION VALIDA."<<endl; TEXT_COLOR(hConsole, MENU_COLOR);
                system("pause"); main();}
                raizx();TEXT_COLOR(hConsole, RES_COLOR);
                printf("Su raiz es: ");TEXT_COLOR(hConsole, MENU_COLOR);
                cout<<res;}
            cout<<"\n\n"; system("pause"); main();

case 12:    system("cls");TEXT_COLOR(hConsole,SUBTITLE_COLOR);
            printf("LOGARITMOS: \n\n"); TEXT_COLOR(hConsole,MENU_COLOR);
            printf("1- Logaritmo natural.\n");
            printf("2- Logaritmo base 10 o normal.\n");
            cout<<"3- <----Regresar."<<endl;
            if (res == 0){ TEXT_COLOR(hConsole, RESULT_INMENU); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, MENU_COLOR);}
            else{
                TEXT_COLOR(hConsole, RESULT_INMENU);
                cout<<"\nEl resultado de la operacion anterior: "<<res<<endl;TEXT_COLOR(hConsole, MENU_COLOR);}

            cout<<"\nElije una opcion: "; cin>>opcion;
            if (opcion == 1){
                logaritmoN(); TEXT_COLOR(hConsole, RES_COLOR);
                printf("Su logaritmo natural es: "); TEXT_COLOR(hConsole, MENU_COLOR);
                cout<<res;}
            else{ if(opcion == 3){main();} if(opcion > 3 || opcion <= 0){TEXT_COLOR(hConsole,ERROR_MESSAGE);
                cout<<"ESTA NO ES UNA OPCION VALIDA, USUARIO ELIJA UNA OPCION VALIDA."<<endl; TEXT_COLOR(hConsole, MENU_COLOR);
                system("pause"); main();}
                logaritmo10(); TEXT_COLOR(hConsole, RES_COLOR);
                printf("Su logaritmo a base 10 es: "); TEXT_COLOR(hConsole, MENU_COLOR);
                cout<<res;} cout<<"\n\n"; system("pause"); main();

case 13: 	
        config();

 default:
        TEXT_COLOR(hConsole,ERROR_MESSAGE);
        cout<<"ESTA NO ES UNA OPCION VALIDA, USUARIO ELIJA UNA OPCION VALIDA."<<endl; TEXT_COLOR(hConsole, MENU_COLOR);
        system("pause"); main();}}

void config(){system("cls");
TEXT_COLOR(hConsole,SUBTITLE_COLOR);
 printf("CONFIGURACION: \n\n"); TEXT_COLOR(hConsole, MENU_COLOR);
cout<<"1- Personalizacion."<<endl;
cout<<"2- Creditos."<<endl;
cout<<"3- <---Regresar."<<endl;
cout<<"Que opcion elije: "; cin>>opcolor;
switch (opcolor)
{
case 1:
    printf("1- Personalizar color del titulo principal.\n");
    printf("2- Personalizar color del texto en general.\n");
    cout<<"3- Personalizar color de los mensajes de error."<<endl;
    cout<<"4- Personalizar color de los subtitulos."<<endl;
    cout<<"5- Personalizar color del resultado anterior en los menus."<<endl;
    cout<<"6- Personalizar color de la pregunta del resultado anterior."<<endl;
    cout<<"7- <----Regresar y Guardar."<<endl;
    cout<<"Que opcion elije: "; cin>>opcolor;
        switch (opcolor){
    case 1: do{colors();
        cout<<"\n\n---->Elige un color (Si quiere regresar ingrese 0): "; COLORANT = TITLE_COLOR; cin>>TITLE_COLOR; if (TITLE_COLOR == 0){ TITLE_COLOR = COLORANT; config();} VALID_TOKEN ++;
        }while (TITLE_COLOR <= 0 || TITLE_COLOR > 15);VALID_TOKEN --; config();

    case 2: do{colors();
        cout<<"\n\n---->Elige un color (Si quiere regresar ingrese 0): "; COLORANT = MENU_COLOR; cin>>MENU_COLOR; if (MENU_COLOR == 0){ MENU_COLOR = COLORANT; config();} VALID_TOKEN ++;
        }while (MENU_COLOR <= 0 || MENU_COLOR > 15);VALID_TOKEN --; config();

    case 3: do{colors();
        cout<<"\n\n---->Elige un color (Si quiere regresar ingrese 0): "; COLORANT = ERROR_MESSAGE; cin>>ERROR_MESSAGE; if (ERROR_MESSAGE == 0){ ERROR_MESSAGE = COLORANT; config();} VALID_TOKEN ++;
        }while (ERROR_MESSAGE <= 0 || ERROR_MESSAGE > 15);VALID_TOKEN --; config();

    case 4: do{colors();
        cout<<"\n\n---->Elige un color (Si quiere regresar ingrese 0): "; COLORANT = SUBTITLE_COLOR; cin>>SUBTITLE_COLOR; if (SUBTITLE_COLOR == 0){ SUBTITLE_COLOR = COLORANT; config();} VALID_TOKEN ++;
        }while (SUBTITLE_COLOR <= 0 || SUBTITLE_COLOR > 15);VALID_TOKEN --; config();

    case 5: do{colors();
        cout<<"\n\n---->Elige un color (Si quiere regresar ingrese 0): "; COLORANT = RESULT_INMENU; cin>>RESULT_INMENU; if (RESULT_INMENU == 0){ RESULT_INMENU = COLORANT; config();} VALID_TOKEN ++;
        }while (RESULT_INMENU <= 0 || RESULT_INMENU > 15);VALID_TOKEN --; config();

    case 6: do{colors();
        cout<<"\n\n---->Elige un color (Si quiere regresar ingrese 0): "; COLORANT = QUEST_NUMBER; cin>>QUEST_NUMBER; if (QUEST_NUMBER == 0){ QUEST_NUMBER = COLORANT; config();} VALID_TOKEN ++;
        }while (QUEST_NUMBER <= 0 || QUEST_NUMBER > 15);VALID_TOKEN --; config();

    case 7: save();

    default:
        TEXT_COLOR(hConsole,ERROR_MESSAGE);
        cout<<"ESTA NO ES UNA OPCION VALIDA, USUARIO ELIJA UNA OPCION VALIDA."<<endl; TEXT_COLOR(hConsole, MENU_COLOR);
        system("pause"); main();}
case 2: system("cls"); TEXT_COLOR(hConsole,SUBTITLE_COLOR);
    cout<<"Proyecto de la Universidad Autonoma de Aguascalientes.\n"<<endl; TEXT_COLOR(hConsole, MENU_COLOR);
    cout<<"\t      Integrantes del equipo:\n"<<endl;
    cout<<"\tCarlos Leonardo Cruz Ortiz  ID: 261696\n\n\tGillbran Cadengo Rodriguez  ID: 332939\n\n\tSebastian Herrera Murillo   ID: 233324\n"<<endl; system("pause"); main();

case 3:
    main();
    
default:
        TEXT_COLOR(hConsole,ERROR_MESSAGE);
        cout<<"ESTA NO ES UNA OPCION VALIDA, USUARIO ELIJA UNA OPCION VALIDA."<<endl; TEXT_COLOR(hConsole, MENU_COLOR);
        system("pause"); main();}}

void colors(){system("cls");
    if (VALID_TOKEN == 1){TEXT_COLOR(hConsole,ERROR_MESSAGE); cin.ignore(); cout<<"Elija un color que este en la lista."<<endl; TEXT_COLOR(hConsole,MENU_COLOR);}
    cout<<"\nAzul oscuro			1  \nVerde oscuro			2  \nCyan oscuro			3  \nRojo oscuro			4  \nMagenta oscuro			5  \nAmarillo oscuro			6  \nGris claro			7  \nGris oscuro			8  \nAzul claro			9  \nVerde claro			10  \nCyan claro			11  \nRojo claro			12  \nMagenta claro			13  \nAmarillo claro			14  \nBlanco				15\n";}

//todos Este es el menu
void menu(){
 cout<<"Elejir una de las opciones:\n"<<endl;
 cout<<"1- Suma."; cout<<"\t    2- Resta.  "; cout<<"\t\t      3- Division.  "; cout<<"\t\t       4- Elevar al cuadrado.\n"<<endl;
 cout<<"5- Elevar al cubo.  "; cout<<"6- Elevar a la n.  "; cout<<"\t      7- Funciones Trigonometricas.  "; cout<<"  8- Combinaciones y Permutaciones.\n"<<endl;
 cout<<"9- Valor absoluto.  "; cout<<"10- Notacion cientifica.  "; cout<<"11- Raices.  "; cout<<"\t\t       12- Logaritmos.  \n"<<endl; cout<<"13- Configuracion."<<endl;
 //todos Esta parte es para poner el resultaodo anterior y que el usaurio no tenga que recordarlo
 if (res == 0){ TEXT_COLOR(hConsole, RESULT_INMENU); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, MENU_COLOR);}
            else{
                TEXT_COLOR(hConsole, RESULT_INMENU);
                cout<<"\nEl resultado de la operacion anterior: "<<res<<endl;TEXT_COLOR(hConsole, MENU_COLOR);}}
//todos Aqui acaba 

//todos menu de las funciones
void submenu(){ system("cls"); int opfun;
 TEXT_COLOR(hConsole,SUBTITLE_COLOR); cout<<"FUNCIONES TRIGONOMETRICAS\n\n";TEXT_COLOR(hConsole,MENU_COLOR);
 cout<<"Elejir una de las opciones"<<endl;
 cout<<"1- Funcion Seno."<<endl;
 cout<<"2- Funcion Coseno."<<endl;
 cout<<"3- Funcion Tangente."<<endl;
 cout<<"4- Funcion Cotangente."<<endl;
 cout<<"5- Funcion Secante."<<endl;
 cout<<"6- Funcion Cosecante."<<endl;
 cout<<"7- <----Regresar."<<endl;
 //todos Esta parte es para poner el resultaodo anterior y que el usaurio no tenga que recordarlo
 if (res == 0){ TEXT_COLOR(hConsole, RESULT_INMENU); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, MENU_COLOR);}
            else{
                TEXT_COLOR(hConsole, RESULT_INMENU);
                cout<<"\nEl resultado de la operacion anterior: "<<res<<endl;TEXT_COLOR(hConsole, MENU_COLOR);}
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
    case 7: main();
        
    default:
        TEXT_COLOR(hConsole,ERROR_MESSAGE);
        cout<<"ESTA NO ES UNA OPCION VALIDA, USUARIO ELIJA UNA OPCION VALIDA"<<endl; TEXT_COLOR(hConsole, MENU_COLOR);
        system("pause"); main();}}

//todos Este es el menu para las combinaiones y permutaciones
void combandpermenu(){system("cls"); int opcomb;
 TEXT_COLOR(hConsole,SUBTITLE_COLOR); cout<<"COMBINACIONES Y PERMUTACIONES\n\n";TEXT_COLOR(hConsole,MENU_COLOR);
 cout<<"Elejir una de las opciones"<<endl;
 cout<<"1- Combinacion"<<endl;
 cout<<"2- Permutacion"<<endl;
 cout<<"3- Permutaciones de n objetos sin repeticion"<<endl;
 cout<<"4- Permutaciones de n objetos en grupos de r con repeticion"<<endl;
 cout<<"5- Permutaciones de n objetos en grupos de r sin repeticion"<<endl;
 cout<<"6- Permutaciones de n objetos con repeticion de k tipos distintos"<<endl;
 cout<<"7- <----Regresar."<<endl;
 //todos Esta parte es para poner el resultaodo anterior y que el usaurio no tenga que recordarlo
 if (res == 0){ TEXT_COLOR(hConsole, RESULT_INMENU); cout<<"\nEl resultado anterior es: 0"<<endl; TEXT_COLOR(hConsole, MENU_COLOR);}
            else{
                TEXT_COLOR(hConsole, RESULT_INMENU);
                cout<<"\nEl resultado de la operacion anterior: "<<res<<endl;TEXT_COLOR(hConsole, MENU_COLOR);}
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

    case 7: main();

    default:
        TEXT_COLOR(hConsole,ERROR_MESSAGE);
        cout<<"ESTA NO ES UNA OPCION VALIDA, USUARIO ELIJA UNA OPCION VALIDA."<<endl; TEXT_COLOR(hConsole, MENU_COLOR);
        system("pause"); main();}}

//* Sistema de guadrado para la configuracion.
void save(){system("cls");
ofstream CONFIG;
CONFIG.open("CONFIG.dat",ios::out | ios::binary);
if(CONFIG.fail()){TEXT_COLOR(hConsole,ERROR_MESSAGE); cout<<"FALLO EN EL GUADRADO DE LA CONFIGURACION."<<endl; TEXT_COLOR(hConsole,MENU_COLOR);}
CONFIG.write((char *)&TITLE_COLOR,sizeof(TITLE_COLOR));
CONFIG.write((char *)&SUBTITLE_COLOR,sizeof(SUBTITLE_COLOR));
CONFIG.write((char *)&MENU_COLOR,sizeof(MENU_COLOR));
CONFIG.write((char *)&ERROR_MESSAGE,sizeof(ERROR_MESSAGE));
CONFIG.write((char *)&RESULT_INMENU,sizeof(RESULT_INMENU));
CONFIG.write((char *)&QUEST_NUMBER,sizeof(QUEST_NUMBER));
CONFIG.write((char *)&readsave,sizeof(readsave));
CONFIG.close();
system("pause"); main();}

//* Sistema de cargado de la configuracion.
void read(){
ifstream CONFIG;

CONFIG.open("CONFIG.dat",ios::in|ios::binary);
if(CONFIG.fail()){TEXT_COLOR(hConsole,ERROR_MESSAGE); cout<<"FALLO EN LA CARGA DE LA CONFIGURACION, SI ES LA PRIMERA VEZ QUE ABRES EL PROGRAMA IGNORA ESTO."<<endl; TEXT_COLOR(hConsole,MENU_COLOR); readsave = 0; system("pause"); main();}
CONFIG.read((char *)&TITLE_COLOR,sizeof(TITLE_COLOR));
CONFIG.read((char *)&SUBTITLE_COLOR,sizeof(SUBTITLE_COLOR));
CONFIG.read((char *)&MENU_COLOR,sizeof(MENU_COLOR));
CONFIG.read((char *)&ERROR_MESSAGE,sizeof(ERROR_MESSAGE));
CONFIG.read((char *)&RESULT_INMENU,sizeof(RESULT_INMENU));
CONFIG.read((char *)&QUEST_NUMBER,sizeof(QUEST_NUMBER));
CONFIG.read((char *)&readsave,sizeof(readsave));
CONFIG.close();readsave = 0;
TEXT_COLOR(hConsole,10); cout<<"CARGA DE CONFIGURACION EXITOSA."<<endl; TEXT_COLOR(hConsole,MENU_COLOR);
system("pause"); main();}




//*Es la operacion de la suma
int suma(){if(res == 0){ //! El if es por si el usuario quiere utilizar el resultado anterior
    cout<<"\n\n----->Ingrese los numeros a sumar como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
    res = a + b; return res;}
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
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
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
        if (utilant == 'n' || utilant == 'N'){
            cout<<"\n\n----->Ingrese los numeros a restar como a y b pero separados con enter (se toma encuenta el resultado anterior): ";cin.ignore(); cin>>a;cin>>b;
            res = res - a - b; return res;}
        else{
            cout<<"\n\n----->Ingrese los numeros a restar como a y b pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
            res = a - b;  return res;}}}

//*Es la operacion de la division
float division(){if(res == 0){
    cout<<"\n\n----->Ingrese los numeros a dividir como a y b pero separados con enter: ";cin.ignore(); cin>>p;cin>>z;
    if (z == 0){ TEXT_COLOR(hConsole,ERROR_MESSAGE); cout<<"\nMath ERROR, usaurio recuerde que no se puede dividir entre cero"<<endl; TEXT_COLOR(hConsole, MENU_COLOR); system("pause"); main();}
        else{res = p / z; return res;}}
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
        if (utilant == 'n' || utilant == 'N'){
            cout<<"\n\n----->Ingrese el numero por el cual se va a divir el resultado anterior: ";cin.ignore();cin>>z;
            if (z == 0){ TEXT_COLOR(hConsole,ERROR_MESSAGE); cout<<"\nMath ERROR, usaurio recuerde que no se puede dividir entre cero"<<endl; TEXT_COLOR(hConsole, MENU_COLOR); system("pause"); main();}
            else{res = res / z;  return res;}}
            else{
            cout<<"\n\n----->Ingrese los numeros a dividir como a y b pero separados con enter: ";cin.ignore(); cin>>p;cin>>z;
            if (res == 0){ TEXT_COLOR(hConsole,ERROR_MESSAGE); cout<<"\nMath ERROR, usaurio recuerde que no se puede dividir entre cero"<<endl; TEXT_COLOR(hConsole, MENU_COLOR); system("pause"); main();}
            else{res = p / z; return res;}}}}

//*Es la operacion de elevar al cuadrado
int cuadrado(){if(res == 0){
    cout<<"\n\n----->Ingrese el numero para elevar al cuadrado: ";cin.ignore(); cin>>a;
    res = pow(a,2); return res;}
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
        if (utilant == 'n' || utilant == 'N'){
        res = pow(res,2); return res;}
        else{
            cout<<"\n\n----->Ingrese el numero para elevar al cuadrado: ";cin.ignore(); cin>>a;
            res = pow(a,2); return res;}}}

//*Es la operacion de elevar al cubo
int cubo(){if(res == 0){
    cout<<"\n\n----->Ingrese el numeros para elevar al cubo: ";cin.ignore(); cin>>a;
    res = pow(a,3); return res;}
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
        if (utilant == 'n' || utilant == 'N'){
            res = pow(res,3); return res;}
        else{
            cout<<"\n\n----->Ingrese el numeros para elevar al cubo: ";cin.ignore(); cin>>a;
            res = pow(a,3); return res;}}}

//*Es la operacion de elevar a la n
int xpotencia(){if(res == 0){
    cout<<"\n\n----->Ingrese los numeros para elevar a la x^n pero separados con enter: ";cin.ignore(); cin>>a;cin>>b;
    res = pow(a,b); return res;}
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
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
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
        if (utilant == 'n' || utilant == 'N'){
                if (res < 0){ TEXT_COLOR(hConsole,ERROR_MESSAGE);cout<<"Usuario no se puede sacar raiz a numeros negativos"<<endl;
                TEXT_COLOR(hConsole,MENU_COLOR); system("pause"); main();}
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
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
    if (utilant == 'n' || utilant == 'N'){
                        printf("\n\n----->Ingresa valor del grado de la raiz ya el el valor de x sera el resultado anterior: "); cin>>w; a=w;
                    if (x % 2 == 0){
                        if(res<0){TEXT_COLOR(hConsole,ERROR_MESSAGE); printf("*El valor que sacara la raiz debe ser 0 o mayor"); TEXT_COLOR(hConsole,MENU_COLOR); system("pause"); main();}
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
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
    if (utilant == 'n' || utilant == 'N'){
            if (res <= 0){TEXT_COLOR(hConsole,ERROR_MESSAGE); printf("*El valor debe ser 0 o mayor"); TEXT_COLOR(hConsole,MENU_COLOR); system("pause"); main();}
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
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
    if (utilant == 'n' || utilant == 'N'){
            if (res<=0){TEXT_COLOR(hConsole,ERROR_MESSAGE); printf("*El valor debe ser 0 o mayor"); TEXT_COLOR(hConsole,MENU_COLOR); system("pause"); main();}
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
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
        if (utilant == 'n' || utilant == 'N'){
            res = sin(res * pi / 180); return res;}
        else{
            cout<<"\n\n----->Ingrese el grado para sacar el seno: ";cin.ignore(); cin>>a;
            res = sin(a * pi / 180); return res;}}}

//*Es la operacion de sacar el cos
double cos(){if(res == 0){
    cout<<"\n\n----->Ingrese el grado para sacar el cos: ";cin.ignore(); cin>>a;
    res = cos(a * pi / 180); return res;}
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
        if (utilant == 'n' || utilant == 'N'){
            res = cos(res * pi / 180); return res;}
        else{
            cout<<"\n\n----->Ingrese el grado para sacar el cos: ";cin.ignore(); cin>>a;
            res = cos(a * pi / 180); return res;}}}

//*Es la operacion de sacar el tan
double tan(){if(res == 0){
    cout<<"\n\n----->Ingrese el grado para sacar el tan: ";cin.ignore(); cin>>a;
    res = tan(a * pi / 180); return res;}
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
        if (utilant == 'n' || utilant == 'N'){
            res = tan(res * pi / 180); return res;}
        else{
            cout<<"\n\n----->Ingrese el grado para sacar la tan: ";cin.ignore(); cin>>a;
            res = tan(a * pi / 180); return res;}}}
            
//*Es la operacion que calcula la cotangente
double cotangente(){ if(res == 0){
    cout<<"\n\n----->Ingrese el numero para calcularle su cotangente: ";cin>>a; a = a * pi / 180;
    res = 1 / tan(a); return res;}
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
        if (utilant == 'n' || utilant == 'N'){
                res = res * pi / 180; res = 1 / tan(res); return res;}
            else{
                cout<<"\n\n----->Ingrese el numero para calcularle su cotangente: ";cin>>a; a = a * pi / 180;
                res = 1 / tan(a); return res;}}}

//*Es la operacion que calcula la secante
double secante(){ if(res == 0){
    cout<<"\n\n----->Ingrese el numero para calcularle su secante: ";cin>>a; a = a * pi / 180;
    res = 1 / cos(a); return res;}
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
        if (utilant == 'n' || utilant == 'N'){
            res = res * pi / 180; res = 1 / cos(res); return res;}
            else{
                cout<<"\n\n----->Ingrese el numero para calcularle su secante: ";cin>>a; a = a * pi / 180;
                res = 1 / cos(a);  return res;}}}
            

//*Es la operacion que calcula la cosecante
double cosecante(){ if(res == 0){
    cout<<"\n\n----->Ingrese el numero para calcularle su cosecante: ";cin>>a; a = a * pi / 180;
    res = 1 / sin(a); return res;}
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
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
    else{ TEXT_COLOR(hConsole,QUEST_NUMBER);
    cout<<"\n\nQuieres utlizar el resultado de la operacion anterior?? (ingresar n si es asi, si no cualquier otra tecla): "; cin>>utilant; TEXT_COLOR(hConsole,MENU_COLOR);
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
                printf("--->En notacion cientifica es: ");cout<<aux; printf("(10)^"); cout<<cont;}
            else{
                aux=z;
                while(aux > 10){
                    aux = aux / 10.0;
                    cont = cont + 1;}
                printf("En notacion cientifica es: ");cout<<aux;
                printf("(10)^");cout<<cont;}break;}}