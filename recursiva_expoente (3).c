#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int mdc (int x, int y);
int main()
{int x,y;
printf("Informe o valor de x e y:\n");
scanf("%d %d",&x,&y);
printf ("%d",mdc(x,y));

return 0;
}

int mdc (int x, int y)
{
    if (y%2==0 &&x%2==0)
    return 2;
    if (x%y==0);
    return y;

}

/*
O m�ximo divisor comum dos inteiros x e y � o maior inteiro que
divide x e y sem gerar resto. Escreva uma fun��o recursiva mdc
que retorne o m�ximo divisor comum de x e y
*/
