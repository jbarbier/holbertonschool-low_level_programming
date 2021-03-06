#include <stdio.h>

int shell_comp(char *s1, char *s2);

int main(void)
{
  int r;
  r = shell_comp("a", "a");
  printf("a, a\n");
  printf("Result: %d\n", r);
  printf("Expected: 1\n");
  r = shell_comp("aa", "a");
  printf("aa, a\n");
  printf("Result: %d\n", r);
  printf("Expected: 0\n");
  r = shell_comp("aaa", "a");
  printf("aaa, a\n");
  printf("Result: %d\n", r);
  printf("Expected: 0\n");
  r = shell_comp("a", "aa");
  printf("a, aa\n");
  printf("Result: %d\n", r);
  printf("Expected: 0\n");
  r = shell_comp("ab", "ab");
  printf("ab, ab\n");
  printf("Result: %d\n", r);
  printf("Expected: 1\n");
  r = shell_comp("abc", "*");
  printf("abc, *\n");
  printf("Result: %d\n", r);
  printf("Expected: 1\n");
  r = shell_comp("abc", "****");
  printf("abc, ****\n");
  printf("Result: %d\n", r);
  printf("Expected: 1\n");
  r = shell_comp("ab", "a*");
  printf("ab, a*\n");
  printf("Result: %d\n", r);
  printf("Expected: 1\n");
  r = shell_comp("ab", "*a");
  printf("ab, *a\n");
  printf("Result: %d\n", r);
  printf("Expected: 0\n");
  r = shell_comp("ab", "*c");
  printf("ab, *c\n");
  printf("Result: %d\n", r);
  printf("Expected: 0\n");
  r = shell_comp("ab", "*b");
  printf("ab, *b\n");
  printf("Result: %d\n", r);
  printf("Expected: 1\n");
  r = shell_comp("xyza", "*a");
  printf("xyza, *a\n");
  printf("Result: %d\n", r);
  printf("Expected: 1\n");
  r = shell_comp("main.c", "*m*a*i*n*.*c*");
  printf("main.c, *m*a*i*n*.*c*\n");
  printf("Result: %d\n", r);
  printf("Expected: 1\n");
  r = shell_comp("mainmain", "ma*");
  printf("mainmain, ma*\n");
  printf("Result: %d\n", r);
  printf("Expected: 1\n");
  r = shell_comp("inn", "*n");
  printf("inn, *n\n");
  printf("Result: %d\n", r);
  printf("Expected: 1\n");
  r = shell_comp("ma-main.c", "ma*in.c");
  printf("ma-main.c, ma*in.c\n");
  printf("Result: %d\n", r);
  printf("Expected: 1\n");
  r = shell_comp("imain.c", "ma*in.c");
  printf("imain.c, ma*in.c\n");
  printf("Result: %d\n", r);
  printf("Expected: 0\n");
  r = shell_comp("imain.c", "*in.c");
  printf("imain.c, *in.c\n");
  printf("Result: %d\n", r);
  printf("Expected: 1\n");
  r = shell_comp("b", "a*");
  printf("b, a*\n");
  printf("Result: %d\n", r);
  printf("Expected: 0\n");
  r = shell_comp("n.c", "*in.c");
  printf("n.c, *in.c\n");
  printf("Result: %d\n", r);
  printf("Expected: 0\n");
  r = shell_comp("b", "");
  printf("b, ''\n");
  printf("Result: %d\n", r);
  printf("Expected: 0\n");
  r = shell_comp("bb", "*ab");
  printf("bb, *ab\n");
  printf("Result: %d\n", r);
  printf("Expected: 0\n");
  r = shell_comp("ab", "*a");
  printf("ab, *a\n");
  printf("Result: %d\n", r);
  printf("Expected: 0\n");
  r = shell_comp("abb", "*ab");
  printf("abb, *ab\n");
  printf("Result: %d\n", r);
  printf("Expected: 0\n");
  printf("---------------------------\n");
  r = shell_comp("main.c", "*.c");
  printf("%d\n", r);
  r = shell_comp("main.c", "m*a*i*n*.*c*");
  printf("%d\n", r);
  r = shell_comp("main.c", "main.c");
  printf("%d\n", r);
  r = shell_comp("main.c", "m*c");
  printf("%d\n", r);
  r = shell_comp("main.c", "ma********************************c");
  printf("%d\n", r);
  r = shell_comp("main.c", "*");
  printf("%d\n", r);
  r = shell_comp("main.c", "***");
  printf("%d\n", r);
  r = shell_comp("main.c", "m.*c");
  printf("%d\n", r);
  r = shell_comp("main.c", "**.*c");
  printf("%d\n", r);
  r = shell_comp("main-main.c", "ma*in.c");
  printf("%d\n", r);
  return (0);
}
