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
///FUNCIONES GENERALES  CON VECTORES

void ponerCero(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        v[i]=0;
    }
}


void cargarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
            locate(1,i+7);
        cout<<"INGRESE NUMERO: ";
        cin>>v[i];


}



    }


void mostrarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<"\t";
    }
}


void mostrarVectorSiEsDistintoaCero(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        if(v[i]!=0){cout<<v[i]<<endl;}
    }

}


int maximoenelVector(int v[], int tam){
    int maximo,i;
    maximo=v[0];
    for(i=1;i<tam;i++){
        if(v[i]>maximo){maximo=v[i];}
    }
    return maximo;

}


int maximoVector(int v[], int tam){
    int i, posMax=0;
    for(i=1;i<tam;i++){
        if(v[i]>v[posMax]) {
                posMax=i;
        }
    }
    return posMax;
}


int contarNumerosRepetidos(int v[], int numero, int tam){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(v[i]==numero) cant++;
        }
    return cant;
}


int minimoenelVector(int v[],int tam){
    int minimo,i;
    minimo=v[0];
    for(i=0;i<10;i++){
        if(v[i]<minimo){minimo=v[i];}
    }
    return minimo;

}


int minimoVector(int v[], int tam){
    int i, posMin=0;
    for(i=1;i<tam;i++){
        if(v[i]<v[posMin]) {
                posMin=i;
        }
    }
    return posMin;
}


void cargarAleatorio(int v[], int tam, int limite){
  int i;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;
  }
}


int sumarVector(int v[], int tam ){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=v[i];
    }
    return suma;
}


void copiarVector(int v[], int v2[],int tam ){
    int i;
    for(i=0;i<tam;i++){
        v2[i]=v[i];
    }
}


