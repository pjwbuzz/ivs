#include <stdio.h>
// 구조체 정의
typedef struct {
    int var1,var2,var3,var4,var5,var6,var7,var8
        ,var9,var10,var11,var12,var13,var14,var15;
    }Data;
    // 구조체를 매개변수로 받는 함수 정의
    int calculate_1(Data* data) {
    int sum = data->var1 + data->var2 + data->var3 + data->var4 + data->var5 +
            data->var6 + data->var7 + data->var8 + data->var9 + data->var10 +
            data->var11 + data->var12 + data->var13 + data->var14 + data->var15;
        return sum;
    }
    int calculate_2(int var1, int var2, int var3, int var4, int var5,
    int var6, int var7, int var8, int var9, int var10,
    int var11, int var12, int var13, int var14, int var15) {
    int sum = var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 +
        var11 + var12 + var13 + var14 + var15;
    return sum;
}
int main() {
    // 구조체 변수를 생성하고 초기화
    Data myData = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    // 함수를 호출하여 결과 출력
    int result_1 = calculate_1(&myData);
    int result_2 = calculate_2(myData.var1,myData.var2,myData.var3,myData.var4\
    ,myData.var5,myData.var6,myData.var7,myData.var8,myData.var9\
    ,myData.var10,myData.var11,myData.var12,myData.var13\
    ,myData.var14,myData.var15);
    printf("결과_1: %d\n", result_1);
    printf("결과_2: %d\n", result_2);
    return 0;
}