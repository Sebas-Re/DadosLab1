#ifndef PROYECTO_BUNCO1_0_FUNCIONES_H_INCLUDED
#define PROYECTO_BUNCO1_0_FUNCIONES_H_INCLUDED

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
using namespace rlutil;
#include "rlutil.h"

///FUNCIONES GENERALES  CON VECTORES

void ponerCero(int v[], int tam);/// pone en 0 todas las posiciones del vector

void cargarVector(int v[], int tam);//carga el vector manualmente

void cargarAleatorio(int v[], int tam, int limite);///asigna valores aleatorios a cada al vector

void mostrarVector(int v[], int tam);/// muestra lo que contiene cada una de las posiciones del vector

void mostrarVectorSiEsDistintoaCero(int v[], int tam);//muestra las posiciones del vector que no contengan cero.

int maximoenelVector(int v[], int tam);//devuelve el valor maximo de un vector

int maximoVector(int v[], int tam);//devuelve la posicion (primera) del maximo del vector

int minimoenelVector(int v[],int tam);//dvuelve el minimo de un vector

int minimoVector(int v[], int tam);///devuelve  la posici�n (primera) que ocupa el m�nimo en el vector

int contarNumerosRepetidos(int v[], int numero , int tam);///cuenta la cantidad de veces que se repite un n�mero en el vector

int sumarVector(int v[], int tam ); /// suma los valores contenidos en el vector

void copiarVector(int v[], int v2[],int tam ); ///copia el vector v en v2

void ordenarVector(int v[], int tam );/// ordena de menor a mayor.

void ordenarVectorDesendente(int v[], int tam );///ordena de mayor a menor

bool compararVectores(int v[], int v2[],int tam );// compara los dos vectores que recibe. Si son iguales ///devuelve true, si no devuelve false

int contadorPares(int v[],int tam);//recorre el vector buscando pares y devuelve cuantos hay.

int contadorImpares(int v[], int tam);//recorre el vector buscando impares y devuelve cuantos hay

///ESTRUCUTRA DE BUNCO

void Presentacion();//presentacion

int Menu();//Menu del juego,devuelve la opcion

void Opciones(int v,int Mganador[],int tam,char Jmaximo[],char Janterior[]);//desarrollo de las opciones del menu.

void instrucciones();//muestra las instrucciones del juego

void Findelprograma();//muestra los desarolladores y finaliza el programa

///NOMBRAR JUGADORES

char NombrarJugador(char v[],int tam);//Cargar un vector char.

char Nombrar2Jugadores(char Nombre1[], char Nombre2[] ,int tam);//carga dos vectores char.

char Mostrarchars(char v[],int tam);//Muestra vectores char.

///INTERFAZ DE DADOS

void recuadro(int x, int y, int ancho, int alto);//dibuja el recuadro para los dados

void DibujarDados(int nroDado, int valor);//dibuja los dados

void AnimacionDados(int v[],int tam);//muestra los dados cambiando de numeros

void MostrarDados(int v[],int  tam);//Muestra los dados presentando dado por dado.

void LanzamientoDeDados(int v[],int tam);//carga los dados aleatoriamente

///PUNTAJES

int CalcularPuntajeTirada(int v[],int  tam, int ronda);//Calcula los puntajes de las tiradas

int SonIguales(int v[], int tam,int ronda);//devuelve verdadero si todos los numeros del vector son iguales.

int Escalera(int v[], int tam);// devuelve verdadero si el vector es acendente.

int CoincideConRonda(int v[],int tam ,int  ronda);//devuelve cuantos dados coinciden con el numero de ronda

int Bunco(int v[],int tam,int ronda);//devuelve 21 si hay bunco

///FUNCIONES DE PARTIDAS

///FUNCIONES 1 JUGADOR

void Partida1Jugador(int Mganador[],int tam, char Jmaximo[]);//ejecucion de ronda completa de un jugador.

void Partida1JugadorManual();//ronda 1 jugador con carga de dados manual

void Cartel(char v[], int tam, int ronda , int UnJugador[], int tam1);//Muestra cartel con nomkbre jugador, n� de ronda , puntos acumulados

void FinDePartida1Jugador (char NombreJugador[], int UnJugador[], int tam, int PuntajeFinal, int Mganador[], int tam2, char Jmaximo[]);//no se si muestra el final de cada ronda o de partida

void FinDePartidaManual (char NombreJugador[], int UnJugador[], int tam, int PuntajeFinal);

void EntreRondasUnJug (char NombreJugador[], int UnJugador[], int tam, int i);

///FUNCIONES 2 JUGADORES

void DosJugadores(int Mganador[],int tam, char Jmaximo[]);//ejecucion de ronda dos jugadores.

void CalculoDeGanador (int PrimerJugador[], int SegundoJugador[], char Nombre_Primer_Jugador[], char Nombre_Segundo_Jugador[],int Mganador[], int tam, char Jmaximo[]);//calcula quien gano y lo muestra

void EntreRondas (char Nombre_Primer_Jugador[], int PrimerJugador[], char Nombre_Segundo_Jugador[], int SegundoJugador[], int Rondas, bool Jugador_Activo_2); ///EntreRondas 2 jugadores

void FinDepartida2J (int JugadorGanador[],char NombreGanador[]);//Cartel final para partida de dos jugadores

void MaximoJugadorGlobal(int Mganador[],int tam,char Jmaximo[],char Janterior[]);//Muestra el jgador que mas puntos hizo en total de todas las partidas








#endif // PROYECTO_BUNCO1_0_FUNCIONES_H_INCLUDED
