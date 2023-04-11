#include <stdio.h>
#define MAXLINE 1000 // MAXIMUM INPUT LINE SIZE


// prototypes for all our functionS

size_t getline(char line[], size_t maxline);
void copy(char to[], char from[]);

// print longest input lines

int main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;

  while ((len = getline(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }

  if (max  > 0)
    printf("%s", longest);
  return 0;
}


// getline: read a line into s, return lenght

size_t getline(char s[], size_t *lim)
{
  int c, i;

  for(i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

// copy from into to;

void copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\n')
    ++i;
}
