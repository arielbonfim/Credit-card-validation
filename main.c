#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /* a lot of variables*/
    long n;
    long m;
    long o;
    int resto;
    int sum = 0;
    int sum2 = 0;
    int cont = 0;
    int bkpcont = 0;
    int ok = 0;
    string msg = "";
    /*get number*/
    do
    {
        n = get_long("Number: ");
    }
    while (n < 0);
m = n;
o = n;
/* do the math to test if number is valid */
  while(m/10 != 0)
  {
    m = m/10;
    resto = (m%10)*2;
    while(resto != 0)
    {
      sum=sum+(resto%10);
      resto /= 10;
    }
    m = m/10;
  }
  while(o/1 !=0)
  {
    sum2 = sum2 + (o%10);
    o = o/100;
  }
  if((sum + sum2)%10 == 0)
  {
    ok = 1;
    msg = ("ok");
  } else
  {
    msg = ("not ok");
  }
m=n;
/*get the number lenght*/
while(m != 0)
{
  m /= 10;
  cont ++;
}
m=n;
bkpcont = cont;
/*get the first two numbers*/
while(cont > 2)
{
  m /= 10;
  cont --;
}
/*naming the card*/
if (bkpcont == 15 && ok == 1 && (m == 34 || m == 37))
{
  printf("AMEX\n");
} else if(bkpcont == 16 && ok == 1 && m > 50 && m < 56)
{
  printf("MASTERCARD\n");
} else if ((bkpcont == 13 || bkpcont == 16) && ok == 1 && m/10 == 4)
{
  printf ("VISA\n");
} else
{
  printf("INVALID\n");
}
}
