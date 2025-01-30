/*선형 순차리스트 원소 추가,삭제

-기존 배열 내에 존재하는 원소간의 중복은 없다고 가정
-추가,삭제하고자 하는 원소의 값이 기존 배열의 원소들과 중복되지 않는다고 가정
-기존 배열은 오름차순으로 정렬된 상태로 설정

**기존 배열 {1,2,3,4,6,7}에서 5를 삽입 후, 삭제하는 과정 수행**

*/

#define SIZE 10

void insert_element(int array[],int size,int key);
void delete_element(int array[],int size,int key);
void print_array(int array[],int size);

int main(){

int array[SIZE]={1,2,3,4,6,7};
printf("origin array");
print_array(array,6);

printf("insert 5");
insert_element(array,6,5);
print_array(array,7);

printf("delete 5");
delete_element(array,7,5);  //원소 하나가 추가된 이후이므로, size는 7로 수정
print_array(array,6);


return 0;
}

//배열 출력함수
void print_array(int array[],int size){
    printf("\n");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("\n\n");
}


//원소 추가함수
void insert_element(int array[],int size,int key){

//locate는 새로운 원소(key)가 들어갈 인덱스
int locate=0;

//key값이 가장 작을 때
if(key<array[0]){
    locate=0;
}

//key값이 중간 인덱스에 해당할 때
else if(key<array[size-1]){
for(int i=0;i<size-1;i++){

    if((array[i]<key)&&(key<array[i+1])){
        locate=i+1;
        break;
    }
}
}

//key값이 가장 클 때
else{
    locate=size;
}

//기존값 한칸씩 뒤로 이동
for(int i=size;i>locate;i--){
    array[i]=array[i-1];
}

//key값 삽입
array[locate]=key;

}

//원소 제거함수
void delete_element(int array[],int size,int key){

//locate는 제거될 원소(key)가 존재하는 인덱스
int locate=0;

//key값 인덱스 탐색
for(int i=0;i<size;i++){
    if(array[i]==key){
        locate=i;
        break;
    }

}

//기존값 한칸씩 앞으로 이동
for(int i=locate;i<size-1;i++){
    array[i]=array[i+1];
}

}