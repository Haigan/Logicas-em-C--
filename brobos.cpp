#include<stdio.h>
main()
{
	printf("Aluno:Matheus Italo De Araujo\nMatricula:\n");
	
	int n,pt;
	
	scanf("%d", &n);
	
	
	if (n <= 800){
		pt=1;
	}
	if( 800 < n && n <= 1400){
		pt=2;
	}
	if(1400 < n && n <= 2000){
		pt=3;
	}
	if(0>=n||2000<n){
		return 0;
	}
	 printf("%d",pt);
}
