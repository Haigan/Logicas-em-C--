#include<stdio.h>
main()
{
	printf("Aluno:Matheus Italo De Araujo\nMatricula:\n");
	
	int bolos=0,A,B,C;
	
	scanf("%d",&A);
	
	if(A<1||A>100){
		return 0;
	}
	scanf("%d",&B);
	
	if(B<1||B>100){
		return 0;
	}
	scanf("%d",&C);
	
	if(C<1||C>100){
		return 0;
	}
	while(A>=2&&B>=3&&C>=5){
		bolos += 1; 
		A -= 2;
		B -= 3;
		C -= 5;
	}
	
	printf("%d",bolos);	
	
}
