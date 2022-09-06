#include<stdio.h>

struct vision{
    int left;
    int right;
};

void exchange1(struct vision robot)
{
    int temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;
}

void exchange2(struct vision* robot)
{
    int temp;

    temp = robot->left;
    robot->left = robot->right;
    robot->right = temp;
}

int main() {
    struct vision robot = {1,2};

    exchange1(robot);
    exchange2(&robot);

    exchange1(robot);
    exchange2(&robot);

    printf("%d %d %d",robot.left,robot.right,robot.left / robot.right);

    return 0;

    // 1 2 0
    
}