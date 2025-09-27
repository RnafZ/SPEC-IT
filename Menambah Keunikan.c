#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int nissan, corolla;
    int suzuki = 0;
    
    scanf("%d",&nissan);
    
    int landcruiser[nissan];
    for (int innova=0; innova<nissan; innova++){
        scanf("%d",&landcruiser[innova]);
    }
    
    for (int innova=0; innova<nissan; innova++){
        corolla = 0;
        for (int ignis=0; ignis<nissan; ignis++){
            if (landcruiser[innova] == landcruiser[ignis])
                corolla++;
        }
        
        if (corolla==1)
            suzuki += landcruiser[innova];
    }
    
    printf("%d",suzuki);
    
    return 0;
}
