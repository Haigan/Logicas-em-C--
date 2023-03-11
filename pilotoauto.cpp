#include<stdio.h>
main()
{
	printf("Aluno:Matheus Italo De Araujo\nMatricula:\n");
	
	int a,b,c;
	
	scanf("%d %d %d", &a,&b,&c);
	
	if(a<0||b<a||c<b||c>500){
			return 0;
		}
	
	if((b-a)<(c-b)){
			printf("1");
		}
		if((b-a)>(c-b)){
			printf("-1");
		}
		if((b-a)==(c-b)){
			printf("0");
		}
}
