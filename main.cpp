#include "Datos.h"
#include "Parque.h"
#include <iostream>
#include<time.h>
using namespace std;

int main() {
  Datos d;
  Parque p;
  clock_t timer;
  vector<int> s((d.m)/2, 0);
  timer = clock();
  s = p.busquedaExhaustiva(d.espera,13,8,d.disfrute,d.traslado);
  timer = (clock()-timer);
  for(int i=0; i<18;++i){
      if(s[i]!= 0){
           cout<< s[i]<<" ";
      }
  }
  cout<<"\nTomo un tiempo de: "<<((float)timer)/CLOCKS_PER_SEC<<endl;
  return 0;
}
