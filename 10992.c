#include <stdio.h>

int main(void){
	int n, i, j, cnt, k=0;
	
	scanf("%d", &n);
	cnt = n;
	for(i=n; i>1; i--){ //각 층 
		for(j=1; j<cnt; j++){
			printf(" ");
		}
		printf("*");
		
		if(k==0){
			k=1;
		}
		else{
			for(j=0; j<k; j++){
				printf(" ");
			}
			printf("*");
			k+=2;
		}
		printf("\n");
		cnt--;
	}
	
	for(i=0; i<n*2-1; i++){ //마지막 층 
		printf("*");
	}
}
