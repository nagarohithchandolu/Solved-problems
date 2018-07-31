#include <stdio.h>
#include <ctype.h>

int main() {
	//code
	int n;
	scanf("%d",&n);
	int a[n][n];
	memset(a,0,sizeof(a));
	int i = 0 , j = 0,no = 0;
	while(i < n/2){
	    for(j= j; j < n-i ; j++){
	        a[i][j] = no++;
	        printf("(%d,%d)\n",i,j);
	        
	    }
	        j--;
	        printf("%d %d\n",i,j);
	   for(i = i+1 ;i <= j ; i++){
	       a[i][j] = no++;
	       printf("(%d,%d)\n",i,j);
	   }
	   i--;
	   printf("%d %d\n",i,j);
	   for(j = i-1 ; j >= n-i-1 ; j--){
	       a[i][j] = no++;
	       printf("(%d,%d)\n",i,j);
	   }
	   j++;
	   printf("%d %d\n",i,j);
	   for(i = i-1 ; i > j  ; i--){
	       a[i][j] = no++;
	       printf("(%d,%d)\n",i,j);
	   }
	   i++;
	   j++;
	   printf("%d %d\n",i,j);
	   
	}
	if(n%2)
	a[i][j] = no;
	for(i = 0 ; i < n ;i++){
	    for(j = 0  ; j < n ; j++){
	        printf("%-2d ",a[i][j]+1);
	    }
	    printf("\n");
	}
	return 0;
}
