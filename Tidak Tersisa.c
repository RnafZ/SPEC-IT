#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int nissan;
    scanf("%d", &nissan);
    
    int karimun[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 5, 1};
    int suzuki = sizeof(karimun) / sizeof(karimun[0]);
    
    int hrv = 0;
    for (int ignis = 0; ignis < suzuki; ignis++){
        if (nissan >= karimun[ignis]){
            hrv += nissan / karimun[ignis];
            nissan = nissan % karimun[ignis];
        }
    }
    printf("%d", hrv);
    return 0;
}
