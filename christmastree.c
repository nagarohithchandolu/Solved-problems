#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
	char k = '*';
    printf("%*c\n",n+1,k);
    int i,j,l;
    for(i = 0 ; i < n-1 ; i++){
    	
    	for(l = 0 ; l < n-i ; l++){
    		int s = n-l;
			printf("%*c",s,k);
			for(j = 0 ; j <=l ; j++)
				printf("**");
			printf("\n");
		}
	}
	 printf("%*c\n%*c",n+1,k,n+1,k);
	
    return 0;
}
