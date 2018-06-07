#ifndef DATOS
#define DATOS
#include <iostream>
using namespace std;

class Datos {

  public:
    Datos(){};

    ~Datos(){};

    int m;
    int n;

    int * disfrute;


                                                  // T   S   B   CC  P  CL   D   S
    int ** espera = (int *[]) { /* 9:00 */ (int []) {5,  5,  10, 0,  0,  0,  0,  0},
                                /* 9:05 */ (int []) {5,  5,  5,  0,  0,  0,  0,  0},
                                /* 9:10 */ (int []) {5,  5,  0,  0,  0,  0,  0,  0},
                                /* 9:15 */ (int []) {5,  10, 0,  0,  0,  5,  0,  0},
                                /* 9:20 */ (int []) {5,  10, 0,  0,  5,  5,  0,  0},
                                /* 9:25 */ (int []) {5,  15, 0,  0,  10, 5,  0,  0},
                                /* 9:30 */ (int []) {5,  10, 0,  0,  5,  5,  0,  0},
                                /* 9:35 */ (int []) {5,  15, 0,  0,  10, 5,  0,  0},
                                /* 9:40 */ (int []) {5,  15, 0,  0,  5,  5,  0,  0},
                                /* 9:45 */ (int []) {5,  15, 0,  0,  5,  5,  5,  0},
                                /* 9:50 */ (int []) {5,  10, 0,  5,  5,  5,  5,  0},
                                /* 9:55 */ (int []) {5,  10, 0,  0,  5,  5,  5,  5},
                               /* 10:00 */ (int []) {5,  10, 0,  5,  0,  10, 5,  5},
                               /* 10:05 */ (int []) {5,  15, 0,  0,  5,  10, 5,  5},
                               /* 10:10 */ (int []) {5,  20, 0,  0,  5,  10, 10, 10},
                               /* 10:15 */ (int []) {5,  15, 0,  0,  5,  10, 5,  5},
                               /* 10:20 */ (int []) {5,  20, 0,  0,  5,  10, 5,  10},
                               /* 10:25 */ (int []) {5,  25, 0,  0,  10, 5,  5,  10},
                               /* 10:30 */ (int []) {10, 20, 0,  0,  15, 10, 5,  5},
                               /* 10:35 */ (int []) {5,  20, 0,  0,  20, 5,  5,  10},
                               /* 10:40 */ (int []) {5,  25, 0,  0,  15, 5,  5,  15},
                               /* 10:45 */ (int []) {5,  20, 0,  0,  15, 5,  5,  10},
                               /* 10:50 */ (int []) {5,  20, 5,  0,  10, 15, 5,  15},
                               /* 10:55 */ (int []) {5,  20, 0,  0,  20, 10, 10, 10},
                               /* 11:00 */ (int []) {5,  20, 5,  0,  20, 15, 5,  10},
                               /* 11:05 */ (int []) {5,  25, 0,  0,  15, 15, 5,  5},
                               /* 11:10 */ (int []) {5,  40, 0,  5,  15, 10, 5,  10},
                               /* 11:15 */ (int []) {5,  25, 0,  5,  15, 10, 5,  5},
                               /* 11:20 */ (int []) {10, 20, 0,  0,  15, 10, 5,  10},
                               /* 11:25 */ (int []) {5,  20, 0,  5,  20, 10, 10, 5},
                               /* 11:30 */ (int []) {5,  20, 0,  5,  20, 10, 10, 5},
                               /* 11:35 */ (int []) {5,  25, 5,  0,  20, 15, 5,  10},
                               /* 11:40 */ (int []) {5,  25, 0,  0,  15, 15, 5,  10},
                               /* 11:45 */ (int []) {5,  20, 0,  0,  10, 10, 5,  15},
                               /* 11:50 */ (int []) {5,  25, 5,  0,  20, 5,  5,  10},
                               /* 11:55 */ (int []) {5,  20, 0,  5,  15, 10, 5,  15},
                               };


                                              //        IN T  S  B  CC P  CL D  S  OUT
    int ** traslado = (int *[]) { /* IN */    (int []) {0, 0, 3, 4, 5, 6, 7, 8, 9, 10},
                                  /* T */     (int []) {1, 0, 3, 4, 5, 6, 7, 8, 9, 10},
                                  /* S */     (int []) {1, 0, 0, 4, 5, 6, 7, 8, 9, 10},
                                  /* B */     (int []) {1, 0, 3, 0, 5, 6, 7, 8, 9, 10},
                                  /* CC */    (int []) {1, 0, 3, 4, 0, 6, 7, 8, 9, 10},
                                  /* P */     (int []) {1, 0, 3, 4, 5, 0, 7, 8, 9, 10},
                                  /* CL */    (int []) {1, 0, 3, 4, 5, 6, 0, 8, 9, 10},
                                  /* D */     (int []) {1, 0, 3, 4, 5, 6, 7, 0, 9, 10},
                                  /* S */     (int []) {1, 0, 3, 4, 5, 6, 7, 8, 0, 10},
                                  /* OUT */   (int []) {1, 0, 3, 4, 5, 6, 7, 8, 9, 0},
                                };




};
#endif
