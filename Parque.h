
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
    int fase(const int** espera, int m, int n, const int* disfrute, const int** traslado, int Sacum, int nvisitados, vector<int> sigma, int i, vector<int> &solucion);
    void oraculo(const int** espera, const int* disfrute, const int** traslado);
    Datos d;
    int nMax = -1;

};
#endif
