#ifndef UnJugador_H_INCLUDED
#define UnJugador_H_INCLUDED
#endif // UnJugador_H_INCLUDED


int Opcion, Op, Puntaje, Puntaje_Ronda, Rondas, Num_Lanz,Total_Bunco, Tiradas_Fallidas;
char Nombre_Primer_Jugador[50];
int Num[3];

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


void UnJugador( ){

     Puntaje=0;
    Total_Bunco=0;
    Rondas=0;
    cls();
     for(int x=22; x<=50; x=x+2)
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
		gotoxy (50,y);
		putchar ('*');
	}
	locate(25,11);
cout << "Ingresar nombre: ";
cin >> Nombre_Primer_Jugador;
cls();
for(int R=1;R==6;R++){


        Num_Lanz=0;
        Rondas=Rondas+1;
            Puntaje_Ronda=0;
    while (Puntaje_Ronda<21){

            locate(1,1);
    cout <<  "TURNO DE "<< Nombre_Primer_Jugador<< "  |  "<< "RONDA Nº "<< Rondas<< "  |  "<< "PUNTAJE ACUMULADO:  "<< Puntaje<< " PUNTOS";
    for(int x=1; x<=75; x++){
		gotoxy (x,2);
		putchar ('-');

	}
		locate(1,3);
    cout << "VECES QUE OBTUVO BUNCO: "<< Total_Bunco;
    	    for(int x=1; x<=75; x++){
		gotoxy (x,4);
		putchar ('-');

	}
Num_Lanz=Num_Lanz+1;
locate(1,5);
system("color 40");
	cout << "LANZAMIENTO Nº "<< Num_Lanz;
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
	cout << "Puntaje de la ronda: "<< Puntaje_Ronda;
        locate(1,6);
        srand(time(NULL));
for (int i=0; i<=2; i++){
        Num[i] = 1+rand()%(1-7);
for(i=0;i==3;i++) {
        cout << Num[i];

}
resetColor();


     //dibujarDados (i+1, Num[i]);
        const int valor = Num[i];
        const int numDado = i+1;
        const int Y= 10;
			const int ALTO= 4;
			const int INI = 1;
			const int X = INI + (numDado * 10);
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

    Puntaje_Ronda=Puntaje_Ronda+21;
    rlutil::setBackgroundColor(rlutil::RED);
   locate(15,18);
   Total_Bunco=Total_Bunco+1;
    cout << "Obtuviste Bunco ! ";
}
else{
if(Num[0]==Num[1]&&Num[1]==Num[2]){
          Puntaje_Ronda=Puntaje_Ronda+5;
    rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
    cout << "Obtuviste 5 Puntos ! ";
    }
else{
if ((Num[0]+Num[1]+Num[2])%5==0){
                  Puntaje_Ronda=Puntaje_Ronda+3;
    rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
    cout << "Obtuviste 3 Puntos ! ";
            }

else{
                    //Escalera
if(Num[0]<=1||Num[1]==1||Num[2]==1){
                     if (Num[0]<=2||Num[1]==2||Num[2]==2){
                        if(Num[0]<=3||Num[1]==3||Num[2]==3){

                                Puntaje_Ronda=Puntaje_Ronda+2;
                                    rlutil::setBackgroundColor(rlutil::RED);
   locate(15,18);
                                 cout << "Obtuviste una escalera ! ";

                        }
                     }

                }
else{
if (Num[0]<=2||Num[1]==2||Num[2]==2){
                        if(Num[0]<=3||Num[1]==3||Num[2]==3){
                              if(Num[0]<=4||Num[1]==4||Num[2]==4){
                                Puntaje_Ronda=Puntaje_Ronda+2;
                                    rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
                                 cout << "Obtuviste una escalera ! ";
                              }
                        }
                     }
else{
if(Num[0]<=3||Num[1]==3||Num[2]==3){
                              if(Num[0]<=4||Num[1]==4||Num[2]==4){
                           if(Num[0]<=5||Num[1]==5||Num[2]==5){
                                Puntaje_Ronda=Puntaje_Ronda+2;
                                    rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
                                 cout << "Obtuviste una escalera ! ";
                              }
                              }
                        }
else{
if(Num[0]<=4||Num[1]==4||Num[2]==4){
if(Num[0]<=5||Num[1]==5||Num[2]==5){
if(Num[0]<=6||Num[1]==6||Num[2]==6){
                Puntaje_Ronda=Puntaje_Ronda+2;
                    rlutil::setBackgroundColor(rlutil::RED);
    locate(15,18);
                cout << "Obtuviste una escalera ! ";
}
}
}
//Fin escalera
else{
if(Num[0]==Num_Lanz){
     Puntaje_Ronda=Puntaje_Ronda+1;
if(Num[1]==Num_Lanz){
                Puntaje_Ronda=Puntaje_Ronda+1;
if(Num[2]==Num_Lanz){
                Puntaje_Ronda=Puntaje_Ronda+1;
                    rlutil::setBackgroundColor(rlutil::RED);
     locate(20,18);
cout<<"Obtuviste 3 Puntos !";
}
else{
    cout<<"Obtuviste 2 Puntos !";
}
}
        else{
          if(Num[2]==Num_Lanz){
             Puntaje_Ronda=Puntaje_Ronda+1;
                 rlutil::setBackgroundColor(rlutil::RED);
     locate(15,18);
             cout<<"Obtuviste 2 Puntos !";
          }
        }
    }
else{
if(Num[1]==Num_Lanz){
        Puntaje_Ronda=Puntaje_Ronda+1;
if(Num[2]==Num_Lanz){
        Puntaje_Ronda=Puntaje_Ronda+1;
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
if(Num[2]==Num_Lanz){
        Puntaje_Ronda=Puntaje_Ronda+1;
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
	cout << "Puntaje de la ronda: "<< Puntaje_Ronda;
locate(1,3);
 cout << "VECES QUE OBTUVO BUNCO: "<< Total_Bunco;
    	    for(int x=1; x<=75; x++){
		gotoxy (x,4);
		putchar ('-');

	}
rlutil::setBackgroundColor(rlutil::RED);
 locate(1,30);
    system("pause");
   rlutil::setBackgroundColor(rlutil::RED);
 cls();
}
//Fin contando puntos
	Puntaje=Puntaje+Puntaje_Ronda;
rlutil::setBackgroundColor(rlutil::RED);
 //locate(1,30);
    //system("pause");
}
