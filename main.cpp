#include <iostream>
#include <cstdlib>
#include <time.h>
//By Water :3
using namespace std;

int main()
{
    srand(time(0));
    float seeding = rand() % 1000000; // random seed generator
    float div1 = rand() % 100, div2 = rand() % 100, div3 = rand() % 100;
    float mult1 = rand() % 100;
    
    printf("La semilla es: %.4f\n",seeding);
    float totalRandom = seeding / div1;
    printf("Un valor pseudoaleatorio: %.4f\n",totalRandom);
    totalRandom = totalRandom / div2;
    printf("Un valor no tan pseudoaleatorio: %.4f\n",totalRandom);
    totalRandom = (totalRandom / div3) * mult1;
    printf("Un valor totalmente aleatorio: %.4f\n",totalRandom); //Creo que es un numero aleatorio verdadero... creo

    return 0;
}
