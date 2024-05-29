#include <stdio.h>
struct vision{ //시력data
    double left;
    double right;
};
typedef struct vision Vision; //이렇게하면 struct vison을 Vision타입으로, 대문자 사용해야함
Vision exchange(Vision robot);

int main(){
    Vision robot;
    printf("좌 우 시력 >> ");
    scanf("%lf %lf",&robot.left,&robot.right);
    printf("입력된 좌 우 시력 : %.2lf\t %.2lf \n", robot.left, robot.right);
    robot = exchange(robot);
    printf("바뀐 좌 우 시력 : %.2lf\t %.2lf \n", robot.left, robot.right);
}
Vision exchange(Vision robot){
    // 매개변수 robot의 left와 right exchange
    double temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;  //call by value 라서 return 안하면 날라감
    return robot;
}