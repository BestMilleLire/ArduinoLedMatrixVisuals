#include "LedControl.h"
#include <binary.h>

LedControl lc=LedControl(12,10,11,1); 

int aux0 = 0;
int aux1 = 1;
int aux2 = 2;
int aux3 = 3;
int aux4 = 4;
int aux5 = 5;
int aux6 = 6;
int aux7 = 7;
int con0 = B10000000;
int con1 = B01000000;
int con2 = B00100000;
int con3 = B00010000;
int con4 = B00001000;
int con5 = B00000100;
int con6 = B00000010;
int con7 = B00000001;

void setup() {

lc.shutdown(0,false);
lc.setIntensity(0,8);

}

void loop() {

delay(60);
lc.clearDisplay(0);

lc.setRow(0,aux0,con0);
lc.setColumn(0,aux0,con0);

if(aux6 >= 8){
  lc.setRow(0,aux7,con7);
  lc.setColumn(0,aux7,con7);
  aux7++;
}

if(aux5 >= 7){
  lc.setRow(0,aux6,con6);
  lc.setColumn(0,aux6,con6);
  aux6++;
}

if(aux4 >= 6){
  lc.setRow(0,aux5,con5);
  lc.setColumn(0,aux5,con5);
  aux5++;
}

if(aux3 >= 5){
  lc.setRow(0,aux4,con4);
  lc.setColumn(0,aux4,con4);
  aux4++;
}

if(aux2 >= 4){
  lc.setRow(0,aux3,con3);
  lc.setColumn(0,aux3,con3);
  aux3++;
}

if(aux1 >= 3){
  lc.setRow(0,aux2,con2);
  lc.setColumn(0,aux2,con2);
  aux2++;
}

if(aux0 >= 2){
  lc.setRow(0,aux1,con1);
  lc.setColumn(0,aux1,con1);
  aux1++;
}

aux0++;

if(aux7 > 8){
  aux0 = 0;
  aux1 = 1;
  aux2 = 2;
  aux3 = 3;
  aux4 = 4;
  aux5 = 5;
  aux6 = 6;
  aux7 = 7;
}

}
