#include<stdio.h>
int main(){
  int tab[]={2,4,6,8};
  int somme =0;
  for(int i=0; i<4;i++)
      somme += tab[i];
  printf("La somme est : %d\n",somme);
  return 0;
}
