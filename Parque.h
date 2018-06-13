#ifndef PARQUE
#define PARQUE
#include "Datos.h"
#include <vector>
#include <iostream>
using namespace std;


class Parque {
  public:
    Parque();
    ~Parque();

    vector<int> busquedaExhaustiva(const int** espera, int m, int n, const int* disfrute, const int** traslado);
    vector<int> programacionDinamica(const int** espera, int m, int n, const int* disfrute, const int** traslado);
    vector<int> algoritmoAvido(const int** espera, int m, int n, const int* disfrute, const int** traslado);

  private:
    vector<int> fase(const int** espera, int m, int n, const int* disfrute, const int** traslado, int suma, int nvisitados, sigma<int>, int i, int j);
    Datos d;
    int Te;
    int Ts;

};
#endif
