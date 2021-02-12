#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	
	static int tekzar[7];
	int i,j,temp;

	
	for (i=0;i<10000;i++){
	    temp = (rand()%6)+1;
	    
	    tekzar[temp]++;
	}
	
/*	
	for(i=1;i<7;i++)
	printf("Zarin %d gelmesi: %d kere.\n",i,tekzar[i]);
*/	
	int max=-999;
	for(i=1;i<7;i++){
		if(tekzar[i]>max){
			max=tekzar[i];
		}
		
	}
	int scalefaktor1=20;
	//printf("enter number for first graph scale\n");
	//scanf("%d",&scalefaktor1);
	int key=max/scalefaktor1;
/*	for(i=1;i<7;i++)
	printf("temsil:%d\n\n",tekzar[i]/key);
*/	
		printf("The graph of one dice\n");
        printf("\n\n");
		
	for(i=scalefaktor1 ;i>0;i--){    // i vertical          
		for(j=1;j<=6;j++){                // j horizontal zar 
			
			if((tekzar[j]/key)>=i)
			printf("*");
			else
			printf(" ");
			
			printf("  ");    //kolonlar arasi bosluk
		}
		
		printf("\n");    //sonraki satir
	}
	
	for(i=1;i<=6;i++){
		printf("%d",i);
		printf("  ");				
    } 
    printf("\n");

//*************************************************************************************************************
	
	static int ciftzar[13];
	int tmp1,tmp2;
	for (i=0;i<10000;i++){
	     tmp1 = (rand()%6)+1;
	     tmp2 = (rand()%6)+1;
	    ciftzar[tmp1+tmp2]++;
	}
	
/*	for(i=2;i<13;i++)
	printf("Zarlarin toplaminin %d gelmesi: %d kere.\n",i,ciftzar[i]);
*/
	
    max=-999;
	for(i=2;i<13;i++){
		if(ciftzar[i]>max){
			max=ciftzar[i];
		}
		
	}
	
	int scalefaktor2=40;

	//printf("\n\nenter number for second graph scale\n");
	//scanf("%d",&scalefaktor2);
	key=max/scalefaktor2;
/*	for(i=2;i<13;i++)
	printf("temsil:%d\n\n",ciftzar[i]/key);
*/	
	printf("\n\n");
printf("The graph of two dice");
	printf("\n\n\n");
	for(i=scalefaktor2;i>0;i--){
		for(j=2;j<=12;j++){
			
			if((ciftzar[j]/key)>=i)
			printf("*");
			else
			printf(" ");
			
			printf("  ");   //kolonlar arasi bosluk
		}
		printf("\n");       //sonraki satir
		
			
	}
		
	for(i=2;i<=12;i++){
				printf("%d",i);
				if(i<10)
				printf("  ");
				else
				printf(" ");
} 
	
	return 0;
}
