#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int di,dj,max = -1,r,c;
void recu(int si,int sj,int m,int a[r][c]){
    if((si >= r) || (sj >= c) || a[si][sj] == 1 || a[si][sj] == 2 || si < 0 || sj <0){
     
        return;
    }
    else if((si == di)&&(sj == dj)){
        if(m>max){
            
            max = m;
     
        }
     
        return;
    }
    
    else{
     
        a[si][sj] = 1;
     
       
    }
     
        recu(si+1,sj,m+1,a);
     
        recu(si-1,sj,m+1,a);
     
        recu(si,sj+1,m+1,a);
     
        recu(si,sj-1,m+1,a);
        
        a[si][sj] = 0;
    
}
int main(){
    int si,sj;
    scanf("%d %d",&r,&c);
    int noo;//noo-> no of obstacles
    scanf("%d",&noo);
    int arr[r][c];
    memset(arr,0,sizeof(arr));
    for(int i = 0 ; i < noo ; i++){
        int t,t1;
        scanf("%d%d",&t,&t1);
        arr[t][t1] = 2;
    }
    scanf("%d%d",&si,&sj);
    scanf("%d%d",&di,&dj);
    recu(si,sj,0,arr);
    printf("%d\n",max);
    int i,j;
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
