#include <stdio.h>
#include <stdlib.h>

int isPrime(int num);
void primeByRange();

int main (){
    int num, opp, factors = 0;

    printf("Prime menu -\nEnter 1 to check a number for prime\nEnter 2 to print all prime numbers in a range.");
    scanf("%d", &opp);

    switch (opp)
    {
    case 1:
        printf("Enter a number to check for prime: ");
        scanf("%d", &num);

        isPrime(num) ? printf("The number is not Prime") : printf("The number is Prime");
        break;
    
    case 2:
        primeByRange();
        break;

    default:
        printf("Wrong input!!");
        main();
        break;
    }

    return 0;
}


int isPrime(int num){

    int factors = 0;

    for(int i = 1; i<num; i++){
        if(num % i == 0){
            factors++;
        }
    }

    return(factors >1 ? 0 : 1);
}

void primeByRange(){
    int low, high, factors = 0;

    printf("Enter lower limit: ");
    scanf("%d", &low);

    printf("Enter upper limit: ");
    scanf("%d", &high);

    printf("Prime numbers in this range are - \n");

    for(int i = low; i<= high; i++){
        if(isPrime(i)){
            printf("%d\n", i);
        }
    }
}