/*
Algorithme: Teste_Premier_entre_eux
Variable	a,b,r: entier;
Début:	
	ECRIRE("TESTER SI DEUX ENTIERS a ET b SONT PREMIER ENTRE EUX");*Presentation du programme*
	ECRIRE("Entrez la valeur de a :");
	LIRE(a);
	ECRIRE("Entrez la valeur de b :");
	LIRE(b);
 	*ils ne sont pas premier entre eux si a divise b*
	SI(a%b=0)ALORS
		ECRIRE("a et b ne sont pas premier entre eux");
		Fin ;*arreter le programme puisque a divise b *
	
		SINON
			FAIRE
				r←(a % b) ;
				a←b ;
				b←r ;
				r←(a%b);	
			TANTQUE(r<>0) ;
   			*Desormais, b est le dernier reste non nulle (le pgcd)*
      			*premier entre eux si pgcd egale 1*
      			SI(b=1)ALORS
				ECRIRE("a et b sont premier entre eux\n");
			
				SINON
					ECRIRE("a et b ne sont pas premier entre eux\n");
			FINSI
	FINSI	
Fin
*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int a,b,r;
	
	printf("\tTESTER SI DEUX ENTIERS a ET b SONT PREMIER ENTRE EUX\nEntrez la valeur de a :");//Presentation du programme
	scanf("%d",&a);
	printf("Entrez la valeur de b :");
	scanf("%d",&b);
	//ils ne sont pas premier entre eux si a divise b
	if(a%b==0)
	{
		printf("a et b ne sont pas premier entre eux\n");
		exit(0);//arreter le programme puisque a divise b 
	}
		else
		{
			do
			{
				r=(a % b) ;
				a=b ;
				b=r ;
				r=(a%b);	
			}
			while(r!=0) ;
			//Desormais, b est le dernier reste non nulle (le pgcd)
			//premier entre eux si pgcd egale 1
			if(b==1)
			{
				printf("a et b sont premier entre eux\n");
			}
				else
				{
					printf("a et b ne sont pas premier entre eux\n");
				}
		}	
	return (0);
}

