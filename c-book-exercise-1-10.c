#include <stdio.h>
/* copy input to output, replace tab with \t, backspace with \b, backslash with \ */
main()
{
  int input;
  while ((input = getchar()) != EOF) {
	if (input == '\b')
	  printf("\\b");
	if (input == '\t')
	  printf("\\t");
	if (input == '\\')
	  printf("\\");
  }
}
