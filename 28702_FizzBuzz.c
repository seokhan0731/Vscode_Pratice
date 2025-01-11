#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_digit(char array[][9]);
int string_to_goal_num(char array[][9],int num_index);
void num_to_answer(int goal_num);

int main(){


char array[3][9]={NULL};
for(int i=0;i<3;i++){
scanf("%s",array[i]);
}

int num_index=0;
num_index=check_digit(array);

int goal_num=0;
goal_num=string_to_num(array,num_index);

num_to_answer(goal_num);

return 0;
}

//숫자가 들어있는 인덱스 반환
int check_digit(char array[][9]){

for(int i=0;i<3;i++){

if(isdigit(array[i][0])!=0){
    return i;
}

}


}

//답에 해당하는 숫자 반환
int string_to_goal_num(char array[][9],int num_index){
int num=0;
sscanf(array[num_index],"%d",&num);
int goal_num=0;

switch(num_index){
    case 0:{
        goal_num=num+3;
        break;
    }

    case 1:{
        goal_num=num+2;
        break;
    }
    
    default:{
        goal_num=num+1;
        break;
    }
}

return goal_num;
}

//문제 조건에 맞게 답 출력
void num_to_answer(int goal_num){
if((goal_num%3==0)&&(goal_num%5==0)){
    printf("FizzBuzz");
}
else if((goal_num%3==0)&&(goal_num%5!=0)){
    printf("Fizz");
}
else if((goal_num%5==0)&&(goal_num%3!=0)){
    printf("Buzz");
}
else{
    printf("%d",goal_num);
}

}