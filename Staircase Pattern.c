#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char karimun[100];
    scanf("%s",karimun);
    
    int porsche = strlen(karimun);
    for (int innova=0; innova < porsche; innova++){
        for (int jaguar=0; jaguar <= innova; jaguar++){
            printf("%c", karimun[jaguar]);
        }
        printf("\n");
    }
    
    return 0;
}
