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

void zahlenAusgabeMark1(int zahl)
{
  int zahlLeft;
  int zahlRight;
  char leftArray[5][3];
  char rightArray[5][3];

  //Defining number Array for Matrix
  char displayNumberZero[5][3] = {{'O','O','O'}, {'O','-','O'},{'O','-','O'},{'O','-','O'},{'O','O','O'}};
  char displayNumberOne[5][3] = {{'-','-','O'}, {'-','-','O'},{'-','-','O'},{'-','-','O'},{'-','-','O'}};
  char displayNumberTwo[5][3] = {{'O','O','O'}, {'-','-','O'},{'O','O','O'},{'O','-','-'},{'O','O','O'}};
  char displayNumberThree[5][3] = {{'O','O','O'}, {'-','-','O'},{'-','O','O'},{'-','-','O'},{'O','O','O'}};
  char displayNumberFour[5][3] = {{'O','-','O'}, {'O','-','O'},{'O','O','O'},{'-','-','O'},{'-','-','O'}};
  char displayNumberFive[5][3] = {{'O','O','O'}, {'O','-','-'},{'O','O','O'},{'-','-','O'},{'O','O','O'}};
  char displayNumberSix[5][3] = {{'O','O','O'}, {'O','-','-'},{'O','O','O'},{'O','-','O'},{'O','O','O'}};
  char displayNumberSeven[5][3] = {{'O','O','O'}, {'-','-','O'},{'-','-','O'},{'-','-','O'},{'-','-','O'}};
  char displayNumberEight[5][3] = {{'O','O','O'}, {'O','-','O'},{'O','O','O'},{'O','-','O'},{'O','O','O'}};
  char displayNumberNine[5][3] = {{'O','O','O'}, {'O','-','O'},{'O','O','O'},{'-','-','O'},{'O','O','O'}};

  //Defining basic 8x8 Matrix
  char ledMatrix[SIZE][SIZE] =
  {
  {'-','-','-','-','-','-','-','-'},
  {'-','-','-','-','-','-','-','-'},
  {'-','-','-','-','-','-','-','-'},
  {'-','-','-','-','-','-','-','-'},
  {'-','-','-','-','-','-','-','-'},
  {'-','-','-','-','-','-','-','-'},
  {'-','-','-','-','-','-','-','-'},
  {'-','-','-','-','-','-','-','-'}
  };

//Spliting number
  numberSplitFunction(zahl);
  zahlLeft =+ splitArray[0];
  zahlRight =+ splitArray[1];

//Switch for left nummber
switch (zahlLeft) {
case 0:
  leftArray[5][3] =+ displayNumberZero[5][3];
  break;
case 1:
  leftArray[5][3] =+ displayNumberOne[5][3];
  break;
case 2:
  leftArray[5][3] =+ displayNumberTwo[5][3];
  break;
case 3:
  leftArray[5][3] =+ displayNumberThree[5][3];
  break;
case 4:
  leftArray[5][3] =+ displayNumberFour[5][3];
  break;
case 5:
  leftArray[5][3] =+ displayNumberFive[5][3];
  break;
case 6:
  leftArray[5][3] =+ displayNumberSix[5][3];
  break;
case 7:
  leftArray[5][3] =+ displayNumberSeven[5][3];
  break;
case 8:
  leftArray[5][3] =+ displayNumberEight[5][3];
  break;
case 9:
  leftArray[5][3] =+ displayNumberNine[5][3];
default:
  printf("Error! Falsche eingabe!\n");
}

//Switch for right nummber
switch (zahlLeft) {
case 0:
  rightArray[5][3] =+ displayNumberZero[5][3];
  break;
case 1:
  rightArray[5][3] =+ displayNumberOne[5][3];
  break;
case 2:
  rightArray[5][3] =+ displayNumberTwo[5][3];
  break;
case 3:
  rightArray[5][3] =+ displayNumberThree[5][3];
  break;
case 4:
  rightArray[5][3] =+ displayNumberFour[5][3];
  break;
case 5:
  rightArray[5][3] =+ displayNumberFive[5][3];
  break;
case 6:
  rightArray[5][3] =+ displayNumberSix[5][3];
  break;
case 7:
  rightArray[5][3] =+ displayNumberSeven[5][3];
  break;
case 8:
  rightArray[5][3] =+ displayNumberEight[5][3];
  break;
case 9:
  rightArray[5][3] =+displayNumberNine[5][3];
default:
  printf("Error! Falsche eingabe!\n");
}


for (size_t l = 0; l < 3; l++) {
  for (size_t m = 0; m < SIZE; m++) {
    printf("%c", ledMatrix[l][m]);
    printf("  ");
  }
  printf("\n");
}
for (size_t i = 0; i < 5; i++)
{
  for (size_t o = 0; o < 2; o++) {
    printf("%c", ledMatrix[i][o]);
    printf("  ");
  }
  for (size_t j = 0; j < 3; j++)
  {
    printf("%c", leftArray[i][j]);
    printf("  ");
  }
  for (size_t k = 0; k < 3; k++)
  {
    printf("%c", rightArray[i][k]);
    printf("  ");
  }
  printf("\n");
}

}
