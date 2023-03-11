#include<stdio.h>
main()
{
	printf("Aluno:Matheus Italo De Araujo\nMatricula:\n");
	
	int j,c,x,m;
	
	scanf("%d",&j);
	
	if(j<0||j>100){
		return 0;
	}
	scanf("%d",&c);
	
	if(c<0||c>100){
		return 0;
	}

	m = j/2;
	x = (c-m) * 2;
	
	if(j==1){
		x--;
	}
	printf("%d",x);
}
