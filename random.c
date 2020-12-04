#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()

{

srand ( time(NULL) );

printf ("Um numero entre 0 e RAND_MAX (%d): %d\n", RAND_MAX, rand());

return 0;

}