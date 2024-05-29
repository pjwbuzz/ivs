#include <stdio.h>
void sort(int* arr, int cnt); //cnt는 배열 방의 갯수
void swap_addr(int* a, int* b);
int* mklotto();

int main(){
    srand( (unsigned int)time(NULL));
    int* lotto = mklotto();
    //int lotto[6] = {41,1,2,9,23,33};
    printf("정렬전 : ");
    for(int idx=0;idx<6;idx++){
        printf("%d\t",lotto[idx]);
    }
    sort(lotto,sizeof(lotto)/sizeof(int));
    printf("\n정렬후 : ");
    for(int idx=0;idx<6;idx++){
        printf("%d\t",lotto[idx]);
    }
}
void sort(int* arr, int cnt){
    for(int i=0; i<cnt-1; i++){
        for(int j=i+1;j<cnt;j++){
            if(*(arr+i)>=*(arr+j)){
                swap_addr(arr+i,arr+j);
            }
        }
    }
}
void swap_addr(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int* mklotto(){
    int lotto[6];
    int tempnum;
    while(int cycle<6){
        tempnum = rand()%45+1;
        for(i=0;i<cycle;i++){
            if(tempnum==lotto[i]){
                
            }

        }

    }



        }
       