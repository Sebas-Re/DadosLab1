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
using namespace std;
#include "rlutil.h"
#include "Proyecto_bunco1.0_funciones.h"

using namespace std;

int main(){

   /** DibujarDados(1,5);
    cout<<endl<<endl<<endl;*/

    bool PartidasIniciadas=false;
    bool SalirPrograma=false;
    setlocale(LC_ALL, "spanish");
    system ("color 57");
    int op=0;
    int c=0;
    while(SalirPrograma!=true){
    system ("color 57");
    system("cls");
    op=Menu(op,PartidasIniciadas);
    system("cls");
    if (op==0){
        SalirPrograma=true;
    }
    else{
        if(op>=1&&op<=2){
            PartidasIniciadas=true;
        }
    }

    Opciones(op, PartidasIniciadas,c);

   }

return 0;
}




