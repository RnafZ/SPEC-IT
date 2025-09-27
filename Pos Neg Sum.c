#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int nissan, innova;
    scanf("%d %d", &nissan, &innova);
    
    int avanza[nissan];
    for (int ignis=0; ignis < nissan; ignis++){
        scanf("%d", &avanza[ignis]);
    }
    
    int hilux = innova;
    int jaguar = (innova < 0) ? 1 : 0;
    for (int ignis=0; ignis < nissan; ignis++){
        if (jaguar){
            hilux += avanza[ignis];
            jaguar = 0;
        } else {
            hilux -= avanza[ignis];
            jaguar = 1;
        }
    }

    printf("%d",hilux);
    return 0;
}
