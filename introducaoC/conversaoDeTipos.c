#include <stdio.h>

int main(){
	float pi = 3.1415;
	int a;

	a = (int)pi;//converte a variavel pi de float para int

	printf("\nValor de Pi: %.4f", pi);
	printf("\nValor de Pi apos converter o tipo, de float para int: %d\n", a);

	int x, y;

	printf("\n\nDigite um numero natural:");
	scanf("%d",&x);
	printf("\nDigite outro numero natural:");
	scanf("%d",&y);

	//(float)x  (float)y converte as variaveis x e y de int para float

	printf("\n\nSoma x + y = %f",(float)x + (float)y);
	printf("\nSubtracao x - y = %f",(float)x - (float)y);
	printf("\nMultiplicacao x * y = %f",(float)x * (float)y);
	printf("\nDivisao x / y = %f\n\n",(float)x / (float)y);//para retirar o % do final do codigo coloque \n e coloque mais um para quebrar linha

	return 0;
}
