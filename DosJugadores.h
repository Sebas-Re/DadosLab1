#ifndef DOSJUGADORES_H_INCLUDED
#define DOSJUGADORES_H_INCLUDED

#include "rlutil.h"
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

using namespace rlutil;

/*
PrimerJugador[6]
0 - Tiradas_Fallidas
1 - Puntaje
2 - Total_Bunco
3 - Puntaje_Rondas
4 - Puntaje_De_Rondas
5 - Lanzamientos
SegundoJugador[6]
0 - Tiradas_Fallida
1 - Puntaje
2 - Total_Bunco
3 - Puntaje_Rondas
4 - Puntaje_De_Rondas
5 - Lanzamientos
*/

enum Color{
cNEGRO=0,
cAZUL=1,
cVERDE=2,
cCIAN=3,
cROJO=4,
cMAGENTA=5,
cMARRON=6,
cGRIS_CLARO=7,
cGRIS=8,
cAZUL_CLARO=9,
cVERDE_CLARO=10,
cCIAN_CLARO=11,
cROJO_CLARO=12,
cMAGENTA_CLARO=13,
cAMARILLO=14,
cBLANCO=15
};


void DosJugadores(int Rondas, char Nombre_Primer_Jugador[50], char Nombre_Segundo_Jugador[50], int Num[3], int PrimerJugador[6], int SegundoJugador[6]){
   PrimerJugador[0]=0;
   SegundoJugador[0]=0;
    PrimerJugador[1]=0;
    SegundoJugador[1]=0;
    PrimerJugador[2]=0;
    SegundoJugador[2]=0;
    Rondas=0;
    cls();
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

	locate(25,11);
	cout << "Ingresar nombre primer jugador: ";
cin >> Nombre_Primer_Jugador;
locate(25,13);
	cout << "Ingresar nombre segundo jugador: ";
cin >> Nombre_Segundo_Jugador;
cls();
while (Rondas!=6){
       PrimerJugador[5]=0;
       SegundoJugador[5]=0;
        Rondas=Rondas+1;
            PrimerJugador[3]=0;
            PrimerJugador[4]=0;
    while (PrimerJugador[4]<21){
cls();
setBackgroundColor(rlutil::RED);

            locate(1,1);
cout <<  "TURNO DE "<< Nombre_Primer_Jugador<< "  |  "<< "Rondas Nº "<< Rondas<< "  |  "<< "PUNTAJE ACUMULADO:  "<< PrimerJugador[1]<< " PUNTOS";
    for(int x=1; x<=75; x++){
		gotoxy (x,2);
		putchar ('-');

	}
		locate(1,3);
    cout << "VECES QUE OBTUVO BUNCO: "<< PrimerJugador[2];
    	    for(int x=1; x<=75; x++){
		gotoxy (x,4);
		putchar ('-');

	}
PrimerJugador[5]=PrimerJugador[5]+1;
locate(1,5);
system("color 40");
	cout << "LANZAMIENTO Nº "<< PrimerJugador[5];
	 for(int x=1; x<=30; x++){
		gotoxy (x,24);
		putchar ('*');
		gotoxy (x,26);
		putchar ('*');
	}

    	    for(int y=24; y<=26; y++){
		gotoxy (1,y);
		putchar ('*');
			gotoxy (30,y);
		putchar ('*');

	}
	locate(2,25);
	cout << "Puntaje de la Rondas: "<< PrimerJugador[3];
        locate(1,6);
 //Generador();

for (int i=0; i<=2; i++){
        srand(time(NULL));
locate(1,20+i);
rlutil::setBackgroundColor(rlutil::RED);
 Num[i]=1+rand()%(1-7);
 locate(1,20+i);
rlutil::setBackgroundColor(rlutil::RED);
setColor(0);

resetColor();


     //dibujarDados (i+1, Num[i]);
        const int valor = Num[i];
        const int numDado = i+1;
        const int Y= 10;
        const int ALTO= 4;
        const int INI = 1;
        const int X = INI + ((i *10)+1);
        const int ANCHO = 8;

			   for(int i=X; i<=X+ANCHO; i++){

        for(int j=Y; j<=Y+ALTO; j++){
   setBackgroundColor(cBLANCO);

            locate (i, j);
            cout << " ";
        }
			   }
			//recuadro (X, Y, ANCHO, ALTO);

			//Dibujar los puntos

			locate (X+2,Y+2);
			const int CENTRO_X = X+ ANCHO/2;
			const int CENTRO_Y = Y+ ALTO/2;
			const int ARRIBA_X = CENTRO_X-2;
			const int ARRIBA_Y = CENTRO_Y-1;
			const int ABAJO_X = CENTRO_X+2;
			const int ABAJO_y = CENTRO_Y+1;
			const int ARRIBA_X_LEFT = CENTRO_X+2;
			const int ARRIBA_Y_LEFT = CENTRO_Y-1;
			const int ABAJO_X_REGHT = CENTRO_X-2;
			const int ABAJO_Y_REGHT = CENTRO_Y+1;


			//valor seis
			const int CENTRO_REGHT_X = CENTRO_X+2;
			const int CENTRO_REGHT_Y = CENTRO_Y;
			const int CENTRO_LEFT_X = CENTRO_X-2;
			const int CENTRO_LEFT_Y = CENTRO_Y;
			//valor seis
			const int CENTRO_ARRIBA_X = CENTRO_X;
			const int CENTRO_ARRIBA_Y = CENTRO_Y+1;
			const int CENTRO_ABAJO_X = CENTRO_X;
			const int CENTRO_ABAJO_Y = CENTRO_Y-1;


			setColor(cNEGRO);
			switch (Num[i]){
            case 1:
                locate (CENTRO_X,CENTRO_Y);
                printf("%c",248);
                break;
            case 2:
                if (numDado%2==0){
                locate (ARRIBA_X, ARRIBA_Y);
                printf("%c",248);
                locate (ABAJO_X,ABAJO_y);
                printf("%c",248);
                }
                else{
                locate (ARRIBA_X_LEFT,ARRIBA_Y_LEFT);
                printf("%c",248);
                locate (ABAJO_X_REGHT, ABAJO_Y_REGHT);
                printf("%c",248);

                }

                break;
            case 3:
                if (numDado%2==0){
                locate (CENTRO_X,CENTRO_Y);
                printf("%c",248);
                locate (ARRIBA_X, ARRIBA_Y);
                printf("%c",248);
                locate (ABAJO_X,ABAJO_y);
                printf("%c",248);
                }
                else{

                locate (CENTRO_X,CENTRO_Y);
                printf("%c",248);
                locate (ARRIBA_X_LEFT,ARRIBA_Y_LEFT);
                printf("%c",248);
                locate (ABAJO_X_REGHT, ABAJO_Y_REGHT);
                printf("%c",248);

                }
                break;
            case 4:
                 locate (ARRIBA_X, ARRIBA_Y);
                printf("%c",248);
                locate (ABAJO_X,ABAJO_y);
                printf("%c",248);
                locate (ARRIBA_X_LEFT,ARRIBA_Y_LEFT);
                printf("%c",248);
                   locate (ABAJO_X_REGHT, ABAJO_Y_REGHT);
                printf("%c",248);


                break;
            case 5:
                locate (CENTRO_X,CENTRO_Y);
                printf("%c",248);
                 locate (ARRIBA_X, ARRIBA_Y);
                printf("%c",248);
                locate (ABAJO_X,ABAJO_y);
                printf("%c",248);
                locate (ARRIBA_X_LEFT,ARRIBA_Y_LEFT);
                printf("%c",248);
                   locate (ABAJO_X_REGHT, ABAJO_Y_REGHT);
                printf("%c",248);
                break;
            case 6:
                if (numDado%2==0){
                 locate (ARRIBA_X, ARRIBA_Y);
                printf("%c",248);
                locate (ABAJO_X,ABAJO_y);
                printf("%c",248);
                locate (ARRIBA_X_LEFT,ARRIBA_Y_LEFT);
                printf("%c",248);
                   locate (ABAJO_X_REGHT, ABAJO_Y_REGHT);
                printf("%c",248);
                 locate (CENTRO_REGHT_X,CENTRO_REGHT_Y);
                printf("%c",248);
                locate (CENTRO_LEFT_X, CENTRO_LEFT_Y);
                printf("%c",248);
                }
                else{
                    locate (ARRIBA_X, ARRIBA_Y);
                printf("%c",248);
                locate (ABAJO_X,ABAJO_y);
                printf("%c",248);
                locate (ARRIBA_X_LEFT,ARRIBA_Y_LEFT);
                printf("%c",248);
                   locate (ABAJO_X_REGHT, ABAJO_Y_REGHT);
                printf("%c",248);
                 locate (CENTRO_ARRIBA_X,CENTRO_ARRIBA_Y);
                printf("%c",248);
                locate (CENTRO_ABAJO_X, CENTRO_ABAJO_Y);
                printf("%c",248);
                }



                break;
            default:
                break;

			}
}
//Contando puntos
//21 PUNTOS
if (Num[0]==Num[1]&&Num[1]==Num[2]&&Num[2]==Rondas){

    PrimerJugador[3]=PrimerJugador[3]+21;
    rlutil::setBackgroundColor(rlutil::RED);
   locate(15,18);
   PrimerJugador[2]=PrimerJugador[2]+1;
    cout << "Obtuviste Bunco ! ";
}
else{
if(Num[0]==Num[1]&&Num[1]==Num[2]){
          PrimerJugador[3]=PrimerJugador[3]+5;
    rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
    cout << "Obtuviste 5 Puntos ! ";
    }
else{
if ((Num[0]+Num[1]+Num[2])%5==0){
                  PrimerJugador[3]=PrimerJugador[3]+3;
    rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
    cout << "Obtuviste 3 Puntos ! ";
            }

else{
                    //Escalera
if(Num[0]==1||Num[1]==1||Num[2]==1){
                     if (Num[0]==2||Num[1]==2||Num[2]==2){
                        if(Num[0]==3||Num[1]==3||Num[2]==3){

                                PrimerJugador[3]=PrimerJugador[3]+2;
                                    rlutil::setBackgroundColor(rlutil::RED);
   locate(15,18);
                                 cout << "Obtuviste una escalera ! ";

                        }
                     }

                }
else{
if (Num[0]==2||Num[1]==2||Num[2]==2){
        if(Num[0]==3||Num[1]==3||Num[2]==3){
            if(Num[0]==4||Num[1]==4||Num[2]==4){
                    PrimerJugador[3]=PrimerJugador[3]+2;
                    rlutil::setBackgroundColor(rlutil::RED);
                    locate(15,18);
                    cout << "Obtuviste una escalera ! ";
                    }
                }
            }
else{
if(Num[0]==3||Num[1]==3||Num[2]==3){
if(Num[0]==4||Num[1]==4||Num[2]==4){
if(Num[0]==5||Num[1]==5||Num[2]==5){
     PrimerJugador[3]=PrimerJugador[3]+2;
     rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
     cout << "Obtuviste una escalera ! ";
                              }
                              }
                        }
else{
if(Num[0]==4||Num[1]==4||Num[2]==4){
if(Num[0]==5||Num[1]==5||Num[2]==5){
if(Num[0]==6||Num[1]==6||Num[2]==6){
                PrimerJugador[3]=PrimerJugador[3]+2;
                    rlutil::setBackgroundColor(rlutil::RED);
    locate(15,18);
                cout << "Obtuviste una escalera ! ";
}
}
}
//Fin escalera
else{
if(Num[0]==Rondas){
     PrimerJugador[3]=PrimerJugador[3]+1;
if(Num[1]==Rondas){
                PrimerJugador[3]=PrimerJugador[3]+1;
if(Num[2]==Rondas){
                PrimerJugador[3]=PrimerJugador[3]+1;
                    rlutil::setBackgroundColor(rlutil::RED);
     locate(20,18);
cout<<"Obtuviste 3 Puntos !";
}
else{
    cout<<"Obtuviste 2 Puntos !";
}
}
        else{
          if(Num[2]==Rondas){
             PrimerJugador[3]=PrimerJugador[3]+1;
                 rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
             cout<<"Obtuviste 2 Puntos !";
          }
        }
    }
else{
if(Num[1]==Rondas){
        PrimerJugador[3]=PrimerJugador[3]+1;
if(Num[2]==Rondas){
        PrimerJugador[3]=PrimerJugador[3]+1;
            rlutil::setBackgroundColor(rlutil::RED);
    locate(15,18);
        cout<<"Obtuviste 2 Puntos !";
}
else{
            rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
      cout<<"Obtuviste 1 Puntos !";
}
}
else{
if(Num[2]==Rondas){
        PrimerJugador[3]=PrimerJugador[3]+1;
    rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
        cout<<"Obtuviste 1 Puntos !";
}
}
}
}
}
}
}
}
}
}
if (PrimerJugador[3]==0){
PrimerJugador[0]=PrimerJugador[0]+1;
  rlutil::setBackgroundColor(rlutil::RED);
                    locate(15,18);
    cout << "No obtuviste nada !";
}
else{
    PrimerJugador[4]=PrimerJugador[4] +PrimerJugador[3];
}

 for(int x=1; x<=30; x++){
		gotoxy (x,24);
		putchar ('*');
		gotoxy (x,26);
		putchar ('*');
	}

    	    for(int y=24; y<=26; y++){
		gotoxy (1,y);
		putchar ('*');
			gotoxy (30,y);
		putchar ('*');

	}
	locate(2,25);
	cout << "Puntaje de la Rondas: "<< PrimerJugador[4];
locate(1,3);
 cout << "VECES QUE OBTUVO BUNCO: "<< PrimerJugador[2];

rlutil::setBackgroundColor(rlutil::RED);
 locate(1,30);
    system("pause");
   rlutil::setBackgroundColor(rlutil::RED);
 cls();
}
//Fin contando puntos
	PrimerJugador[1]=PrimerJugador[1]+PrimerJugador[3];
rlutil::setBackgroundColor(rlutil::RED);
    //Entre Rondas
    cls();
    for(int x=20;x<=60;x=x+2){
        		gotoxy (x,10);
		putchar ('*');
			gotoxy (x,21);
		putchar ('*');

    }
      for(int x=22;x<=58;x=x+2){
        gotoxy (x,13);
		putchar ('-');
        gotoxy (x,18);
		putchar ('-');

    }

    	    for(int y=10; y<=21; y++){
		gotoxy (20,y);
		putchar ('*');
			gotoxy (60,y);
		putchar ('*');

	}
	locate(25,11);
	cout << "RONDA Nº "<< Rondas;
	locate(25,12);
	cout<< "PROXIMO TURNO: "<< Nombre_Segundo_Jugador;
	locate(25,14);
	cout << " PUNTAJE DE "<< Nombre_Primer_Jugador << " : " << PrimerJugador[1] << " PUNTOS";
	locate(25,15);
	cout << "BUCOS : " << PrimerJugador[2];
	locate(25,17);
	cout << "PUNTAJE DE "<< Nombre_Segundo_Jugador << " : "<<SegundoJugador[1]<< " PUNTOS";
	locate(25,18);
	cout << "BUNCOS : " << SegundoJugador[2];
	locate(30,30);
    system("pause");
    //FIN ENTRE RONDAS

   //TURNO SEGUNDO JUGADOR

    while (SegundoJugador[4]<21){

            locate(1,1);
cout <<  "TURNO DE "<< Nombre_Segundo_Jugador<< "  |  "<< "Rondas Nº "<< Rondas<< "  |  "<< "PUNTAJE ACUMULADO:  "<< SegundoJugador[3]<< " PUNTOS";
    for(int x=1; x<=75; x++){
		gotoxy (x,2);
		putchar ('-');

	}
		locate(1,3);
    cout << "VECES QUE OBTUVO BUNCO: "<< SegundoJugador[2];
    	    for(int x=1; x<=75; x++){
		gotoxy (x,4);
		putchar ('-');

	}
SegundoJugador[5]=SegundoJugador[5]+1;
locate(1,5);
system("color 40");
	cout << "LANZAMIENTO Nº "<< SegundoJugador[5];
	 for(int x=1; x<=30; x++){
		gotoxy (x,24);
		putchar ('*');
		gotoxy (x,26);
		putchar ('*');
	}

    	    for(int y=24; y<=26; y++){
		gotoxy (1,y);
		putchar ('*');
			gotoxy (30,y);
		putchar ('*');

	}
	locate(2,25);
	cout << "Puntaje de la Rondas: "<< SegundoJugador[3];
        locate(1,6);
 //Generador();

for (int i=0; i<=2; i++){
        srand(time(NULL));
locate(1,20+i);
Num[i]=1+rand()%(1-7);
rlutil::setBackgroundColor(rlutil::RED);
setColor(0);

resetColor();


     //dibujarDados (i+1, Num[i]);
        const int valor = Num[i];
        const int numDado = i+1;
        const int Y= 10;
        const int ALTO= 4;
        const int INI = 1;
        const int X = INI + ((i *10)+1);
        const int ANCHO = 8;

			   for(int i=X; i<=X+ANCHO; i++){

        for(int j=Y; j<=Y+ALTO; j++){
   setBackgroundColor(cBLANCO);

            locate (i, j);
            cout << " ";
        }
			   }
			//recuadro (X, Y, ANCHO, ALTO);

			//Dibujar los puntos

			locate (X+2,Y+2);
			const int CENTRO_X = X+ ANCHO/2;
			const int CENTRO_Y = Y+ ALTO/2;
			const int ARRIBA_X = CENTRO_X-2;
			const int ARRIBA_Y = CENTRO_Y-1;
			const int ABAJO_X = CENTRO_X+2;
			const int ABAJO_y = CENTRO_Y+1;
			const int ARRIBA_X_LEFT = CENTRO_X+2;
			const int ARRIBA_Y_LEFT = CENTRO_Y-1;
			const int ABAJO_X_REGHT = CENTRO_X-2;
			const int ABAJO_Y_REGHT = CENTRO_Y+1;


			//valor seis
			const int CENTRO_REGHT_X = CENTRO_X+2;
			const int CENTRO_REGHT_Y = CENTRO_Y;
			const int CENTRO_LEFT_X = CENTRO_X-2;
			const int CENTRO_LEFT_Y = CENTRO_Y;
			//valor seis
			const int CENTRO_ARRIBA_X = CENTRO_X;
			const int CENTRO_ARRIBA_Y = CENTRO_Y+1;
			const int CENTRO_ABAJO_X = CENTRO_X;
			const int CENTRO_ABAJO_Y = CENTRO_Y-1;


			setColor(cNEGRO);
			switch (Num[i]){
            case 1:
                locate (CENTRO_X,CENTRO_Y);
                printf("%c",248);
                break;
            case 2:
                if (numDado%2==0){
                locate (ARRIBA_X, ARRIBA_Y);
                printf("%c",248);
                locate (ABAJO_X,ABAJO_y);
                printf("%c",248);
                }
                else{
                locate (ARRIBA_X_LEFT,ARRIBA_Y_LEFT);
                printf("%c",248);
                locate (ABAJO_X_REGHT, ABAJO_Y_REGHT);
                printf("%c",248);

                }

                break;
            case 3:
                if (numDado%2==0){
                locate (CENTRO_X,CENTRO_Y);
                printf("%c",248);
                locate (ARRIBA_X, ARRIBA_Y);
                printf("%c",248);
                locate (ABAJO_X,ABAJO_y);
                printf("%c",248);
                }
                else{

                locate (CENTRO_X,CENTRO_Y);
                printf("%c",248);
                locate (ARRIBA_X_LEFT,ARRIBA_Y_LEFT);
                printf("%c",248);
                locate (ABAJO_X_REGHT, ABAJO_Y_REGHT);
                printf("%c",248);

                }
                break;
            case 4:
                 locate (ARRIBA_X, ARRIBA_Y);
                printf("%c",248);
                locate (ABAJO_X,ABAJO_y);
                printf("%c",248);
                locate (ARRIBA_X_LEFT,ARRIBA_Y_LEFT);
                printf("%c",248);
                   locate (ABAJO_X_REGHT, ABAJO_Y_REGHT);
                printf("%c",248);


                break;
            case 5:
                locate (CENTRO_X,CENTRO_Y);
                printf("%c",248);
                 locate (ARRIBA_X, ARRIBA_Y);
                printf("%c",248);
                locate (ABAJO_X,ABAJO_y);
                printf("%c",248);
                locate (ARRIBA_X_LEFT,ARRIBA_Y_LEFT);
                printf("%c",248);
                   locate (ABAJO_X_REGHT, ABAJO_Y_REGHT);
                printf("%c",248);
                break;
            case 6:
                if (numDado%2==0){
                 locate (ARRIBA_X, ARRIBA_Y);
                printf("%c",248);
                locate (ABAJO_X,ABAJO_y);
                printf("%c",248);
                locate (ARRIBA_X_LEFT,ARRIBA_Y_LEFT);
                printf("%c",248);
                   locate (ABAJO_X_REGHT, ABAJO_Y_REGHT);
                printf("%c",248);
                 locate (CENTRO_REGHT_X,CENTRO_REGHT_Y);
                printf("%c",248);
                locate (CENTRO_LEFT_X, CENTRO_LEFT_Y);
                printf("%c",248);
                }
                else{
                    locate (ARRIBA_X, ARRIBA_Y);
                printf("%c",248);
                locate (ABAJO_X,ABAJO_y);
                printf("%c",248);
                locate (ARRIBA_X_LEFT,ARRIBA_Y_LEFT);
                printf("%c",248);
                   locate (ABAJO_X_REGHT, ABAJO_Y_REGHT);
                printf("%c",248);
                 locate (CENTRO_ARRIBA_X,CENTRO_ARRIBA_Y);
                printf("%c",248);
                locate (CENTRO_ABAJO_X, CENTRO_ABAJO_Y);
                printf("%c",248);
                }



                break;
            default:
                break;

			}
}
//Contando puntos
//21 PUNTOS
if (Num[0]==Num[1]&&Num[1]==Num[2]&&Num[2]==Rondas){

    SegundoJugador[3]=SegundoJugador[3]+21;
    rlutil::setBackgroundColor(rlutil::RED);
   locate(15,18);
   SegundoJugador[2]=SegundoJugador[2]+1;
    cout << "Obtuviste Bunco ! ";
}
else{
if(Num[0]==Num[1]&&Num[1]==Num[2]){
          SegundoJugador[3]=SegundoJugador[3]+5;
    rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
    cout << "Obtuviste 5 Puntos ! ";
    }
else{
if ((Num[0]+Num[1]+Num[2])%5==0){
                  SegundoJugador[3]=SegundoJugador[3]+3;
    rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
    cout << "Obtuviste 3 Puntos ! ";
            }

else{
                    //Escalera
if(Num[0]==1||Num[1]==1||Num[2]==1){
                     if (Num[0]==2||Num[1]==2||Num[2]==2){
                        if(Num[0]==3||Num[1]==3||Num[2]==3){

                SegundoJugador[3]=SegundoJugador[3]+2;
                                    rlutil::setBackgroundColor(rlutil::RED);
   locate(15,18);
                                 cout << "Obtuviste una escalera ! ";

                        }
                     }

                }
else{
if (Num[0]==2||Num[1]==2||Num[2]==2){
        if(Num[0]==3||Num[1]==3||Num[2]==3){
            if(Num[0]==4||Num[1]==4||Num[2]==4){
                    SegundoJugador[3]=SegundoJugador[3]+2;
                    rlutil::setBackgroundColor(rlutil::RED);
                    locate(15,18);
                    cout << "Obtuviste una escalera ! ";
                    }
                }
            }
else{
if(Num[0]==3||Num[1]==3||Num[2]==3){
if(Num[0]==4||Num[1]==4||Num[2]==4){
if(Num[0]==5||Num[1]==5||Num[2]==5){
     SegundoJugador[3]=SegundoJugador[3]+2;
     rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
     cout << "Obtuviste una escalera ! ";
                              }
                              }
                        }
else{
if(Num[0]==4||Num[1]==4||Num[2]==4){
if(Num[0]==5||Num[1]==5||Num[2]==5){
if(Num[0]==6||Num[1]==6||Num[2]==6){
                SegundoJugador[3]=SegundoJugador[3]+2;
                    rlutil::setBackgroundColor(rlutil::RED);
    locate(15,18);
                cout << "Obtuviste una escalera ! ";
}
}
}
//Fin escalera
else{
if(Num[0]==Rondas){
     SegundoJugador[3]=SegundoJugador[3]+1;
if(Num[1]==Rondas){
                SegundoJugador[3]=SegundoJugador[3]+1;
if(Num[2]==Rondas){
                SegundoJugador[3]=SegundoJugador[3]+1;
                    rlutil::setBackgroundColor(rlutil::RED);
     locate(20,18);
cout<<"Obtuviste 3 Puntos !";
}
else{
    cout<<"Obtuviste 2 Puntos !";
}
}
        else{
          if(Num[2]==Rondas){
             SegundoJugador[3]=SegundoJugador[3]+1;
                 rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
             cout<<"Obtuviste 2 Puntos !";
          }
        }
    }
else{
if(Num[1]==Rondas){
        SegundoJugador[3]=SegundoJugador[3]+1;
if(Num[2]==Rondas){
        SegundoJugador[3]=SegundoJugador[3]+1;
            rlutil::setBackgroundColor(rlutil::RED);
    locate(15,18);
        cout<<"Obtuviste 2 Puntos !";
}
else{
            rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
      cout<<"Obtuviste 1 Puntos !";
}
}
else{
if(Num[2]==Rondas){
        SegundoJugador[3]=SegundoJugador[3]+1;
    rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
        cout<<"Obtuviste 1 Puntos !";
}
}
}
}
}
}
}
}
}
}
if (SegundoJugador[3]==0){
SegundoJugador[0]=SegundoJugador[0]+1;
  rlutil::setBackgroundColor(rlutil::RED);
                    locate(15,18);
    cout << "No obtuviste nada !";
}
else{
    SegundoJugador[4]=SegundoJugador[4]+SegundoJugador[3];
}

 for(int x=1; x<=30; x++){
		gotoxy (x,24);
		putchar ('*');
		gotoxy (x,26);
		putchar ('*');
	}

    	    for(int y=24; y<=26; y++){
		gotoxy (1,y);
		putchar ('*');
			gotoxy (30,y);
		putchar ('*');

	}
	locate(2,25);
	cout << "Puntaje de la Rondas: "<< SegundoJugador[4];
locate(1,3);
 cout << "VECES QUE OBTUVO BUNCO: "<< SegundoJugador[2];

rlutil::setBackgroundColor(rlutil::RED);
 locate(1,30);
    system("pause");
   rlutil::setBackgroundColor(rlutil::RED);
 cls();
}
//Fin contando puntos
SegundoJugador[3]=SegundoJugador[3]+SegundoJugador[3];
rlutil::setBackgroundColor(rlutil::RED);
    //Entre Rondas
    cls();

	locate(27,11);
	cout << "RONDA Nº "<< Rondas;
	if (Rondas<6){
        locate(25,12);    for(int x=20;x<=60;x=x+2){
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
	cout<< "PROXIMO TURNO: "<< Nombre_Segundo_Jugador;
	}
	locate(25,14);
	cout << " PUNTAJE DE "<< Nombre_Primer_Jugador << " : " << PrimerJugador[1] << " PUNTOS";
	locate(25,15);
	cout << "BUCOS : " << PrimerJugador[2];
	locate(25,17);
	cout << "PUNTAJE DE "<< Nombre_Segundo_Jugador << " : "<<SegundoJugador[1]<< " PUNTOS";
	locate(25,18);
	cout << "BUNCOS : " << SegundoJugador[2];
	locate(30,30);
    system("pause");

cls();

}

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
	locate(25,13);
	cout<<"NOMBRE DEL JUGADOR GANADOR: "<< Nombre_Primer_Jugador;
    locate(25,14);
	cout << " PUNTAJE TOTAL : " << PrimerJugador[1] << " PUNTOS";
	locate(25,15);
	cout << "BUCOS : " << PrimerJugador[2];
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
	locate(25,13);
	cout<<"NOMBRE DEL JUGADOR GANADOR: "<< Nombre_Segundo_Jugador;
    locate(25,14);
	cout << " PUNTAJE TOTAL : " << SegundoJugador[1] << " PUNTOS";
	locate(25,15);
	cout << "BUCOS : " << SegundoJugador[2];
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
	locate(25,13);
	cout<<"NOMBRE DEL JUGADOR GANADOR: "<< Nombre_Primer_Jugador;
    locate(25,14);
	cout << " PUNTAJE TOTAL : " << PrimerJugador[1] << " PUNTOS";
	locate(25,15);
	cout << "BUCOS : " << PrimerJugador[2];

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
	locate(25,13);
	cout<<"NOMBRE DEL JUGADOR GANADOR: "<< Nombre_Primer_Jugador;
    locate(25,14);
	cout << " PUNTAJE TOTAL : " << PrimerJugador[1] << " PUNTOS";
	locate(25,15);
	cout << "BUCOS : " << PrimerJugador[2];
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
	locate(25,11);
	cout<<"EMPATE";
	locate(25,13);
	cout<<"NOMBRE DEL JUGADOR GANADOR: "<< Nombre_Primer_Jugador;
    locate(25,14);
	cout << " PUNTAJE TOTAL : " << PrimerJugador[1] << " PUNTOS";
	locate(25,15);
	cout << "BUCOS : " << PrimerJugador[2];
    locate(25,17);
	cout<<"NOMBRE DEL JUGADOR GANADOR: "<< Nombre_Primer_Jugador;
    locate(25,18);
	cout << " PUNTAJE TOTAL : " << PrimerJugador[1] << " PUNTOS";
	locate(25,19);
	cout << "BUCOS : " << PrimerJugador[2];
            }
        }
    }

}

}


#endif // DOSJUGADORES_H_INCLUDED
