#include<stdio.h>

int main ()
{
	int a , b , r ;
	
	printf("\tTESTER SI DEUX ENTIERS a ET b SONT PREMIER ENTRE EUX\nEntrez la valeur de a :");//Presentation du programme
	scanf("%d", &a );
	printf("Entrez la valeur de b :");
	scanf("%d", &b );
	
	//premier entre eux si pgcd egale 1
	do
	{
		r = (a % b) ;
		a = b ;
		b = r ;
		r = ( a % b );	
	}while( r != 0 ) ; //Desormais, b est le dernier reste non nulle (le pgcd)
	
	if( b == 1 )
	{
		printf("a et b sont premier entre eux\n");
	}
			
		else
		{
		printf("a et b ne sont pas premier entre eux\n");
		}
		
	return (0);
}

