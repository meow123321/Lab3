#include <stdio.h>
int main() {

  // a) - Sunt afisate 39 * deoarece i pleaca de la 1 si se repeta pana ce i primeste valoarea40 //
    int i = 1;
    while (i < 40) {
        printf("*");
        i++;      }

    // b) - Sunt afisate 13 * deoarece la a 14-a incrementare i devine 40//
     int i = 1;
     do      {
    printf ("*");
    i += 3;
     }
      while (i != 40);

     //c) - Sunt afisate 19 * deoarece la a 20-a incrementare se depaseste valoare 40//
       for (int i=1; i!=40; i+=2)
        printf ("*");

    // d) - Sunt afisate 8 * deoarece la a 8-a incrementare se depaseste valoare 40//

       for (int i = 1; i <= 40; i += 15)
            for (int j = 1; j <= i; j++)
            printf ("*");
}
