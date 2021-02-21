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
#define ENTER 13
#define ARRIBA 72
#define ABAJO 80

///FUNCIONES GENERALES CON VECTORES

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


///ESTRUCTURA DE BUNCO

void Presentacion(){
    ///recuadro(40,1,40,27); ESTOS SON LOS PARAMETROS INICIALES QUE DESPUES ALTERA EL CICLO FOR PARA HACER VARIOS RECUADROS.
    int i,j=40,q=27,k;
    for(k=0;k<2;k++){
        j=40;q=27;
    for(i=1;i<=13;i++){
        recuadro(i+39,i,j,q);
        j=j-2;
        q=q-2;}
        Sleep(50);
        system("cls");}
        j=40;q=27;
    for(i=1;i<=13;i++){
        recuadro(i+39,i,j,q);
        j=j-2;
        q=q-2;}
    locate(56,14);
	cout<<"B U N C O"<<endl;
	locate(56,15);
	Sleep(600);
	cout<<"El  Juego";
	locate(1,30);
	Sleep(1500);}

int Menu(){
    int x=49,y=12;

   system("cls");
   recuadro(40,9,40,11);
   locate(58,10);
   cout <<"Menu"<<endl;
   locate(47,11);
   cout <<"---------------------------"<<endl;
   locate(50,12);   cout<<"1 - UN JUGADOR."<<endl;
   locate(50,13);   cout<<"2 - DOS JUGADORES."<<endl;
   locate(50,14);   cout<<"3 - SIMULACION."<<endl;
   locate(50,15);   cout<<"4 - MAXIMO PUNTAJE."<<endl;
   locate(50,16);   cout<<"5 - INSTRUCCIONES."<<endl;
   locate(50,17);   cout<<"0 - SALIR."<<endl;
   locate(47,18);
   cout <<"---------------------------"<<endl;
   locate(x,y);printf("*");/// de aca se puede usar las flechas del teclado
   bool elegir=false;
   while(!elegir){
    if(_kbhit()){
        locate(x,y);printf(" ");
       char tecla = _getch();
        if (tecla==ENTER){elegir= true; return y;} ///DEVUELVE EL VALOR DE LA COORD Y PARA QUE SE PUEDA SABER QUE OPCION ELIGIO, PARA UTILIZAR EN EL VOID OPCIONES
        if (tecla==ARRIBA&& y >12) locate (x,y--);
        if(tecla==ABAJO && y < 17) locate(x,y++);  ///ESTABLECE LOS LIMITES DE LA COORD Y HACIA ARRIBA Y HACIA ABAJO PARA QUE NO SE SALGA DEL RECUADRO
        locate(x,y);printf("*");}
   }
}

void Opciones(int v,int Mganador[],int tam,char Jmaximo[],char Janterior[]){

    switch(v){

    case 12:///partida un jugador
            {Partida1Jugador(Mganador,2,Jmaximo);}
             break;

    case 13:///partida dos jugadores

            {DosJugadores(Mganador,2,Jmaximo);}
             break;

    case 14:/// partida manual

            {Partida1JugadorManual();}
             break;

    case 15:///puntaje maximo
         {
             if(Mganador[0]==0){
                locate(30,11);
                cout<<"Debe completar al menos una partida en modo 1 jugador";
                locate(30,12);
                cout<<"Para que exista un registro de puntuacion mas alta.";}
                else{
                    MaximoJugadorGlobal(Mganador,2,Jmaximo,Janterior);
                }

             }
             locate(30,20);
             system("pause");
        break;

    case 16:///instrucciones
            instrucciones();
            system("pasue");
        break;

   case  17:///cierre
            {Findelprograma();}
        break;}
}

