#include<stdio.h>
main()
{
	printf("Aluno:Matheus Italo De Araujo\nMatricula:\n");
	
	int j,pa,P,cont,rest;

	scanf("%d",&j);
	
	if(j<10||j>1000){
		return 0;
	}
	scanf("%d",&P);
	
	if(P<2||P>18){
		return 0;
	}
	
	if(j%P==0){
		pa = j/P;
		while(P>0){
			printf("%d\n",pa);
			P--;
		}
	} else{
		rest = j%P;
		pa = j/P;
		while(rest>0){
			printf("%d\n",pa+1);
			P--;
			rest--;
		}
		while(P>0){
			printf("%d\n",pa);
			P--;
		}
	}
}