void ordenarVector(int v[], int tam ){
    int i,j, posmin, aux;
    for(i=0;i<tam-1;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
            if(v[j]<v[posmin]){posmin=j;}
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}


void ordenarVectorDesendente(int v[], int tam ){
    int i,j, posmax, aux;
    for(i=0;i<tam-1;i++){
        posmax=i;
        for(j=i+1;j<tam;j++){
            if(v[j]>v[posmax]) posmax=j;
        }
        aux=v[i];
        v[i]=v[posmax];
        v[posmax]=aux;
    }
}


bool compararVectores(int v[], int v2[],int tam ){
   int i;
    for(i=0;i<tam;i++){
        if(v2[i]!=v[i]) return false;
    }
    return true;
}


int contadorPares(int v[], int tam){
    int i,cp=0;
    for (i=0;i<tam;i++){
        if(v[i]%2==0){cp++;}
    }
    return cp;
}


int contadorImpares(int  v[], int tam){
    int i,ci=0;
    for(i=0;i<tam;i++){
        if(v[i]%2!=0){ci++;}
    }
    return ci;
}


///FUNCIONES ESPECIFICAS PARA BUNCO

int Menu(int v, bool PartidasIniciadas){
    for(int x=50; x<=70; x=x+2)
	{
		gotoxy (x,12);
		putchar ('*');
		gotoxy (x,15);
		putchar ('*');
	}
 	for(int y=12; y<=15; y++)
	{
		gotoxy (50,y);
		putchar ('*');
		gotoxy (70,y);
		putchar ('*');
	}
	locate(58,13);
	cout<<"BUNCO"<<endl;
	Sleep(1500);
	system("cls");

    for(int x=45; x<=75; x=x+2)
	{
		gotoxy (x,9);
		putchar ('*');
		gotoxy (x,21);
		putchar ('*');
	}
 	for(int y=9; y<=21; y++)
	{
		gotoxy (45,y);
		putchar ('*');
		gotoxy (75,y);
		putchar ('*');
	}
	        locate(58,10);
          cout <<"Menu"<<endl;
          locate(47,11);
   cout <<"---------------------------"<<endl;
   locate(50,12);
   cout<<"1 - Un jugador."<<endl;
   locate(50,13);
   cout<<"2 - Dos jugadores."<<endl;
   locate(50,14);
   cout<<"3 - Modo simulado."<<endl;
   if (PartidasIniciadas==true){
   locate(50,15);
   cout << "4- Puntaje mayor."<<endl;
   }
   locate(50,17);
   cout<<"5 - Instrucciones."<<endl;
   locate(50,18);
   cout<<"0 - Salir del programa."<<endl;
    locate(47,16);
cout<<"---------------------------"<<endl;
  locate(55,19);
   cout<<"Opcion: ";
   locate(63,19);
    cin>>v;
      system("cls");
        return v;
}

void Opciones(int v, bool PartidasIniciadas, int v1){
    const int tam=50;
    int PuntajeMaximo[]={};
    char Jugador1[tam],JugadorMaximo[]={};
int c;
c=v1;
    switch(v){
    case 1:
     {
         PartidasIniciadas=true;

        cin.ignore();
        NombrarJugador(Jugador1,tam);
        system("cls");
        Partida1Jugador(Jugador1,tam,c);


    }
        break;
    case  2:
     {
        PartidasIniciadas = true;
        DosJugadores(6, tam,JugadorMaximo,30,PuntajeMaximo,30,c);

    }
        break;
    case  3:
     {

        cin.ignore();
        NombrarJugador(Jugador1,tam);
        system("cls");
        Partida1JugadorManual(Jugador1,tam);
    }
        break;
    case 4:
        {
        int VectorDelGanador[3]={0};
        char NombreDelGanador[50];
        bool Bandera = true;
        PuntajeMayor(NombreDelGanador,50,VectorDelGanador,3,Bandera);
        }
        break;
    case 5:
        instrucciones();
        system("pasue");
        break;
   case  0:
        {
        Findelprograma();

        }
       break;
    default:
        {


        system("cls");

for(int x=22; x<=50; x=x+2){
		gotoxy (x,12);
		putchar ('*');
		gotoxy (x,14);
		putchar ('*');
	}
for(int y=12; y<=14; y++){
		gotoxy (22,y);
		putchar ('*');
		gotoxy (50,y);
		putchar ('*');
	}
	locate(27,13);
 cout << "Opcion incorrecta,elija un numero entre 0 y 4."<< endl;
 locate(22,16);
        system("pause");
        }
        break;
    }

}

void instrucciones(){
    locate(50,5);
    Sleep(300);
    cout<<"Reglamento del juego."<<endl<<endl<<endl<<endl;
    Sleep(300);
    cout<<"Bunco es un juego que utiliza 3 dados, y que puede ser jugado por uno o varios jugadores."<<endl;
    cout<<"El juego consiste en seis rondas, las cuales progresan secuencialmente del uno al seis."<<endl;
    cout<<"Cada ronda comienza con un lanzamiento de tres dados y un posterior analisis del puntaje al que equivale la tirada. "<<endl;
    cout<<"El jugador obtendra:"<<endl<<endl<<endl;
    Sleep(300);
cout<<"21 puntos si los tres dados coinciden con el numero de la ronda que se esta jugando (“Bunco”)."<<endl;
cout<<"5 puntos si los tres dados son iguales pero no coinciden con la ronda en curso."<<endl;
cout<<"3 puntos si la suma de los tres dados es divisible por 5."<<endl;
cout<<"2 puntos si los tres dados forman una escalera."<<endl;
cout<<"1 punto por cada dado que coincida con el numero de la ronda."<<endl<<endl<<endl;
cout<<"Nota: De obtener mas de una combinacion en el mismo lanzamiento, siempre debera sumar unicamente el puntaje de mayor valor."<<endl;
cout<<"Mientras el jugador obtenga algun puntaje en la tirada, podra seguir realizando lanzamientos."<<endl;
cout<<"Si realiza una tirada que no suma ningun puntaje, a la misma se la considerara tirada fallida.  "<<endl<<endl<<endl;
locate(50,21);
cout<<"Finalizacion de cada ronda"<<endl<<endl<<endl<<endl;
Sleep(300);
cout<<"En el modo de un jugador: cada ronda termina cuando el jugador llega a un puntaje mayor o igual a 21. "<<endl;
cout<<"Al terminar las seis rondas, se le restara al puntaje final un total de dos(1) puntos por cada tirada fallida que el jugador haya realizado."<<endl;
cout<<"En el modo de dos jugadores: cada ronda termina cuando uno de los jugadores obtiene un puntaje mayor o igual a 21 puntos. "<<endl;
cout<<"Si en la primera tanda de tiradas de una ronda el jugador 1 logra este puntaje sin ninguna "<<endl<<endl<<endl;
system("pause");
}
///Nombrar jugadores

char NombrarJugador(char v[],int tam){
      system("cls");
 system("color 40");

     for(int x=22; x<=70; x=x+2)
	{
		gotoxy (x,9);
		putchar ('*');
		gotoxy (x,13);
		putchar ('*');
	}
 	for(int y=9; y<=13; y++)
	{
		gotoxy (22,y);
		putchar ('*');
		gotoxy (70,y);
		putchar ('*');
	}
	locate(24,11);
    cout<<"Ingrese el nombre del jugador 1: ";
    cin.getline(v,tam);
    }


char Nombrar2Jugadores(char Nombre1[], char Nombre2[] ,int tam){
   system("cls");
 system("color 40");

     for(int x=22; x<=70; x=x+2)
	{
		gotoxy (x,9);
		putchar ('*');
		gotoxy (x,15);
		putchar ('*');
	}
 	for(int y=9; y<=15; y++)
	{
		gotoxy (22,y);
		putchar ('*');
		gotoxy (70,y);
		putchar ('*');
	}

	rlutil::locate(25,11);
	cout << "Ingresar nombre primer jugador: ";
cin .getline(Nombre1,tam);
rlutil::locate(25,13);
	cout << "Ingresar nombre segundo jugador: ";
cin.getline(Nombre2,tam);
    }


char Mostrarchars(char v[],int  tam){
    cout<<v<<endl;
}


///funciones sobre los dados

void MostrarDados(int v[],int  tam){
    int i;

    for(i=0;i<tam;i++){
         rlutil::locate (1,i+7);
        cout<<"Dado "<<i+1<<" : "<<v[i]<<endl;
    }

}

int CalcularPuntajeTirada(int v[],int  tam,int ronda){
    int puntos[5]={},MaxPuntaje=0,i,pos;

    puntos[0]=Bunco(v,3,ronda );
    puntos[1]=SonIguales(v,3,ronda);
    if(sumarVector(v,3)%5==0){puntos[2]=3;}
    puntos[3]=Escalera(v,3);
    puntos[4]=CoincideConRonda(v,3,ronda);
    MaxPuntaje=puntos[0];
    pos=maximoVector(puntos,5);
    if(puntos[pos]!=0){
            locate(20,7);
            cout<<"SACASTE: ";
            switch(pos){
                case 0:  cout<<"¡BUNCO!, OBTUVISTE 21 PUNTOS"<<endl;
                break;
                case 1: cout<<"¡¡¡ REPETIDOS DISTINTOS  A LA RONDA!!!, OBTUVISTE 5 PUNTOS"<<endl;
                break;
                case 2: cout<<"¡¡¡SUMA DIVISIBLE POR 5!!!, OBTUVISTE 3 PUNTOS"<<endl;
                break;
                case 3: cout<<"¡¡¡ESCALERA, OBTUVISTE 2 PUNTOS!!!"<<endl;
                break;
                case 4: cout<<"¡¡¡OBTUVISTE " << puntos[pos]<<" POR CADA DADO IGUAL AL NUMERO DE LA RONDA!!!"<<endl;
                break;

            }
         }




    for(i=1;i<5;i++){
        if(puntos[i]>MaxPuntaje){MaxPuntaje=puntos[i];}
    }


    return MaxPuntaje;}

int  SonIguales(int v[], int tam, int ronda){
    int i,j;
    bool iguales= true, distinto=false;
    for(i=1;i<tam;i++){
        if(v[0]!=v[i]){iguales=false;}

    }
    for(j=0;j<tam;j++){
        if(v[j]!=ronda){distinto=true;}
    }
    if(iguales==true&&distinto==true){return 5;}
    else{return 0;}
}

int Escalera(int v[], int tam){
    int numant, c;
    bool asc=true;
    ordenarVector(v,tam);
        numant=v[0];
        c=1;
        for(int i=1; i<tam;i++){
                numant++;
            if (v[i]==numant){
                c++;
            }
        }
if (c==3){
    return 2;
}
else{
    return 0;
}


}

int CoincideConRonda(int v[],int tam ,int  ronda){
    int i,co=0;
    for(i=0;i<tam;i++){
        if(v[i]==ronda){co++;}
    }
    return co;

}

int Bunco(int v[],int tam,int ronda){
    int i;
    bool iguales= true;
    for(i=1;i<tam;i++){
        if(v[0]!=v[i]){iguales=false;}}
        if(iguales==true&&v[0]==ronda){


                return 21;
        }

        else{return 0;}
}

void recuadro(int x, int y, int ancho, int alto){
const char *UI_BOTTOM_RIGHT = "\xD9"; // 217 - ┘
const char *UI_BOTTOM_LEFT = "\xC0"; // 192 - └
const char *UI_TOP_LEFT = "\xDA"; // 218 - ┌
const char *UI_TOP_RIGHT = "\xBF"; // 191 - ┐
const char *UI_CROSS = "\xC5"; // 197 - ┼
const char *UI_HORIZONTAL_LINE = "\xC4"; // 196 - ─
const char *UI_HORIZONTAL_LINE_TOP = "\xC1"; // 193 - ┴
const char *UI_HORIZONTAL_LINE_BOTTOM = "\xC2"; // 194 - ┬";
const char *UI_VERTICAL_LINE = "\xB3"; // 179 - │
const char *UI_VERTICAL_LINE_LEFT = "\xC3"; // 195 - ├
const char *UI_VERTICAL_LINE_RIGHT = "\xB4"; // 180 - ┤
const char *DOT="\x167";
    int i,j;
    ///Borrar antes de reimprimir nuevos dados
    for(i=x;i<=x+ancho;i++){
        for(j=y;j<=y+alto;j++){
            locate(i,j);
            cout<<" ";
        }
    }
   ///linea horizontal
    for(i=x;i<=x+ancho;i++){
        locate(i,y);
        cout<<UI_HORIZONTAL_LINE,
        locate(i,y+alto);
        cout<<UI_HORIZONTAL_LINE;
    }
    ///linea vertical
    for(i=y;i<=y+alto;i++){
        locate(x,i);
        cout<<UI_VERTICAL_LINE,
        locate(x+ancho,i);
        cout<<UI_VERTICAL_LINE;
    }

    ///vertices
    locate(x,y);
    cout<<UI_TOP_LEFT;
    locate(x+ancho,y);
    cout<<UI_TOP_RIGHT ;
    locate(x,y+alto);
    cout<<UI_BOTTOM_LEFT;
    locate(x+ancho,y+alto);
    cout<<UI_BOTTOM_RIGHT ;
 }

void DibujarDados(int nroDado, int valor){
    const int y=11;
    const int alto=4;
    const int ini=25;
    const int x=ini+(nroDado*10);
    const int ancho=8;
    //Ubicaciones del punto
    const int centro_x=x+ancho/2;
    const int centro_y=y+alto/2;


    recuadro(x,y,ancho,alto);

    //Dibujar los puntos,
    const char  *DOT ="\x46";

    switch (valor){
case 1 :
        locate(centro_x,centro_y);
        cout<<"O";
        break;
case 2:
    locate(centro_x-2,centro_y-1);
    cout<<"O";
    locate(centro_x+2,centro_y+1);
    cout<<"O";
    break;
case 3:
    locate(centro_x-2,centro_y-1);
    cout<<"O";
    locate(centro_x,centro_y);
    cout<<"O";
    locate(centro_x+2,centro_y+1);
    cout<<"O";
    break;
case 4 :
    locate (centro_x-2,centro_y-1);
    cout<<"O";
    locate(centro_x-2,centro_y+1);
    cout<<"O";
     locate (centro_x+2,centro_y-1);
    cout<<"O";
     locate (centro_x+2,centro_y+1);
    cout<<"O";
    break;
case 5 :
     locate (centro_x,centro_y);
    cout<<"O";
     locate (centro_x-2,centro_y-1);
    cout<<"O";
     locate (centro_x-2,centro_y+1);
    cout<<"O";
     locate (centro_x+2,centro_y-1);
    cout<<"O";
     locate (centro_x+2,centro_y+1);
    cout<<"O";
    break;
case 6:
     locate (centro_x-2,centro_y-1);
    cout<<"O";
     locate(centro_x-2,centro_y);
    cout<<"O";
     locate (centro_x-2,centro_y+1);
    cout<<"O";
     locate (centro_x+2,centro_y-1);
    cout<<"O";
     locate (centro_x+2,centro_y);
    cout<<"O";
     locate (centro_x+2,centro_y+1);
    cout<<"O";
    break;
    }
}


//Funciones de las partidas

void Partida1Jugador(char  NombreJugador[],int tam, int c){

    bool Bandera = false;
    int dados[3];
    int Puntaje, PuntajeFinal;
    int UnJugador[6]={0};

        int Ronda=6;
        int i,j;
bool RondaTerminada = false;
bool TiradaFallida;
    for(i=0;i<Ronda;i++){
        UnJugador[4]=0;
UnJugador[3]=0;
        RondaTerminada = false;

            while(RondaTerminada == false){
        UnJugador[5]++;
        UnJugador[4]++;
    Cartel(NombreJugador,tam,i,UnJugador,6);

system("color 40");

        cargarAleatorio (dados,3,6);
        MostrarDados(dados,3);
        for(j=0;j<3;j++){
            DibujarDados(j+1,dados[j]);
        }




       	 for(int x=2; x<=31; x++){
		gotoxy (x,17);
		putchar ('*');
		gotoxy (x,19);
		putchar ('*');
	}

    	    for(int y=17; y<=19; y++){
		gotoxy (2,y);
		putchar ('*');
			gotoxy (31,y);
		putchar ('*');

	}
	Puntaje=CalcularPuntajeTirada(dados,3,i+1);
	if(Puntaje==21){
        UnJugador[0]++;
	}

        rlutil::locate(1,6);
       if(Puntaje==0){
            UnJugador[2]++;
            locate(20,7);
            cout << "!TIRADA FALLIDA!"<<endl;



       }
        else{

       UnJugador[3]+=Puntaje;

        }

	rlutil::locate(3,18);
	cout << "PUNTAJE DE LA RONDA: "<< UnJugador[3];
        if (UnJugador[3] >=21){
            RondaTerminada = true;
        }

Cartel(NombreJugador,tam,i,UnJugador,6);
        rlutil::locate (1,30);
       system("pause");
       system("cls");

       }
       UnJugador[1]+=UnJugador[3];
       system("cls");




EntreRondasUnJug (NombreJugador, UnJugador, tam, i);



}

PuntajeFinal=UnJugador[1]-(UnJugador[2]*3);
PuntajeMayor(NombreJugador, 50,UnJugador,6, Bandera);
FinDePartida (NombreJugador, UnJugador,6, PuntajeFinal);
}


void Partida1JugadorManual(char  NombreJugador[],int tam){
    system ("color 40");
    int dados[3];
    int Puntaje, PuntajeFinal;

        int Ronda=6;
        int UnJugador[6]={0};
        int i,j;
bool RondaTerminada = false;
bool TiradaFallida;
    for(i=0;i<Ronda;i++){
            system ("color 40");
        UnJugador[4]=0;

        RondaTerminada = false;
UnJugador[3]=0;
            while(RondaTerminada == false){
        UnJugador[4]++;
        UnJugador[5]++;
 Cartel(NombreJugador,tam,i,UnJugador,5);

        cargarVector(dados,3);
        for(j=0;j<3;j++){
            DibujarDados(j+1,dados[j]);
        }
Puntaje=CalcularPuntajeTirada(dados,3,i+1);

if(Puntaje==21){
    UnJugador[2]+=1;
}


       if(Puntaje==0){
            UnJugador[0]++;

            locate(20,12);
            cout << "!TIRADA FALLIDA!"<<endl;
       }
        else{
TiradaFallida=false;
       UnJugador[3]+=Puntaje;

        }

               	 for(int x=2; x<=31; x++){
		gotoxy (x,17);
		putchar ('*');
		gotoxy (x,19);
		putchar ('*');
	}

    	    for(int y=17; y<=19; y++){
		gotoxy (2,y);
		putchar ('*');
			gotoxy (31,y);
		putchar ('*');

	}

        	rlutil::locate(3,18);
	cout << "PUNTAJE DE LA RONDA: "<< UnJugador[3];

        if (UnJugador[3] >=21/*||TiradaFallida==true*/){
            RondaTerminada = true;
        }

UnJugador[1]+=UnJugador[3];
Cartel(NombreJugador,tam,i,UnJugador,5);
        rlutil::locate(1,30);
       system("pause");
       system("cls");


       }
system("cls");


                ///CAMBIAR ESTO POR UNA FUNCION

EntreRondasUnJug (NombreJugador, UnJugador,6, i);



       }

       PuntajeFinal=UnJugador[1]-(UnJugador[0]*3);



FinDePartida (NombreJugador, UnJugador,6, PuntajeFinal);








       }


void DosJugadores(int Rondas, int tam, char v[],int tam1, int v1[], int tam2, int c){
bool Bandera = false;

bool Jugador_Activo_2 = false;

char Nombre_Segundo_Jugador[50];
char Nombre_Primer_Jugador[50];
int Num[3], TerminarRonda, Puntaje,contador=0,i,j;
int PrimerJugador[5]={0};
int SegundoJugador[5]={0};
   PrimerJugador[0]=0;
   SegundoJugador[0]=0;
    PrimerJugador[1]=0;
    SegundoJugador[1]=0;
    PrimerJugador[2]=0;
    SegundoJugador[2]=0;



    Rondas=0;
cin.ignore();
Nombrar2Jugadores(Nombre_Primer_Jugador,Nombre_Segundo_Jugador,50);
cls();
while (Rondas!=6){
       SegundoJugador[3]=0;
       SegundoJugador[4]=0;

        Rondas=Rondas+1;

            PrimerJugador[3]=0;
            PrimerJugador[4]=0;

            TerminarRonda=false;

    while (TerminarRonda!=true){
Cartel2jug(Nombre_Primer_Jugador,PrimerJugador,5,50,Rondas);
        locate(1,6);
 //Generador();


cargarAleatorio (Num,3,6);
MostrarDados(Num,3);
for(j=0;j<3;j++){
            DibujarDados(j+1,Num[j]);
        }


	rlutil::locate(2,25);

	Puntaje=CalcularPuntajeTirada(Num,3,Rondas);
        rlutil::locate(1,6);

if (Puntaje==21){
    PrimerJugador[2]+=1;

}
       if(Puntaje==0){
            PrimerJugador[0]+=1;
            locate(16,12);
            cout << "!TIRADA FALLIDA!"<<endl;



       }
        else{

       PrimerJugador[3]+=Puntaje;

        }
                if (PrimerJugador[3]>=21||Puntaje==0){
                 TerminarRonda = true;

        }
#include <windows.h>
 for(int x=2; x<=31; x++){
		gotoxy (x,17);
		putchar ('*');
		gotoxy (x,19);
		putchar ('*');
	}

    	    for(int y=17; y<=19; y++){
		gotoxy (2,y);
		putchar ('*');
			gotoxy (31,y);
		putchar ('*');

	}

locate(3,18);
cout << "PUNTAJE DE LA RONDA: "<< PrimerJugador[3];
locate(1,3);
 cout << "VECES QUE OBTUVO BUNCO: "<< PrimerJugador[2];

rlutil::setBackgroundColor(rlutil::RED);
 locate(1,30);
    system("pause");
   rlutil::setBackgroundColor(rlutil::RED);
 cls();
}





//Fin contando puntos
	PrimerJugador[1]+=PrimerJugador[3];
rlutil::setBackgroundColor(rlutil::RED);


    ///Entre Rondas

    Jugador_Activo_2 = false;

    EntreRondas(Nombre_Primer_Jugador, PrimerJugador, Nombre_Segundo_Jugador, SegundoJugador, Rondas, Jugador_Activo_2);





   //TURNO SEGUNDO JUGADOR
   TerminarRonda=false;

    while (TerminarRonda!=true){

Cartel2jug(Nombre_Segundo_Jugador,SegundoJugador,5,50,Rondas);

        locate(1,6);
 //Generador();



cargarAleatorio (Num,3,6);
MostrarDados(Num,3);
for(j=0;j<3;j++){
            DibujarDados(j+1,Num[j]);
        }



///Contando puntos
///21 PUNTOS


	rlutil::locate(2,25);
Puntaje=CalcularPuntajeTirada(Num,3,Rondas);
        if (Puntaje==21){
                SegundoJugador[2]+=1;

        }
       if(Puntaje==0){
            SegundoJugador[0]+=1;
                locate(16,12);
            cout << "!TIRADA FALLIDA!"<<endl;
            TerminarRonda = true;
       }
        else{

       SegundoJugador[3]+=Puntaje;
        }


                        if (SegundoJugador[3]>=21||Puntaje==0){
                 TerminarRonda = true;

        }
 for(int x=2; x<=31; x++){
		gotoxy (x,17);
		putchar ('*');
		gotoxy (x,19);
		putchar ('*');
	}

    	    for(int y=17; y<=19; y++){
		gotoxy (2,y);
		putchar ('*');
			gotoxy (31,y);
		putchar ('*');

	}

locate(3,18);
cout << "PUNTAJE DE LA RONDA: "<< SegundoJugador[3];
	locate(1,3);
 cout << "VECES QUE OBTUVO BUNCO: "<< SegundoJugador[2];
        rlutil::locate (1,30);


rlutil::setBackgroundColor(rlutil::RED);
 locate(1,30);
    system("pause");
   rlutil::setBackgroundColor(rlutil::RED);
 cls();
}
//Fin contando puntos



SegundoJugador[1]+=SegundoJugador[3];
rlutil::setBackgroundColor(rlutil::RED);

    //Entre Rondas


    Jugador_Activo_2 = true;

EntreRondas(Nombre_Primer_Jugador, PrimerJugador, Nombre_Segundo_Jugador, SegundoJugador, Rondas, Jugador_Activo_2);
locate(1,30);


} ///fin turnos
contador++;
CalculoDeGanador(PrimerJugador, SegundoJugador, Nombre_Primer_Jugador, Nombre_Segundo_Jugador,v,50,v1,50,contador,Bandera);


}///FIN FUNCION

void Instruciones();

void Cartel(char v[], int tam, int ronda , int UnJugador[], int tam1){

rlutil::locate(1,1);
    cout<<"TURNO DE: "<<v<<" | | "<<" RONDA N : "<<ronda+1<<" | | "<<" PUNTAJE ACUMULADO : "<<UnJugador[1]<<endl;
        for(int x=1; x<=75; x++){
		gotoxy (x,2);
		putchar ('-');

	}
	for(int x=1; x<=75; x++){
		gotoxy (x,4);
		putchar ('-');

	}
		for(int x=1; x<=75; x++){
		gotoxy (x,6);
		putchar ('-');

	}
	rlutil::locate(1,3);
	cout << "VECES QUE OBTUVO BUNCO: "<< UnJugador[0];
	rlutil::locate(1,5);
	cout << "LANZAMIENTO Nº "<< UnJugador[4];
    }


void Cartel2jug(char Nombre[], int v[], int tam, int tamnombre, int ronda){
system("cls");


setBackgroundColor(rlutil::RED);

            rlutil::locate(1,1);
cout <<  "TURNO DE "<< Nombre<< "  |  "<< "Ronda Nº "<< ronda<< "  |  "<< "PUNTAJE ACUMULADO:  "<< v[1]<< " PUNTOS";
    for(int x=1; x<=75; x++){
		gotoxy (x,2);
		putchar ('-');

	}


		rlutil::locate(1,3);
    cout << "VECES QUE OBTUVO BUNCO: "<< v[2];
    	    for(int x=1; x<=75; x++){
		gotoxy (x,4);
		putchar ('-');

	}
v[4]=v[4]+1;
rlutil::locate(1,5);
system("color 40");
	cout << "LANZAMIENTO Nº "<< v[4];
;
    }


void CalculoDeGanador (int PrimerJugador[], int SegundoJugador[], char Nombre_Primer_Jugador[], char Nombre_Segundo_Jugador[], char v[],int tam, int v1[], int tam1, int v3, bool Bandera){

if (PrimerJugador[1]>SegundoJugador[1]){
        for(int x=20;x<=60;x=x+2){
        		gotoxy (x,10);
		putchar ('*');
			gotoxy (x,19);
		putchar ('*');

    }
      for(int x=22;x<=58;x=x+2){
        gotoxy (x,12);
		putchar ('-');
        gotoxy (x,17);
		putchar ('-');

    }

    	    for(int y=10; y<=19; y++){
		gotoxy (20,y);
		putchar ('*');
			gotoxy (60,y);
		putchar ('*');

	}
	rlutil::locate(25,13);
	cout<<"NOMBRE DEL JUGADOR GANADOR: "<< Nombre_Primer_Jugador;
    rlutil::locate(25,14);
	cout << " PUNTAJE TOTAL : " << PrimerJugador[1] << " PUNTOS";
	rlutil::locate(25,15);
	cout << "BUCOS : " << PrimerJugador[2]<<endl;
	PuntajeMayor(Nombre_Primer_Jugador,50,PrimerJugador,5, Bandera);

}
else{
    if(SegundoJugador[1]>PrimerJugador[1]){
                for(int x=20;x<=60;x=x+2){
        		gotoxy (x,10);
		putchar ('*');
			gotoxy (x,19);
		putchar ('*');

    }
      for(int x=22;x<=58;x=x+2){
        gotoxy (x,12);
		putchar ('-');
        gotoxy (x,17);
		putchar ('-');

    }

    	    for(int y=10; y<=19; y++){
		gotoxy (20,y);
		putchar ('*');
			gotoxy (60,y);
		putchar ('*');

	}
	rlutil::locate(25,13);
	cout<<"NOMBRE DEL JUGADOR GANADOR: "<< Nombre_Segundo_Jugador;
    rlutil::locate(25,14);
	cout << " PUNTAJE TOTAL : " << SegundoJugador[1] << " PUNTOS";
	rlutil::locate(25,15);
	cout << "BUCOS : " << SegundoJugador[2]<<endl;
	PuntajeMayor(Nombre_Segundo_Jugador,50,SegundoJugador,5,Bandera);
    }
    else{
        if(PrimerJugador[2]>SegundoJugador[2]){
                    for(int x=20;x<=60;x=x+2){
        		gotoxy (x,10);
		putchar ('*');
			gotoxy (x,19);
		putchar ('*');

    }
      for(int x=22;x<=58;x=x+2){
        gotoxy (x,12);
		putchar ('-');
        gotoxy (x,17);
		putchar ('-');

    }

    	    for(int y=10; y<=19; y++){
		gotoxy (20,y);
		putchar ('*');
			gotoxy (60,y);
		putchar ('*');

	}
	rlutil::locate(25,13);
	cout<<"NOMBRE DEL JUGADOR GANADOR: "<< Nombre_Primer_Jugador;
    rlutil::locate(25,14);
	cout << " PUNTAJE TOTAL : " << PrimerJugador[1] << " PUNTOS";
	rlutil::locate(25,15);
	cout << "BUCOS : " << PrimerJugador[2]<<endl;
PuntajeMayor(Nombre_Primer_Jugador,50,PrimerJugador,5, Bandera);
        }
        else{
            if(PrimerJugador[2]<SegundoJugador[2]){
                        for(int x=20;x<=60;x=x+2){
        		gotoxy (x,10);
		putchar ('*');
			gotoxy (x,19);
		putchar ('*');

    }
      for(int x=22;x<=58;x=x+2){
        gotoxy (x,12);
		putchar ('-');
        gotoxy (x,17);
		putchar ('-');

    }

    	    for(int y=10; y<=19; y++){
		gotoxy (20,y);
		putchar ('*');
			gotoxy (60,y);
		putchar ('*');

	}
	rlutil::locate(25,13);
	cout<<"NOMBRE DEL JUGADOR GANADOR: "<< Nombre_Segundo_Jugador;
    rlutil::locate(25,14);
	cout << " PUNTAJE TOTAL : " << SegundoJugador[1] << " PUNTOS";
	rlutil::locate(25,15);
	cout << "BUCOS : " << SegundoJugador[2]<<endl;
	PuntajeMayor(Nombre_Segundo_Jugador,50,SegundoJugador,5,Bandera);
            }
            else{
                        for(int x=20;x<=60;x=x+2){
        		gotoxy (x,10);
		putchar ('*');
			gotoxy (x,21);
		putchar ('*');

    }
      for(int x=22;x<=58;x=x+2){
        gotoxy (x,12);
		putchar ('-');
        gotoxy (x,16);
		putchar ('-');

    }

    	    for(int y=10; y<=21; y++){
		gotoxy (20,y);
		putchar ('*');
			gotoxy (60,y);
		putchar ('*');

	}
	rlutil::locate(25,11);
	cout<<"EMPATE";
	rlutil::locate(25,13);
	cout<<"NOMBRE DEL JUGADOR GANADOR: "<< Nombre_Primer_Jugador;
    rlutil::locate(25,14);
	cout << " PUNTAJE TOTAL : " << PrimerJugador[1] << " PUNTOS";
	rlutil::locate(25,15);
	cout << "BUCOS : " << PrimerJugador[2];
	PuntajeMayor(Nombre_Primer_Jugador,50,PrimerJugador,5, Bandera);
    rlutil::locate(25,17);
	cout<<"NOMBRE DEL JUGADOR GANADOR: "<< Nombre_Segundo_Jugador;
    rlutil::locate(25,18);
	cout << " PUNTAJE TOTAL : " << SegundoJugador[1] << " PUNTOS";
	rlutil::locate(25,19);
	cout << "BUCOS : " << SegundoJugador[2]<<endl;
	PuntajeMayor(Nombre_Segundo_Jugador,50,SegundoJugador,5,Bandera);
            }
        }
    }

} ///



}


void EntreRondasUnJug (char NombreJugador[], int UnJugador[], int tam, int i){

    rlutil::cls();

	if (i<6){
        rlutil::locate(25,12);
        for(int x=40;x<=74;x=x+2){
        		gotoxy (x,9);
		putchar ('*');
			gotoxy (x,21);
		putchar ('*');

    }
      for(int x=42;x<=72;x=x+2){
        gotoxy (x,13);
		putchar ('-');
        gotoxy (x,19);
		putchar ('-');

    }

    	    for(int y=9; y<=20; y++){
		gotoxy (40,y);
		putchar ('*');
			gotoxy (74,y);
		putchar ('*');

	}
	rlutil::locate(50,11);
	cout << "RONDA Nº "<< i+1;

	rlutil::locate(44,14);
	cout << " PUNTAJE DE "<< NombreJugador << " : " << UnJugador[1] << " PUNTOS";
	rlutil::locate(44,15);
	cout << " BUCOS : " << UnJugador[0];
	rlutil::locate(44,16);
	cout << " Tiradas Fallidas: "<< UnJugador[2];
	rlutil::locate(44,17);
	cout << " Lanzamientos : " << UnJugador[5];
	rlutil::locate(30,30);
    system("pause");
    system("cls");

rlutil::cls();

}



}


void FinDePartida (char NombreJugador[], int UnJugador[], int tam, int PuntajeFinal){

               rlutil::locate(25,12);
               for(int x=40;x<=80;x=x+2){
        		gotoxy (x,9);
		putchar ('*');
			gotoxy (x,21);
		putchar ('*');

    }
      for(int x=42;x<=78;x=x+2){
        gotoxy (x,13);
		putchar ('-');
        gotoxy (x,19);
		putchar ('-');

    }

    	    for(int y=9; y<=20; y++){
		gotoxy (40,y);
		putchar ('*');
			gotoxy (80,y);
		putchar ('*');

	}

	rlutil::locate(44,11);

	cout<< "Jugador: "<<NombreJugador;

	rlutil::locate(44,14);
	cout << "Buncos realizados: "<< UnJugador[0];
	rlutil::locate(44,15);
	cout << "Cantidad de tiradas fallidas : " << UnJugador[2];
	rlutil::locate(44,16);
	cout << "Cant. de lanzamientos: "<< UnJugador[5];
	rlutil::locate(44,17);
	cout << "Puntaje Total : " << PuntajeFinal;
	rlutil::locate(1,30);
    system("pause");
    system("cls");

rlutil::cls();
}


void EntreRondas (char Nombre_Primer_Jugador[], int PrimerJugador[], char Nombre_Segundo_Jugador[], int SegundoJugador[], int Rondas, bool Jugador_Activo_2){

    rlutil::cls();

	if (Rondas<6){
       rlutil::locate(25,12);
       for(int x=20;x<=60;x=x+2){
        		gotoxy (x,9);
		putchar ('*');
			gotoxy (x,20);
		putchar ('*');

    }
      for(int x=22;x<=58;x=x+2){
        gotoxy (x,13);
		putchar ('-');
        gotoxy (x,16);
		putchar ('-');

    }

    	    for(int y=9; y<=20; y++){
		gotoxy (20,y);
		putchar ('*');
			gotoxy (60,y);
		putchar ('*');

	}
rlutil::locate(25,11);
	cout << "RONDA Nº "<< Rondas;
rlutil::locate(25,12);
	if (Jugador_Activo_2 == false){
	cout<< "PROXIMO TURNO: "<< Nombre_Segundo_Jugador;
	}
	else{
        cout<< "PROXIMO TURNO: "<< Nombre_Primer_Jugador;
	}
	rlutil::locate(25,14);
	cout << " PUNTAJE DE "<< Nombre_Primer_Jugador << " : " << PrimerJugador[1] << " PUNTOS";
rlutil::locate(25,15);
	cout << "BUCOS : " << PrimerJugador[2];
	rlutil::locate(25,17);
	cout << "PUNTAJE DE "<< Nombre_Segundo_Jugador << " : "<<SegundoJugador[1]<< " PUNTOS";
	rlutil::locate(25,18);
	cout << "BUNCOS : " << SegundoJugador[2];
	rlutil::locate(30,30);
    system("pause");
    system("cls");

rlutil::cls();

}



}

void PuntajeMayor(char NombreDelGanador[], int Tam,int VectorDelGanador[], int Tam1, bool Bandera){

/// Dato[0] = Puntaje(1)
/// Dato[1] = Bunco(2)

    int Dato[2];
    int c=0;
    char Nombre[50];
    if (Bandera==true){
                 for(int x=40;x<=72;x=x+2){
        		gotoxy (x,9);
		putchar ('*');
			gotoxy (x,15);
		putchar ('*');

    }
      for(int y=9;y<=15;y++){
        gotoxy (40,y);
		putchar ('*');
        gotoxy (72,y);
		putchar ('*');

    }
    locate(42,11);
        cout << "Nombre:"<< Nombre;
        locate(42,12);
        cout << "Puntaje:"<< Dato[0];
        locate(42,13);
        cout << "Buncos:"<< Dato[1];
    }
    else{
           if(c == 0){
                Dato[0]=0;
                Dato[1]=0;
            Dato[0]=VectorDelGanador[1];
            Dato[1]=VectorDelGanador[2];
            Nombre[50]=NombreDelGanador[Tam];
           }
           else{
                if(Dato[0]<VectorDelGanador[1]){
            Dato[0]=VectorDelGanador[1];
            Dato[1]=VectorDelGanador[2];
            Nombre[50]=NombreDelGanador[Tam];
                }
            else{
            if (Dato[0]==VectorDelGanador[1] && Dato[1]<VectorDelGanador[2]){

            Dato[0]=VectorDelGanador[1];
            Dato[1]=VectorDelGanador[2];
            Nombre[50]=NombreDelGanador[Tam];

           }
           }
           }
    }
    c++;
    locate(1,30);
    system("pause");

}

void Findelprograma(){
    locate (50,11);
        cout<<"Desarollado por: "<<endl;
        Sleep(800);
        locate (50,12);
        cout<<"Lucia Cavana."<<endl;
        Sleep(800);
        locate (50,13);
        cout<<"Sebastian Re."<<endl;
        Sleep(800);
        locate (50,14);
        cout<<"Amador Gonzalez."<<endl;
        Sleep(800);
        locate (50,15);
        system("cls");
        locate(50,11);
        cout<<"Fin del programa"<<endl;

        }









