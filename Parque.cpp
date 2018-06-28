#include "Parque.h"
using namespace std;
Parque::Parque() {

}

Parque::~Parque() {

}

vector<int> Parque::busquedaExhaustiva(const int** espera, int m, int n, const int* disfrute, const int** traslado) {
  vector<int> solucion((d.m)/2, 0);
  vector<int> sigma((d.m)/2, 0);
  int cont = 0;
  m = m-1;
  nMax = fase(espera,m,n,disfrute,traslado, 0, 0, sigma, 1,solucion);
  return solucion;
}

vector<int> Parque::programacionDinamica(const int** espera, int m, int n, const int* disfrute, const int** traslado) {

}

vector<int> Parque::algoritmoAvido(const int** espera, int m, int n, const int* disfrute, const int** traslado) {

}

int Parque::fase(const int** espera, int m, int n, const int* disfrute,const int** traslado, int Sacum, int nvisitados, vector<int> sigma, int i, vector<int> &solucion) {
    vector<bool> visitados(n, false);
    if(Sacum >= m || (Sacum + traslado[sigma[i-1]][n]) >= m){
        return nvisitados;
    }else{
        for(int j=1; j<=n; ++j){
            Sacum += traslado[sigma[i-1]][j];
            if(visitados[j] == false && (Sacum + espera[Sacum][j-1]+disfrute[j-1]) < m && sigma[i-1]!=j){
                visitados[j] = true;
                sigma[i] = j;
                ++nvisitados;
                int nAct = fase(espera,m,n,disfrute,traslado,Sacum + espera[Sacum][j-1]+disfrute[j-1],nvisitados,sigma,i+1,solucion);
                if(nAct > nMax){
                    nMax = nAct;
                    solucion = sigma;
                }
                visitados[j] = false;
            }
            Sacum -= traslado[sigma[i-1]][j];
        }
        sigma = solucion;
    }
    return nMax;
    //return nvisitados;
}

/*
void Parque::oraculo (const int** espera, const int* disfrute, const int** traslado)
    {
        int maxDis = 0;
        int maxAct = 0;

        for (int i = tFinal-1; i >= 0 ; i--)
        {
            for(int j = 0; j < cantAtracciones; j++)
            {
                if(i + traslado[j+1][cantAtracciones] == tFinal)
                    oraculoD[i][j] = 1;
                else if( i + traslado[j+1][cantAtracciones] > tFinal || i < traslado[0][j] + espera[traslado[0][j]][j] + disfrute[j])
                    oraculoD[i][j] = 0;
                else
                {
                    maxAct = 0;
                    maxDis = 0;
                    oraculoD[i][j] = 1;

                    for (int k = 0; k < cantAtracciones; k++)
                    {
                        if(traslado[j+1][k] + i < tFinal  &&  j != k)// si el traslado mas el tiempo i  y si no se ha visitado esa atraccion
                        {
                            if(i + traslado[j+1][k] + espera[traslado[j+1][k] + i][k] + disfrute[k] < tFinal)// si el tiempo i mas el traslado mas la espera mas el disfrute no se han pasado del tiempo que dispone para estar en el parque
                            {
                                maxDis = oraculoD [ i + traslado[j+1][k] + espera[traslado[j+1][k] + i] [k] + disfrute[k]][k];
                                if(maxDis >  maxAct)
                                {
                                    maxAct = maxDis;
                                    horaD[i][j] = i + traslado[j+1][k] + espera[traslado[j+1][k] + i][k] + disfrute[k];
                                    atraccionesD [i][j]= k;
                                }
                            }
                        }
                    }

                    oraculoD[i][j] = oraculoD[i][j] + maxAct;
                }
            }
        }
    }
*/
