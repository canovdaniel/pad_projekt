#ifndef displayLibrary

//definitions
#define SIZE 8

//functions
void inputError()
{
  //InputError - No signal comming from Sensor -
  //Display NI on 8x8 LedMatrix color red

  char ledMatrixInputError[SIZE][SIZE] =
  {
  {'-','-','-','-','-','-','-','-'},
  {'-','-','-','-','-','-','-','-'},
  {'-','-','-','-','-','-','-','-'},
  {'-','R','-','-','R','-','R','-'},
  {'-','R','R','-','R','-','R','-'},
  {'-','R','-','R','R','-','R','-'},
  {'-','R','-','-','R','-','R','-'},
  {'-','R','-','-','R','-','R','-'}
};
  for (size_t i = 0; i < SIZE; i++) {
    for (size_t j = 0; j < SIZE; j++) {
      printf("%c", ledMatrixInputError[i][j]);
      printf("  ");
    }
    printf("\n");
  }
}

void zahlenAusgabe()
{

}

void download()
{
  char ledMatrixDownloadArrow[SIZE][SIZE] =
  {
  {'-','-','-','G','G','-','-','-'},
  {'-','-','-','G','G','-','-','-'},
  {'-','-','-','G','G','-','-','-'},
  {'G','-','-','G','G','-','-','G'},
  {'-','G','-','G','G','-','G','-'},
  {'-','-','G','G','G','G','-','-'},
  {'-','-','-','G','G','-','-','-'}
};
    for (size_t i = 0; i < SIZE; i++) {
      for (size_t j = 0; j < SIZE; j++) {
        printf("%c", ledMatrixDownloadArrow[i][j]);
        printf("  ");
      }
      printf("\n");
    }
  }


void lowOxygen()
{

}

void lowOxygenAlarm()
{

}

#define displayLibrary
#endif
