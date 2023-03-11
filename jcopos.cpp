#include<stdio.h>
main()
{
	printf("Aluno:Matheus Italo De Araujo\nMatricula:\n");
	
	int N,cont,m;
	char j;
	
	printf("\n\n");
	scanf("%d",&N);
	
	getchar();
	scanf("%c",&j);
	
	for(cont=0;cont<N;cont++){
		scanf("%d",&m);
	
		if(m==1){

			if(j=='A'){
				j ='B';
			} else{
				if(j=='B'){
				j ='A';
			} 	else{
				if(j=='B'){
				j ='B';	
			}
		  }	
		}
	}
		
		if(m==2){
			
			if(j=='A'){
				j = 'A';
			} else{
				if(j=='B'){
				j = 'C';	
			} else{
				if(j=='C'){
				j = 'B';
		}
	  }
	}

		}
		if(m==3){
			
			if(j=='A'){
				j = 'C';
			} else{
				if(j=='B'){
				j = 'B';
			} else{
				if(j=='C'){
				j = 'A';
			}
		  }
		}

	  }
	}
	printf("%c",j);
}
