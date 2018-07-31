#include<stdio.h>
#include<string.h>
int di,dj,max = -1,r,c;
void printa(int a[r][c]){
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void recu(int si,int sj,int m,int a[r][c]){
    printa(a);
    if((si = di)&&(sj == dj)){
        if(m>max){
            max = m;
            printf("max:%d\n",max);
        }
            
        return;
    }
    else if((si >= r) || (sj >= c) || a[si][sj] == 1 || a[si][sj] == 2 || si < 0 || sj <0){
        return;
    }
    else{
        a[si][sj] = 1;
       
    }
     printf("(%d %d %d %d)\n",m,si,sj,max);
        recu(si+1,sj,m+1,a);
        printf("(%d %d %d %d)\n",m,si,sj,max);
        recu(si-1,sj,m+1,a);
        printf("(%d %d %d %d)\n",m,si,sj,max);
        recu(si,sj+1,m+1,a);
        printf("(%d %d %d %d)\n",m,si,sj,max);
        recu(si,sj-1,m+1,a);
        
        a[si][sj] = 0;
    
}
int main(){
    int si,sj;
    scanf("%d %d",&r,&c);
    int noo;
    scanf("%d",&noo);
    int a[r][c];
    memset(a,0,sizeof(a));
    for(int i = 0 ; i < noo ; i++){
        int t,t1;
        scanf("%d%d",&t,&t1);
        a[t][t1] = 2;
    }
    scanf("%d%d",&si,&sj);
    scanf("%d%d",&di,&dj);
    recu(0,sj,0,a);
    printf("%d",max);
    return 0;
}
