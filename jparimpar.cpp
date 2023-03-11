#include<stdio.h>
main()
{
	printf("Aluno:Matheus Italo De Araujo\nMatricula:\n");
	
	int p,d1,d2;
	
	scanf("%d %d %d", &p, &d1, &d2);
	
	
	if(p<0||p>1||d1<0||d1>5||d2<0||d2>5){
		return 0;
	}
	
	if((d1+d2)%2==0){
		if(p==0){
			printf(" 0 - Alice ganhadora\n");
		}
		else{
			printf(" 1 - Bob ganhador\n");
		}
	}
	else{
		if(p==0){
			printf("1 - Bob ganhador\n");
		}
		else{
			printf("0 - Alice ganhadora\n");
		}
	}
}
