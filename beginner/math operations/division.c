#include <stdio.h>
#include <math.h>

int main(){
    float x, y , h, m;
    printf("Shkruaj x: \n");
    scanf("%f", &x);
    printf("Shkruaj y: \n");
    scanf("%f", &y);

    h = x / y;
    m = 1 * fmod(x, y);

    printf("Heresi eshte : %f \nMbetja eshte : %f \n", h, m);

    return 0;
}