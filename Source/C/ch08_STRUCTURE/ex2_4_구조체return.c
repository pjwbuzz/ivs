#include <stdio.h>
struct vision{ //�÷�data
    double left;
    double right;
};
typedef struct vision Vision; //�̷����ϸ� struct vison�� VisionŸ������, �빮�� ����ؾ���
Vision exchange(Vision robot);

int main(){
    Vision robot;
    printf("�� �� �÷� >> ");
    scanf("%lf %lf",&robot.left,&robot.right);
    printf("�Էµ� �� �� �÷� : %.2lf\t %.2lf \n", robot.left, robot.right);
    robot = exchange(robot);
    printf("�ٲ� �� �� �÷� : %.2lf\t %.2lf \n", robot.left, robot.right);
}
Vision exchange(Vision robot){
    // �Ű����� robot�� left�� right exchange
    double temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;  //call by value �� return ���ϸ� ����
    return robot;
}