#include<stdio.h>
int main ()
{
	int var1=5,var2=2,resultado=0;
	
	//igual a ?
	resultado=var1 == var2;
	printf("%d == %d=%d\n",var1,var2,resultado);
	
	//menor igual que?	
	resultado=var1 <= var2;
	printf("%d <= %d=%d\n",var1,var2,resultado);
	
	//mayor que?
	resultado=var1 > var2;
	printf("%d > %d=%d\n",var1,var2,resultado);
	
	//diferente de ?
	resultado=var1 != var2;
	printf("%d != %d=%d\n",var1,var2,resultado);
	
}
