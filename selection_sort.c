/*동적할당을 이용한 순차 정렬*/
#include <stdio.h>
#include <stdlib.h>
void swap(int*a,int*b); //값교환 함수
void sort(int array[],int size);    //순차 정렬 함수
void print_array(int array[],int size); //배열 출력 함수

int main(){
    int size=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int *array=(int*)malloc(sizeof(int)*size);  //사용자가 원하는만큼의 메모리 동적할당
    
    for(int i=0;i<size;i++){
        array[i]=rand()%100+1;
    }   //1~100으로 요소 임의 배정

    printf("Origin array\n");
    print_array(array,size);

    sort(array,size);   //정렬

    printf("Modified array\n");
    print_array(array,size);

    free(array);    //메모리 반환
    return 0;
}

void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sort(int array[],int size){
    int min_index=0;
    for(int i=0;i<size-1;i++){
        min_index=i;    //min_index 초기값 세팅
        for(int k=i+1;k<size;k++){
            if(array[min_index]>array[k]){
                min_index=k;    //min_index 갱신
            }
        }
        if(i!=min_index){
            swap(&array[i],&array[min_index]);  //정렬
        }
}
}

void print_array(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}