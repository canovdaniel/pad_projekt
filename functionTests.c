#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "displayLibrary.h"
#include "hardwareLibrary.h"
#include "loggingLibrary.h"
#include "supportFunctionLibrary.h"

//CONSTANTS
#define SIZE 8
//VARIABLES
int a;
//ARRAYS

//PROTOTYPES
void numberSplitFunctionTest();
void displayLibraryTest();

int main(void) {
  while (1) {
  printf("\n");
  printf("######################################\n");
  printf("--TESTER--\n");
  printf("What function or library would you like to test?\n");
  printf("[1] numberSplitFunction\n");
  printf("[2] displayLibrary\n");
  printf("[Other number] = EXIT\n");
  scanf("%d", &a);
    switch (a) {
      case 1:
        numberSplitFunctionTest();
        break;
      case 2:
        displayLibraryTest();
        break;
      default:
        return 0;
        break;
    }
  }
}

void displayLibraryTest() {

  //Testing section for displayLibrary functions
  printf("\n");
  printf("######################################\n");
  printf("--TESTING SECTION FOR displayLibrary FUNCTIONS--\n");
  printf("\n");
  //Tests
      printf("--PROGRAM STATUS TEST--\n");
      printf("[1] = Normal\n");
      printf("[2]= inputError\n");
      printf("[3] = download\n");
      printf("[Other number] = EXIT\n");

    while (1<2) {
      int status;

      printf("Enter status number:  ");
      scanf("%d", &status);

      switch (status) {
        case 1:
          printf("Program Startup!\n");
          break;
        case 2:
          inputError();
          break;
        case 3:
          download();
          break;
        case 4:
          lowOxygen();
          break;
        case 5:
          lowOxygenAlarm();
          break;
        case 6:
          zahlenAusgabe(88);
        default:
          return;
          break;
      }
    }
    printf("\n");
    printf("######################################\n");
    printf("\n");
}

void numberSplitFunctionTest() {

    //Testing section for numberSplitFunction
    printf("\n");
    printf("######################################\n");
    printf("--TESTING SECTION FOR numberSplitFunction--\n");
    printf("\n");
    //Tests
    printf("Enter a number[00-99]: ");
    scanf("%d", &splitNumberVariable);

    numberSplitFunction(splitNumberVariable);
    for (size_t i = 0; i < 2; i++) {
      printf("%d", splitArray[i] );
    }
    printf("\n");
    printf("######################################\n");
    printf("\n");
}
