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
    
    int porsche = 0;
    int nissan = 0;
    for (int ignis = 0; ignis < avanza; ignis++){
        if (agya[ignis] < 0)
            nissan++;
        else
            porsche++;
    }
    printf("%d %d",porsche,nissan);
    return 0;
}
