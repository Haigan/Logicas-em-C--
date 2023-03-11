#include<stdio.h>
main()
{
	printf("Aluno:Matheus Italo De Araujo\nMatricula:\n");
	
	int m,a,b,c,mv;
	
	scanf("%d",&m);
	
	if(m<40||m>110){
		return 0;
	}
    scanf("%d",&a);
	
	if(a<1||a>m){
		return 0;
	}
	mv = a;
	scanf("%d",&b);
	
	if(b>mv){
		mv=b;
	}
	
	if(b<1||b>m){
		return 0;
	}
	
	if(a==b){
		return 0;
	}
	c = m - (a+b);
	
	if(c>mv){
		mv = c;
	}
	printf("%d",mv);

}
