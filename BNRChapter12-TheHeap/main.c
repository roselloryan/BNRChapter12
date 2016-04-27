//
//  main.c
//  BNRChapter12-TheHeap


#include <stdio.h>
#include <stdlib.h>


typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person *p) {
    return p ->weightInKilos / (p ->heightInMeters * p ->heightInMeters);
}


int main(int argc, const char * argv[]) {
    
//    // Declater pointer
//    float *startOfBuffer;
//    
//    // Ask to use some bytes of memormy from the heap
//    startOfBuffer = malloc(1000 * sizeof(float));
//
//    // Use buffer here...
//    
//    // Relinquish your claim to the memory so it can be reused
//    free(startOfBuffer);
//    
//    // Forget where that memory is
//    startOfBuffer = NULL;

    
    // Allocate memory for one person struct
    Person *mikey = (Person *)malloc(sizeof(Person));
    
    // Fill in two members of struct
    mikey->weightInKilos = 96;
    mikey->heightInMeters = 1.7;
    
    // Print out BMI
    float mikeyBMI = bodyMassIndex(mikey);
    printf("Mikey's BMI is %f\n\n", mikeyBMI);
    
    // Let memory be recycled
    free(mikey);
    
    // Forget where it was
    mikey = NULL;
    
    
    return 0;
}
