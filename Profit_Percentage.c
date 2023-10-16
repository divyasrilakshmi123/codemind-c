#include<stdio.h>
int main()
{
  int cp,sp;
  float p,pp;
  scanf("%d%d",&cp,&sp);
  p=sp-cp;
  pp=(p/cp)*100;
  printf("%.2f",pp);
}