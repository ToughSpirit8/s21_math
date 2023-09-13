
#include "s21_log.c"
#include <stdio.h>
#include <math.h>

// int main(){
//     long double s;
//     printf("%Lf\n", s);
    
//     int x,y = 1;
//     for(int x = 1;x<10;x++){
//         for(int y = -10;y < 10;y++){
//         s = s21_pow(x,y);
//         printf("%Lf  ", s);
//         printf("%lf\n", pow(x,y));
//         }
//     }
//     return 0;
// }

int main(){
   
    for(long double x = 1; x < 10;x+=0.1){
        printf("%Lf  ", calculate_ln(x));
        printf("%lf\n", log(x));
        printf("%Lf  ",x);
    }
    for(long double x = -10;x<=0;x+=0.1){
        printf("%Lf  ", calculate_ln(x));
        printf("%lf\n", log(x));

    }
    return 0;
}