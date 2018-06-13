#include "Parque.h"

Parque::Parque() {

}

Parque::~Parque() {

}

std::vector<int> Parque::busquedaExhaustiva(const int** espera, int m, int n, const int* disfrute, const int** traslado) {
  vector<int> sigma((d.m)/2, 0);
  int Ts = 0;
  int Te = 0;
  fase(d.espera, d.m, d.n, d.disfrute, d.traslado, 0, 0, sigma, 0, 1);

}

std::vector<int> Parque::programacionDinamica(const int** espera, int m, int n, const int* disfrute, const int** traslado) {

}

std::vector<int> Parque::algoritmoAvido(const int** espera, int m, int n, const int* disfrute, const int** traslado) {

}

std::vector<int> fase(const int** espera, int m, int n, const int* disfrute, const int** traslado, int suma, int nvisitados, sigma, int i, int j) {

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
    ++nvisitas;
    fase(const int** espera, int m, int n, const int* disfrute, const int** traslado, int suma, int nvisitados, sigma, int i+1, int j); // Hay que actualizar los parametros
    suma = suma + d.traslado[sigma[i]-1][8];
  }
}
