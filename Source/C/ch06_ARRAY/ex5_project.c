#include <stdio.h>
#include <string.h>

int main(){
    char* names[]={"������","������","������","���밥","������"};  //*�Ⱥ��̸� ���ڹ迭, �ٿ��� ���ڿ��迭(������)
    int arrHeight[5];
    int totHeight = 0;
    int idxMin, minHeight = 999;
    int idxMax, maxHeight = 0;
    for(int idx=0;idx<=4;idx++){
        printf("%s�� Ű��? ",names[idx]);
        scanf("%d",&arrHeight[idx]);
        totHeight += arrHeight[idx];

        if(arrHeight[idx]>maxHeight){
            maxHeight = arrHeight[idx];
            idxMax = idx;
        }
        else if(arrHeight[idx]<minHeight){
            minHeight = arrHeight[idx];
            idxMin = idx;
        }

    }
    printf("- ���Ű : %.2lf\n", totHeight/5.0);
    printf("- ����� ģ�� %s�� Ű�� %d\n",names[idxMax],maxHeight);
    printf("- �ִܽ� ģ�� %s�� Ű�� %d\n",names[idxMin],minHeight);
}