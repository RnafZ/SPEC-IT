#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int avanza, jimny, march, datsun;
    scanf("%d", &avanza);
    
    jimny = avanza/3600;
    march = (avanza%3600)/60;
    datsun = avanza%60;
        
    printf("%.2d:%.2d:%.2d",jimny,march,datsun);
    return 0;
}
