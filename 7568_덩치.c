#include <stdio.h>
#include <stdlib.h>
typedef struct big{
    int weight;
    int height;
}BIG;

void get_rank(BIG * array,int n, int rank[]);

int main(){
int n;
scanf("%d",&n);
BIG * array=(BIG*)malloc(n*sizeof(BIG));
for(int i=0;i<n;i++){
    scanf("%d %d",&array[i].height,&array[i].weight);
}
int *rank=(int*)malloc(n*sizeof(int));
get_rank(array,n,rank);
for(int i=0;i<n;i++){
    printf("%d ",rank[i]);
}
free(array);
free(rank);
return 0;
}


void get_rank(BIG * array,int n, int rank[]){
int count=0;
for(int i=0;i<n;i++){
    count=0;
    for(int j=0;j<n;j++){
        if((array[i].height<array[j].height)&&(array[i].weight<array[j].weight)){
            count++;
        }

    }
    rank[i]=count+1;
}

}