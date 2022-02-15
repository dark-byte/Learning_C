#include <stdio.h>
#include <stdlib.h>

void getNum();
void cal(double num1, double num2, char opp);

double num1, num2;
char opp;

int main(){
    getNum();
    printf("Enter Operator: ");
    scanf(" %c", &opp);
    cal(num1, num2, opp);
    return 0;
}

void getNum(){
    printf("Enter 1st number: ");
    scanf("%lf", &num1);

    printf("Enter 2nd number: ");
    scanf("%lf", &num2);
}

void cal(double num1, double num2, char opp){
    if(opp == '+'){
        printf("%lf", num1 + num2);
    } else if(opp == '-'){
        printf("%lf", num1 - num2);
    } else if(opp == '*'){
        printf("%lf", num1 * num2);
    } else if(opp == '/'){
        printf("%lf", num1 / num2);
    } else {
        printf("Wrong Input!");
        return;
    }
}