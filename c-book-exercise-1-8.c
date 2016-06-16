#include <stdio.h>
/* count line, blank, space in input */
main(){
  int c, nl, t, bl;
  nl = 0;
  t = 0;
  bl = 0;
  while ((c=getchar()) != EOF){
	if (c=='\n')
	  ++nl;
	if (c==' ')
	  ++bl;
	if (c=='\t')
	  ++t;
  }
  printf("new lines: %d\nblanks: %d\ntabs: %d\n", nl, bl, t);
}
