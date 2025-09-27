#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int avanza;
    scanf("%d", &avanza);
    
    int agya[avanza];
    for (int ignis = 0; ignis < avanza; ignis++){
        scanf("%d", &agya[ignis]);
    }
    
    int granmax = 1;
    int serena = 1;
    for (int ignis = 1; ignis < avanza; ignis++){
        if ((agya[ignis] % 2) != (agya[ignis-1] % 2)){
            serena++;
            if (serena > granmax)
                granmax = serena;
        } else
            serena = 1;
    }
    printf("%d", granmax);
    return 0;
}
