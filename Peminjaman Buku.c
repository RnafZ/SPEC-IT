#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int nissan, march, datsun;
    scanf("%d %d %d", &nissan, &march, &datsun);
    if (nissan <= march)
        printf("TEPAT WAKTU");
    else
        printf("%d", (nissan-march)*datsun);
    return 0;
}
