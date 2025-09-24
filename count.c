#include<stdio.h>

main()
{
  long character_count, line_count, blank_count, tab_count;
  int c;

  character_count = 0;
  line_count = 1;
  blank_count = 0;
  tab_count = 0;

  while((c = getchar()) != EOF)
  {
    ++character_count;
    if(c == '\n')
    {
      ++line_count;
    }
    if(c == ' ')
    {
      ++blank_count;
    }
    if(c == '\t')
    {
      ++tab_count;
    }
  }
  printf("\n%ld characters\n%ld lines\n%ld blanks\n%ld tabs\n", character_count, line_count, blank_count, tab_count);
}
