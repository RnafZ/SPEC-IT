#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int avanza;
    scanf("%d",&avanza);
    for (int ignis=1; ignis <= avanza; ignis++){
        for (int innova=1; innova <= ignis; innova++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
