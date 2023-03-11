#include<stdio.h>
main()
{
	printf("Aluno:Matheus Italo De Araujo\nMatricula:\n");
	
	int e1,e2,e3,x,r;
	
	scanf("%d %d %d %d", &e1,&e2,&e3,&x);
	
	if(e1<0||e2<e1||e2>10000||e3<0||e3>10000||x<0||x>1000){
		return 0;
	}
	
	r = e1 - e2;
	
	if(r<0){
		r = r * (-1);
	}
	if(r<=x){
		printf("%d",e2);
	}
	if(r>x){
		printf("%d",e3);
	}
	
	
	
	

}
