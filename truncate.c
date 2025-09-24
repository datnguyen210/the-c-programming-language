#include <stdio.h>

main()
{
  int c;
  int prev;

  while((c = getchar()) != EOF)
  {
    if(!(c == ' ' && prev == ' '))
    {
      putchar(c);
    };
    prev = c;
  }
}