void instrucciones(){
locate(50,21);
Sleep(300);
                    cout<<"Reglamento del juego."<<endl<<endl<<endl<<endl;
Sleep(300);
    cout<<"Bunco es un juego que utiliza 3 dados, y que puede ser jugado por uno o varios jugadores."<<endl;
    cout<<"El juego consiste en seis rondas, las cuales progresan secuencialmente del uno al seis."<<endl;
    cout<<"Cada ronda comienza con un lanzamiento de tres dados y un posterior analisis del puntaje al que equivale la tirada. "<<endl;
    cout<<"El jugador obtendra:"<<endl<<endl<<endl;
Sleep(300);
    cout<<"21 puntos si los tres dados coinciden con el numero de la ronda que se esta jugando (Bunco)."<<endl;
    cout<<"5 puntos si los tres dados son iguales pero no coinciden con la ronda en curso."<<endl;
    cout<<"3 puntos si la suma de los tres dados es divisible por 5."<<endl;
    cout<<"2 puntos si los tres dados forman una escalera."<<endl;
    cout<<"1 punto por cada dado que coincida con el numero de la ronda."<<endl<<endl<<endl;
    cout<<"Nota: De obtener mas de una combinacion en el mismo lanzamiento, siempre debera sumar unicamente el puntaje de mayor valor."<<endl;
    cout<<"Mientras el jugador obtenga algun puntaje en la tirada, podra seguir realizando lanzamientos."<<endl;
    cout<<"Si realiza una tirada que no suma ningun puntaje, a la misma se la considerara tirada fallida.  "<<endl<<endl<<endl;

system("pause");
system("cls");

locate(50,21);
                    cout<<"Finalizacion de cada ronda"<<endl<<endl<<endl<<endl;
Sleep(300);
    cout<<"En el modo de un jugador: cada ronda termina cuando el jugador llega a un puntaje mayor o igual a 21. "<<endl;
    cout<<"Al terminar las seis rondas, se le restara al puntaje final un total de dos(2) puntos por cada tirada fallida que el jugador haya realizado."<<endl;
    cout<<"En el modo de dos jugadores: cada ronda termina cuando uno de los jugadores obtiene un puntaje mayor o igual a 21 puntos. "<<endl;
    cout<<"Si en la primera tanda de tiradas de una ronda el jugador 1 logra este puntaje sin ninguna tirada fallida, el segundo jugador puede realizar lanzamientos hasta cumplir con la condicion de finalizacion de ronda o realizar una tirada fallida."<<endl<<endl<<endl;

system("pause");
system("cls");
locate(50,17);
                    cout << "FIN DEL JUEGO";
locate(1,20);
Sleep(300);
    cout << "El juego termina al concluir las seis rondas. El ganador de la partida es aquel jugador que obtenga el puntaje mas alto.";
    locate(1,21);
    cout <<"En caso de paridad, gana el que tenga mayor cantidad de Buncos.";
    locate(1,24);
    Sleep(300);
    cout <<"Se dara un empate solamente si ambos jugadores obtienen el mismo puntaje y la misma cantidad de Buncos al finalizar las rondas.";
locate(1,26);
system("pause");
system("cls");

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



///NOMBRAR JUGADORES

char NombrarJugador(char v[],int tam){
    system("cls");
    system("color 70");
    recuadro(35,14,60,2);
    locate(40,15);
    cout<<"Ingrese el nombre del jugador 1: ";
    cin.getline(v,tam);
    }


char Nombrar2Jugadores(char Nombre1[], char Nombre2[] ,int tam){
    system("cls");
    system("color 70");
    recuadro(35,10,50,7);
    rlutil::locate(40,12);
	cout << "Ingresar nombre primer jugador: ";
    cin.getline(Nombre1,tam);
    rlutil::locate(40,15);
	cout << "Ingresar nombre segundo jugador: ";
    cin.getline(Nombre2,tam);
    }


char Mostrarchars(char v[],int  tam){
    cout<<v<<endl;
}


///INTERFAZ DE DADOS

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

void AnimacionDados(int v[],int tam){
    int k,j;
    locate(47,9);
    for (k=0;k<7;k++){
        cargarAleatorio (v,3,6);
        for(j=0;j<3;j++){
            DibujarDados(j+1,v[j]);
            Sleep(175);
        }
        }

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

void MostrarDados(int v[],int  tam){
    int i;

    for(i=0;i<tam;i++){
         rlutil::locate (1,i+7);
        cout<<"Dado "<<i+1<<" : "<<v[i]<<endl;
    }

}

void LanzamientoDeDados(int v[],int tam){
        int j;
       //AnimacionDados(v,tam);
        cargarAleatorio (v,tam,6);
        MostrarDados(v,tam);
        for(j=0;j<tam;j++){
            DibujarDados(j+1,v[j]);}
}

///PUNTAJES
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
                case 0:  cout<<"BUNCO, OBTUVISTE 21 PUNTOS"<<endl;
                break;
                case 1: cout<<"REPETIDOS DISTINTOS  A LA RONDA, OBTUVISTE 5 PUNTOS"<<endl;
                break;
                case 2: cout<<"SUMA DIVISIBLE POR 5, OBTUVISTE 3 PUNTOS"<<endl;
                break;
                case 3: cout<<"ESCALERA, OBTUVISTE 2 PUNTOS"<<endl;
                break;
                case 4: cout<<"OBTUVISTE 1 PUNTO POR CADA DADO IGUAL AL NUMERO DE LA RONDA"<<endl;
                break; }
         }
         for(i=1;i<5;i++){
                if(puntos[i]>MaxPuntaje){MaxPuntaje=puntos[i];}
    }
    return MaxPuntaje;}

