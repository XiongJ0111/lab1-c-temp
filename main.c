// Author: Xinzhang Xiong xpx5059@psu.edu
// Collaborator:Alexander Barr ajb7463@psu.edu
// Collaborator:Jeremy Hoheneder jjh549@psu.edu
// Collaborator:Luke Heckman luke@psu.edu
// Section: 1
// Breakout: 15

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {

  char *tempstr = readline ("Enter temperature in celsius: ");

  double temp = atof(tempstr);
  double ferenTemp = temp*9/5 +32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.", temp, ferenTemp);

  return 0;
}