//HAILSTONE SERIES
#include <stdio.h>
int hailstone(int a);
int main()
{
int x;
scanf("%d", &x);
int i;
hailstone(x);
}
void hailstone(int a)
{
    printf("%d ", a);
    if(a == 1 || a == 0)
    {
    return a;
    }
    else if (a%2 == 0)
    {
      return hailstone(a/2);
    }
    else if (a%2 != 0)
    {
     return hailstone(3 * a + 1);
    }
}
