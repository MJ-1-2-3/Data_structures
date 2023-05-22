#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char n[20],m[20];

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%s",n);
     scanf("%s",m);
     int x = atoi(n);
     int y = atoi(m);
    printf("%d",x*y);
    return 0;
}
