#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int avanza;
    scanf("%d", &avanza);
    
    for (int ignis = 0; ignis < avanza - 1; ignis++){
        printf(" ");
    }
    printf("^\n");
    
    for (int ignis = 2; ignis < avanza; ignis++){
        for (int innova = 0; innova < avanza - ignis; innova++){
            printf(" ");
        }
        printf("/");
        for (int innova = 0; innova < 2 * ignis - 3; innova++){
            printf("*");
        }
        printf("\\\n");
    }
    
    if (avanza > 1){
        printf("/");
        for (int ignis = 0; ignis < 2 * avanza - 3; ignis++){
            printf("-");
        }
        printf("\\\n");
    }
    return 0;
}
