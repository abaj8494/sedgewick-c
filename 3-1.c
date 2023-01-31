/* prints the sizeof and ranges for the basic data types of c
 * namely int, double, char and float
 * and their short and long counterparts
 */ 
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("------------------------------------\n"
            "Ranges.\n"
            "------------------------------------\n");
    printf("%14s%20d\n", "char max:", CHAR_MAX);
    printf("%14s%20d\n", "char min:", CHAR_MIN);
    printf("%14s%20d\n", "int max:", INT_MAX);
    printf("%14s%20d\n", "int min:", INT_MIN);
    printf("%14s%20ld\n", "long int max:", LONG_MAX);
    printf("%14s%20ld\n", "long int min:", LONG_MIN);
    printf("%14s%20d\n", "short int max:", SHRT_MAX);
    printf("%14s%20d\n", "short int min:", SHRT_MIN);
    printf("%14s%20f\n", "float max:", FLT_MAX);
    printf("%14s%20f\n", "float min:", FLT_MIN);
    // printf("%14s%20f\n", "double max:", DBL_MAX);
    // printf("%14s%20f\n", "double min:", DBL_MIN);
    printf("------------------------------------\n"
            "Sizes. (bytes)\n"
            "------------------------------------\n");
    printf("%10s%10lu\n", "char:", sizeof(char));
    printf("%10s%10lu\n", "int:", sizeof(int));
    printf("%10s%10lu\n", "long int:", sizeof(long int));
    printf("%10s%10lu\n", "short int:", sizeof(short int));
    printf("%10s%10lu\n", "float:", sizeof(float));
    printf("%10s%10lu\n", "double:", sizeof(double));
}


/* character - a single byte
 * short     - a short integer
 * long      - a long integer
 * double    - double-precision floating point
 */

/* sizeof returns as unsigned long */

/* the types for limit definitions of a type are the same as the type themselves */
