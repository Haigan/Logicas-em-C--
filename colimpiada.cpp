#include<stdio.h>
main()
{
	printf("Aluno:Matheus Italo De Araujo\nMatricula:");
	
	int n,i,tp=0,tm=0,ca,solicp,solicm;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &ca);
		if(ca == 1){
			tp++;
		}
		if(ca == 2){
			tm++;
		}
	}
	
	scanf("%d" , &solicp);
	scanf("%d" , &solicm);
	
	if(solicp == tp && solicm == tm)
	printf("S");
	else
	printf("N");
	
	
}
