#include<stdio.h>
#include<string.h>

void
traverse (char *x, char *y)
{
  char temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void
swap (char *a, int l, int r)
{
  int i;
  if (l == r)
    {
      printf ("%s\n", a);
    }
  else
    {
      for (i = l; i <= r; i++)
	{
	  traverse ((a + l), (a + i));
	  swap (a, l + 1, r);
	  traverse ((a + l), (a + i));
	}
    }
}

int main ()
{

  char str[] = "ABC";
  int n = strlen (str);

  swap (str, 0, n - 1);

  return 0;
}
