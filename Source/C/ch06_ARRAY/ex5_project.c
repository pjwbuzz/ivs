#include <stdio.h>
#include <string.h>

int main(){
    char* names[]={"유수민","김현식","땅땅이","새대갈","슘당이"};  //*안붙이면 문자배열, 붙여야 문자열배열(포인터)
    int arrHeight[5];
    int totHeight = 0;
    int idxMin, minHeight = 999;
    int idxMax, maxHeight = 0;
    for(int idx=0;idx<=4;idx++){
        printf("%s의 키는? ",names[idx]);
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
    printf("- 평균키 : %.2lf\n", totHeight/5.0);
    printf("- 최장신 친구 %s의 키는 %d\n",names[idxMax],maxHeight);
    printf("- 최단신 친구 %s의 키는 %d\n",names[idxMin],minHeight);
}