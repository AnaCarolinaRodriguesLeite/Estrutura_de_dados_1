// #include <stdio.h>

// void troca_int (int *x, int *y) {
//     int tmp;
//     tmp = *x;
//     *x = *y;
//     *y = tmp;
// }

// void troca_str (char *x, char *y) {
//     char *tmp;
//     tmp = x;
//     x = y;
//     y = tmp;
// }

// int main() {
//    int a, b;
//    char *s1, *s2;
//    a = 3;
//    b = 4;
//    troca_int (&a, &b);
//    printf (" a = %d\n", a);
//    printf (" b = %d\n", b);
//    s1 = "Eu deveria aparecer depois";
//    s2 = "Eu deveria aparecer primeiro";
//    troca_str (s2, s1);
//    printf ("s2 = %s\n", s2);
//    printf ("s1 = %s\n", s1);
//    return 0;
// }


#include <stdio.h>

int main(){
    int v[5]={4,7,3,10,12};
    printf("%ld",(*v+3));
}