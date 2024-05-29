#include <stdio.h>
//이름(빈문자 불포함), 주소(빈문자포함)를 입력받기
/*scanf("%s",변수,입력받을byte수)
    탭,스페이스,엔터 등 whitespace가 오면 그 이전의 버퍼 내용을 return, 단 맨앞에 나오는 ws는 무시
    -> 띄어쓰기는 사용이 불가능해짐
    gets(변수) : 얘는 무조건 \n에만 반응함, \n이전까지만 return하고 그 뒤는 버퍼에서 지운다!!
*/
int main(){
    // char* name; //입력받을 문자열이 저장될 공간이 확보되지 않음, 주소가 들어갈 준비만 된 상태
    char name[128];
    char address[512];  //넉넉하게 공간설정
    printf("이름 >>");
    scanf("%s",name,sizeof(name));
    printf("주소 >>");
    // scanf("%s",address,sizeof(address));
    //gets를 한개만 쓰면 scanf 이후 버퍼에 \n이 맨 앞에 남아서 그냥 넘어가게됨.
    gets(address);  //버퍼를 지우는 용도, gets를 쓸때 버퍼의 상태를 잘 알아야함
    gets(address);
    printf("입력한 이름 : %s\n",name);
    printf("입력한 주소 : %s\n",address);

}