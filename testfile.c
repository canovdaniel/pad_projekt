#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "supportFunctionLibrary.h"

//CONSTANTS
#define SIZE 8
//VARIABLES
int zahl;
//PROTOTYPES
void zahlenAusgabeMark1(int zahl);

int main(void) {
  printf("Enter a number[00-99] to display on Led Matrix:  ");
  scanf("%d", &zahl);
  zahlenAusgabeMark1(zahl);
}