int SonIguales(int v[], int tam, int ronda){
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



///FUNCIONES DE PARTIDAS

///FUNCIONES 1 JUGADOR

void Partida1Jugador(int Mganador[],int tam, char Jmaximo[]){/// REVISION OK FUNCIONA
///----------------------------------------///
   /*funcion de posiciones dentro del vector UnJugador
      0= Bunco
      1= Puntos total
      2= lanzamientos fallidos
      3= Puntaje de partida
      4= Lanzamientos
      Solo en un jugador esta este
      5= Lanzamientos totales*/
///----------------------------------------///
    //VARIABLES
    int dados[3],UnJugador[6]={},Puntaje, PuntajeFinal;
    int i,j,k;
    char NombreJugador1[50];
    bool RondaTerminada = false;

    //COMIENZO DE RONDAS(6)
    NombrarJugador(NombreJugador1,50);
    system("cls");
    for(i=0;i<6;i++){
        RondaTerminada=false;
        UnJugador[4]=0;//lanzamientos se reinicia en cada vuelta(ronda) del for.
        UnJugador[3]=0;//puntaje de partida se reinicia en cada vuelta(ronda) del for.

    while(RondaTerminada == false){
        UnJugador[4]++;//lanzamientos ++
        UnJugador[5]++;//lanzamientos totales ++ (no se reinicia)
        Cartel(NombreJugador1,50,i,UnJugador,6);
        cout<<endl;
        system("color 70");
        //LANZAMIENTO DE DADOS
        LanzamientoDeDados(dados,3);

        for(int x=2; x<=31; x++){//rodea "puntaje de ronda"
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

	    if(Puntaje==21){UnJugador[0]++;}//si es igual a 21 suma uno en buncos
        rlutil::locate(1,6);
        if(Puntaje==0){//si es igual a cero suma uno en fallidas
            UnJugador[2]++;
            locate(20,7);
            cout << "!TIRADA FALLIDA!"<<endl;}
        else{UnJugador[3]+=Puntaje;}//sino es igual a 21 ni a 0 acumula el puntaje del lanzamiento

	    rlutil::locate(3,18);
	    cout << "PUNTAJE DE LA RONDA: "<< UnJugador[3];
        if (UnJugador[3]>=21){RondaTerminada = true;}//cuando llega a 21 cambia la bandera y la ronda termina

        Cartel(NombreJugador1,50,i,UnJugador,6);
        rlutil::locate (1,25);
        cout<<"Para lanzar otra vez"<<endl;
        system("pause");
        system("cls");
        }///FIN DEL WHILE
       UnJugador[1]+=UnJugador[3];//acumula en [1] el puntaje de la ronda (no se reinicia)
       system("cls");
       EntreRondasUnJug (NombreJugador1, UnJugador,6, i);
       }///FIN DEL FOR

       PuntajeFinal=UnJugador[1]-(UnJugador[2]*3);//calcula el puntaje menos las fallidas
       FinDePartida1Jugador (NombreJugador1, UnJugador,6, PuntajeFinal, Mganador, 2, Jmaximo);//muestra los resultados de la partida

}///FIN DE LA FUNCION

void Partida1JugadorManual(){///REVISION OK FUNCIONA
    system ("color 70");
    int dados[3],UnJugador[6]={};
    int Puntaje,PuntajeFinal;
    char JugadorManual[50];
    int i,j;
    bool RondaTerminada = false;
    NombrarJugador(JugadorManual,50);
    system("cls");
    for(i=0;i<6;i++){
            RondaTerminada = false;
            UnJugador[3]=0;
            UnJugador[4]=0;
    while(RondaTerminada == false){
            UnJugador[4]++;
            UnJugador[5]++;
            Cartel(JugadorManual,50,i,UnJugador,5);
            cargarVector(dados,3);
    for(j=0;j<3;j++){DibujarDados(j+1,dados[j]);}
            Puntaje=CalcularPuntajeTirada(dados,3,i+1);
    if(Puntaje==21){UnJugador[0]+=1;}
    if(Puntaje==0){
            UnJugador[2]++;
            locate(20,12);
            cout << "!TIRADA FALLIDA!"<<endl;}
    else{UnJugador[3]+=Puntaje;}

    for(int x=2; x<=31; x++){
		gotoxy (x,17);
		putchar ('*');
		gotoxy (x,19);
		putchar ('*');}

    for(int y=17; y<=19; y++){
		gotoxy (2,y);
		putchar ('*');
			gotoxy (31,y);
		putchar ('*');}

        	rlutil::locate(3,18);
        cout << "PUNTAJE DE LA RONDA: "<< UnJugador[3];

        if (UnJugador[3] >=21){RondaTerminada = true;}
            UnJugador[1]+=UnJugador[3];
            Cartel(JugadorManual,50,i,UnJugador,5);
            rlutil::locate(1,30);
            system("pause");
            system("cls");}///FIN DEL WHILE
            system("cls");
            EntreRondasUnJug (JugadorManual, UnJugador,6, i);}///FIN DE LA RONDA
            PuntajeFinal=UnJugador[1]-(UnJugador[2]*3);
            FinDePartidaManual(JugadorManual, UnJugador,6, PuntajeFinal);}///FIN DE LA FUNCION

void Cartel(char v[], int tam, int ronda , int UnJugador[], int tam1){

    rlutil::locate(1,1);
    cout<<"TURNO DE: "<<v<<" | | "<<" RONDA N : "<<ronda+1<<" | | "<<" PUNTAJE ACUMULADO : "<<UnJugador[1]<<endl;
        for(int x=1; x<=75; x++){
		gotoxy (x,2);
		putchar ('-');}
	for(int x=1; x<=75; x++){
		gotoxy (x,4);
		putchar ('-');}
		for(int x=1; x<=75; x++){
		gotoxy (x,6);
		putchar ('-');}
        rlutil::locate(1,3);
	    cout << "VECES QUE OBTUVO BUNCO: "<< UnJugador[0];
	    rlutil::locate(1,5);
	    cout << "LANZAMIENTO N : "<< UnJugador[4];}

void EntreRondasUnJug (char NombreJugador[], int UnJugador[], int tam, int i){
    rlutil::cls();
    recuadro(34,3,33,5);
    recuadro(35,4,31,3);
    rlutil::locate(43,5);
    cout<<NombreJugador;
    recuadro(40,9,20,12);
	rlutil::locate(43,11);
	cout << "NUMERO DE RONDA"<<endl;
	rlutil::locate(50,12);
	cout<<i+1;
	rlutil::locate(48,13);
	cout << "PUNTOS";
	rlutil::locate(50,14);
	cout<<UnJugador[1];
	rlutil::locate(48,15);
	cout << "BUNCOS";
	rlutil::locate(50,16);
	cout<<UnJugador[0];
	rlutil::locate(42,17);
	cout << "TIRADAS  FALLIDAS";
	rlutil::locate(50,18);
	cout<< UnJugador[2];
	rlutil::locate(45,19);
	cout << "LANZAMIENTOS";
	rlutil::locate(50,20);
	cout<<UnJugador[5];
	rlutil::locate(30,30);
    system("pause");
    system("cls");
rlutil::cls();
}

void FinDePartida1Jugador (char NombreJugador[], int UnJugador[], int tam, int PuntajeFinal, int Mganador[], int tam2, char Jmaximo[]){
    int i;
    for(i=0;i<2;i++){
    recuadro(32,1,56,26);
    recuadro(33,2,54,24);
    recuadro(34,3,52,22);
    recuadro(35,4,50,20);
    recuadro(36,5,48,18);
    recuadro(37,6,46,16);
    recuadro(38,7,44,14);
    recuadro(39,8,42,12);
    recuadro(40,9,40,10);
    Sleep(12);
    system("cls");}
    recuadro(33,2,54,24);
    recuadro(34,3,52,22);
    recuadro(35,4,50,20);
    recuadro(36,5,48,18);
    recuadro(37,6,46,16);
    recuadro(38,7,44,14);
    recuadro(39,8,42,12);
    recuadro(40,9,40,10);
    rlutil::locate(44,11);
	cout<< "JUGADOR: "<<NombreJugador;
	rlutil::locate(44,14);
	cout << "BUNCOS REALIZADOS: "<< UnJugador[0];
	rlutil::locate(44,15);
	cout << "NUMERO DE FALLIDAS: " << UnJugador[2];
	rlutil::locate(44,16);
	cout << "NUMERO DE LANZAMIENTOS: "<< UnJugador[5];
	rlutil::locate(44,17);
	cout << "PUNTAJE TOTAL: " << PuntajeFinal;
	rlutil::locate(1,30);
    system("pause");
            Mganador[0]=PuntajeFinal;
        strcpy(Jmaximo,NombreJugador);
    system("cls");}

void FinDePartidaManual (char NombreJugador[], int UnJugador[], int tam, int PuntajeFinal){
    int i;
    for(i=0;i<2;i++){
    recuadro(32,1,56,26);
    recuadro(33,2,54,24);
    recuadro(34,3,52,22);
    recuadro(35,4,50,20);
    recuadro(36,5,48,18);
    recuadro(37,6,46,16);
    recuadro(38,7,44,14);
    recuadro(39,8,42,12);
    recuadro(40,9,40,10);
    Sleep(12);
    system("cls");}
    recuadro(33,2,54,24);
    recuadro(34,3,52,22);
    recuadro(35,4,50,20);
    recuadro(36,5,48,18);
    recuadro(37,6,46,16);
    recuadro(38,7,44,14);
    recuadro(39,8,42,12);
    recuadro(40,9,40,10);
    rlutil::locate(44,11);
	cout<< "JUGADOR: "<<NombreJugador;
	rlutil::locate(44,14);
	cout << "BUNCOS REALIZADOS: "<< UnJugador[0];
	rlutil::locate(44,15);
	cout << "NUMERO DE FALLIDAS: " << UnJugador[2];
	rlutil::locate(44,16);
	cout << "NUMERO DE LANZAMIENTOS: "<< UnJugador[5];
	rlutil::locate(44,17);
	cout << "PUNTAJE TOTAL: " << PuntajeFinal;
	rlutil::locate(1,30);
    system("pause");

    system("cls");}


///FUNCIONES 2 JUGADORES

void DosJugadores(int Mganador[],int tam, char Jmaximo[]){
///----------------------------------------///
  /*funcion de posiciones dentro del vector Dos jugadores
      0= Bunco
      1= Puntos total
      2= lanzamientos fallidos
      3= Puntaje de partida
      4= Lanzamientos*/
///----------------------------------------///

///VARIABLES
bool TurnoJugador1=true,TurnoJugador2=true;
bool ProximoTurno=false; ///false = proximo turno jugador 2 ,true = proximo turno jugador 1
char Nombre_Segundo_Jugador[50],Nombre_Primer_Jugador[50];
int dados[3],Puntaje,PrimerJugador[5]={0},SegundoJugador[5]={0};
int i;

///COMIENZO PARTIDA


Nombrar2Jugadores(Nombre_Primer_Jugador,Nombre_Segundo_Jugador,50);
cls();
for(i=0;i<6;i++){
       PrimerJugador[3]=0;//PUNTAJE DE TURNO
       PrimerJugador[4]=0;//LANZAMIENTOS

       SegundoJugador[3]=0;//PUNTAJE DE TURNO
       SegundoJugador[4]=0;//LANZAMIENTOS

       TurnoJugador1=true;
       TurnoJugador2=true;
       ProximoTurno=false;///PROXIMO TURNO JUGADOR 2

while (TurnoJugador1==true){
        PrimerJugador[4]++;
        Cartel(Nombre_Primer_Jugador,50,i,PrimerJugador,5);
        locate(1,6);
        LanzamientoDeDados(dados,3);
        rlutil::locate(2,25);
        Puntaje=CalcularPuntajeTirada(dados,3,i+1);
        rlutil::locate(1,6);

if(Puntaje==21){PrimerJugador[0]+=1;}
if(Puntaje==0){PrimerJugador[2]+=1;
            locate(16,12);
            cout << "!TIRADA FALLIDA!"<<endl;}
else{PrimerJugador[3]+=Puntaje;}
if (PrimerJugador[3]>=21||Puntaje==0){TurnoJugador1=false;}


#include <windows.h>
 for(int x=2; x<=31; x++){
		gotoxy (x,17);
		putchar ('*');
		gotoxy (x,19);
		putchar ('*');}

for(int y=17; y<=19; y++){
		gotoxy (2,y);
		putchar ('*');
		gotoxy (31,y);
		putchar ('*');}

locate(3,18);
cout << "PUNTAJE DE LA RONDA: "<< PrimerJugador[3];
locate(1,3);
cout << "VECES QUE OBTUVO BUNCO: "<< PrimerJugador[0];
locate(1,30);
system("pause");
cls();}///FIN  WHILE TURNO JUGADOR UNO
PrimerJugador[1]+=PrimerJugador[3];  ///CALCULO PUNTAJE FINAL JUG 1

///ENTRE TURNOS
EntreRondas(Nombre_Primer_Jugador, PrimerJugador, Nombre_Segundo_Jugador, SegundoJugador,i, ProximoTurno);

//TURNO SEGUNDO JUGADOR

while (TurnoJugador2==true){
SegundoJugador[4]++;
Cartel(Nombre_Segundo_Jugador,50,i,SegundoJugador,5);
locate(1,6);
LanzamientoDeDados(dados,3);
rlutil::locate(2,25);
Puntaje=CalcularPuntajeTirada(dados,3,i+1);

if(Puntaje==21){SegundoJugador[0]+=1;}
if(Puntaje==0){
        SegundoJugador[2]+=1;
        locate(16,12);
        cout << "!TIRADA FALLIDA!"<<endl;}
else{SegundoJugador[3]+=Puntaje;}
if (SegundoJugador[3]>=21||Puntaje==0){TurnoJugador2 = false;}
 for(int x=2; x<=31; x++){
		gotoxy (x,17);
		putchar ('*');
		gotoxy (x,19);
		putchar ('*');}

for(int y=17; y<=19; y++){
		gotoxy (2,y);
		putchar ('*');
		gotoxy (31,y);
		putchar ('*');}

locate(3,18);
cout << "PUNTAJE DE LA RONDA: "<< SegundoJugador[3];
locate(1,3);
cout << "VECES QUE OBTUVO BUNCO: "<< SegundoJugador[0];
rlutil::locate (1,30);
locate(1,30);
system("pause");
cls();}///FIN TURNO JUGADOR DOS
SegundoJugador[1]+=SegundoJugador[3];

///ENTRE RONDAS
ProximoTurno=true;///PROXIMO TURNO JUGADOR 1
EntreRondas(Nombre_Primer_Jugador, PrimerJugador, Nombre_Segundo_Jugador, SegundoJugador,i,ProximoTurno);}
///FIN DE LAS RONDAS
CalculoDeGanador(PrimerJugador, SegundoJugador, Nombre_Primer_Jugador, Nombre_Segundo_Jugador,Mganador,2,Jmaximo);
}///FIN FUNCION

void CalculoDeGanador (int PrimerJugador[], int SegundoJugador[], char Nombre_Primer_Jugador[], char Nombre_Segundo_Jugador[],int Mganador[], int tam, char Jmaximo[]){

cls();

if (PrimerJugador[1]==SegundoJugador[1]){

        if(PrimerJugador[0]==SegundoJugador[0]){
            locate(20,12);
            cout<<"LOS JUGADORES OBTUVIERON LA MISMA CANTIDAD DE PUNTOS Y DE BUNCOS";//64
            locate(32,13);
            cout<<"EL RESULTADO DE LA PARTIDA ES: ";//31
            locate(40,14);
            cout<<"EMPATE";}
        else{
            if(PrimerJugador[0]>SegundoJugador[0]){
                    FinDepartida2J(PrimerJugador,Nombre_Primer_Jugador);
                    Mganador[0]=PrimerJugador[1];
                    strcpy(Jmaximo,Nombre_Primer_Jugador);}
            else{
                    FinDepartida2J(SegundoJugador,Nombre_Segundo_Jugador);
                    Mganador[0]=SegundoJugador[1];
                    strcpy(Jmaximo,Nombre_Segundo_Jugador);}
             }
}

if(PrimerJugador[1]>SegundoJugador[1]){
        FinDepartida2J(PrimerJugador,Nombre_Primer_Jugador);
        Mganador[0]=PrimerJugador[1];
        strcpy(Jmaximo,Nombre_Primer_Jugador);}

else{
        if(PrimerJugador[1]<SegundoJugador[1]){
                FinDepartida2J(SegundoJugador,Nombre_Segundo_Jugador);
                Mganador[0]=SegundoJugador[1];
                strcpy(Jmaximo,Nombre_Segundo_Jugador);}
}
}

void FinDepartida2J (int JugadorGanador[],char NombreGanador[]){

    int i;
    for(i=0;i<3;i++){
    recuadro(33,2,54,24);
    recuadro(34,3,52,22);
    recuadro(35,4,50,20);
    recuadro(36,5,48,18);
    recuadro(37,6,46,16);
    recuadro(38,7,44,14);
    recuadro(39,8,42,12);
    recuadro(40,9,40,10);
    Sleep(12);
    system("cls");}
    recuadro(33,2,54,24);
    recuadro(34,3,52,22);
    recuadro(35,4,50,20);
    recuadro(36,5,48,18);
    recuadro(37,6,46,16);
    recuadro(38,7,44,14);
    recuadro(39,8,42,12);
    recuadro(40,9,40,10);
    rlutil::locate(44,11);
	cout<< "JUGADOR GANADOR: "<<NombreGanador;
	rlutil::locate(44,14);
	cout << "BUNCOS REALIZADOS: "<< JugadorGanador[0];
	rlutil::locate(44,15);
	cout << "NUMERO DE FALLIDAS: " << JugadorGanador[2];
	rlutil::locate(44,16);
	cout << "PUNTAJE TOTAL: " << JugadorGanador[1];
	rlutil::locate(1,30);
    system("pause");
    system("cls");}

void EntreRondas (char Nombre_Primer_Jugador[], int PrimerJugador[], char Nombre_Segundo_Jugador[], int SegundoJugador[], int Rondas, bool ProximoTurno){
    rlutil::cls();
    system("color 70");
if (Rondas<6){
       rlutil::locate(25,12);
       recuadro(20,9,40,12);
      for(int x=22;x<=58;x=x+2){
        gotoxy (x,13);
		putchar ('-');
        gotoxy (x,16);
		putchar ('-');}
rlutil::locate(25,11);
	cout << "NUMERO DE RONDA: "<< Rondas+1;
rlutil::locate(25,12);
	if (ProximoTurno == false){cout<< "PROXIMO TURNO: "<< Nombre_Segundo_Jugador;}
	else{cout<< "PROXIMO TURNO: "<< Nombre_Primer_Jugador;}
	rlutil::locate(25,14);
	cout << "PUNTAJE DE "<< Nombre_Primer_Jugador << " : " << PrimerJugador[1] << " PUNTOS";
    rlutil::locate(25,15);
	cout << "BUCOS : " << PrimerJugador[0];
	rlutil::locate(25,17);
	cout << "PUNTAJE DE "<< Nombre_Segundo_Jugador << " : "<<SegundoJugador[1]<< " PUNTOS";
	rlutil::locate(25,18);
	cout << "BUNCOS : " << SegundoJugador[0];
	rlutil::locate(20,30);
    system("pause");
    system("cls");
    rlutil::cls();}

}

void MaximoJugadorGlobal(int Mganador[],int tam,char Jmaximo[],char Janterior[]){

    if(Mganador[0]>Mganador[1]){ ///SE COMPARA EL PUNTAJE DEL JUGADOR GANADOR RECIENTE CON LA DEL ANTERIOR GANADOR
            Mganador[1]=Mganador[0];
            recuadro(40,9,30,10);
            locate(46,11);
            cout<<"PUNTUACION MAS ALTA";
            locate(53,13);
            cout<<Jmaximo;   ///NOMBRE JUG GANADOR
            strcpy(Janterior,Jmaximo);
            locate(54,14);
            cout<<Mganador[1];}
            else{
                    recuadro(40,9,30,10);
                    locate(46,11);
                    cout<<"PUNTUACION MAS ALTA";
                    locate(53,13);
                    cout<<Janterior;
                    locate(54,14);
                    cout<<Mganador[1];}
}
