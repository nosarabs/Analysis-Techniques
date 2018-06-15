#include "Parque.h"
using namespace std;
Parque::Parque() {

}

Parque::~Parque() {

}

vector<int> Parque::busquedaExhaustiva(const int** espera, int m, int n, const int* disfrute, const int** traslado) {
  vector<int> solucion((d.m)/2, 0);
  vector<int> sigma((d.m)/2, 0);
   Ts = 36;
   Te = 0;
  fase(d.espera, d.m, d.n, d.disfrute, d.traslado, Te, 0, sigma, 1, 1,solucion);

  for(int i=0;i<10;i++)
      cout<<solucion[i];

}

vector<int> Parque::programacionDinamica(const int** espera, int m, int n, const int* disfrute, const int** traslado) {

}

vector<int> Parque::algoritmoAvido(const int** espera, int m, int n, const int* disfrute, const int** traslado) {

}

vector<int> Parque::fase(const int** espera, int m, int n, const int* disfrute, const int** traslado, int suma, int nvisitados, vector<int> sigma, int i, int j, vector<int> &solucion) {
    bool usado[9]={0,0,0,0,0,0,0,0,0};

    if (suma >= Ts || j>8 ||suma+traslado[j][8]>=Ts) {
      return sigma;
    }
    if(j==sigma[i-1]){
        ++j;
    }
    sigma[i]=j;
    ++nvisitados;


    if(i==1){
        suma+=traslado[0][sigma[i]-1];
    }

    if(sigma[i]<9){
        fase(espera, m, n, disfrute, traslado, suma+d.espera[suma][sigma[i]-1] + d.disfrute[sigma[i]-1] + d.traslado[sigma[i]][j], nvisitados, sigma, i+1, 1,solucion);
        if(sizeSol < nvisitados){
            sizeSol = nvisitados;
            solucion = sigma;
        }
    }
    if((j+1)<9)
        if(i==1){
            suma-=traslado[0][sigma[i]-1];
        }

        fase(espera, m, n, disfrute, traslado, suma, nvisitados, sigma, i, j+1,solucion);
    return sigma;



}


bool invalid(std::vector<int>vec){

    for(int i=1;i<17;i++){
        if(vec[i-1]==vec[i])
            return false;
    }
    return true;
}
