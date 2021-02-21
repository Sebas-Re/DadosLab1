#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctime>
#include <math.h>
#include <windows.h>
#include <conio.h>
using namespace std;
#include "rlutil.h"
#include "Proyecto_bunco1.0_funciones.h"

using namespace std;

int main(){


    system("TITLE BUNCO");
    bool SalirPrograma=false;
    system ("color 70");
    int op=0,Mganador[2]={};
    char Jmaximo[50],Janterior[50];
    Presentacion();
    while(SalirPrograma!=true){
    system ("color 70");
    system("cls");
    op=Menu();
    system("cls");
    if (op==17){SalirPrograma=true;}
    Opciones(op,Mganador,2,Jmaximo,Janterior);}
    locate(1,30);
    return 0;

}




