//Найти значение уравнения

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
    double x, y,
           a, b, c;

    printf("Vvedite x: ");
    scanf("%lf",&x);

    a = 2 * ( cos ( x - ( M_PI / 6 ) ) ) + sqrt(2); // числитель

    c = pow ( x, 2 );

    b = 1 / ( 2 * ( log (x) ) ) + ( pow ( sin ( c ), 2 ) ); // знаменатель

    y = ( a / b ) * ( exp ( 3 * x ) );

    /*printf("a = %lf: \n", a);
    printf("b = %lf: \n", b);*/
    printf( "\n" );
    printf("Znachenie yravnenia = %lf \n", y);

    return 0;
}
