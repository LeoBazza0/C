/* legge la riga di comando due interi, n e q,
e genera un array di n interi ciascuno compreso fra 0 e q-1, a caso.
 Dopo averlo generato lo stampa */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void stampa_array (int *a, int n) {
  printf("[");
  for (int i=0; i<n; i++) printf (" %d", a[i])
}

int main (int argc, char **argv) {
//argv[i] è il vecchio os.Args[i]
int n, q;
n = atoi(argv[1]);
q = atoi(argv[2]);

int *a;
a = (int *)malloc(n * sizeof(int))
printf("n=%d, q=%d \n", n, q);
stampa_array(a, n)
free(a)
return 0;
}
