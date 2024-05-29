#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�궃�닔諛쒖깮�쟾 珥덇린�솕 �옉�뾽 �븘�닔
//rand() : 0 ~ 32767
int main (void) {
    srand( (unsigned int)time(NULL)); //�궃�닔珥덇린�솕
    //100誘몃쭔(0~99) �궃�닔 諛쒖깮�븯湲� �쐞�빐 �굹癒몄���뿰�궛 �궗�슜
    //1~100 �궃�닔 �궗�슜 �쐞�빐�꽌�뒗 +1 �븯硫� �맖 
    printf("%d\n", rand()%45+1);
    printf("%d\n", rand()%45+1);
    printf("%d\n", rand()%45+1);
    printf("%d\n", rand()%45+1);
    printf("%d\n", rand()%45+1);
    printf("%d\n", rand()%45+1); 


    
}