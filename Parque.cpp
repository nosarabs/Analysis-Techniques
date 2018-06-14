#include "Parque.h"
using namespace std;
Parque::Parque() {

}

Parque::~Parque() {

}

vector<int> Parque::busquedaExhaustiva(const int** espera, int m, int n, const int* disfrute, const int** traslado) {
  vector<int> sigma((d.m)/2, 0);
  int Ts = 0;
  int Te = 0;
  fase(d.espera, d.m, d.n, d.disfrute, d.traslado, 0, 0, sigma, 0, 1);

}

vector<int> Parque::programacionDinamica(const int** espera, int m, int n, const int* disfrute, const int** traslado) {

}

vector<int> Parque::algoritmoAvido(const int** espera, int m, int n, const int* disfrute, const int** traslado) {

}

vector<int> Parque::fase(const int** espera, int m, int n, const int* disfrute, const int** traslado, int suma, int nvisitados, vector<int> sigma, int i, int j) {

    if (suma > Ts) {
      return sigma;
    }
    if (i == 0) {
      suma = Te + d.traslado[0][sigma[i]];
    }
    sigma[i] = j;
    int contador = 1;
    while (contador == j) {
        ++contador;
    }
    j = contador;

    suma = d.espera[suma][sigma[i]-1] + d.disfrute[sigma[i]-1] + d.traslado[sigma[i]][j];

    if (suma + d.traslado[sigma[i]][8] <= Ts) {
        ++nvisitados;
        fase(espera, m, n, disfrute, traslado, suma, nvisitados, sigma, i+1, j);
        suma = suma + d.traslado[sigma[i]-1][8];
    }
}
