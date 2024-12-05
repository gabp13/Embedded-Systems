#include "mbed.h"
#include "Complex_C.hpp"
#include <cmath>

// TASK - write and test complexConjugate, complexNegate, complexSubtract, complexMagnitude, complexMultiply and complexDivide

int main() {
    printf("\n\nTASK312\n");

    //Create instance of a complex number
    ComplexNumber_C p = {2.0, 3.0};
    ComplexNumber_C q = {1.0, 1.0};
    complexDisplay("p", p);
    complexDisplay("q", q);
 
    ComplexNumber_C sum = complexAdd(p, q);
    complexDisplay("p+q", sum);

    ComplexNumber_C conjugate = complexConjugate(p);
    complexDisplay("p conjugate", conjugate);

    ComplexNumber_C negate = complexNegate(q);
    complexDisplay("q negate", negate);

    ComplexNumber_C subtract = complexSubtract(p, q);
    complexDisplay("p-q", subtract);

    double magnitude = complexMagnitude(p);
    printf("p magnitude %f\n", magnitude);

    ComplexNumber_C Multiply = complexMultiply(p, q);
    complexDisplay("p*q", Multiply);   

    ComplexNumber_C Divide = complexDivide(p, q);
    complexDisplay("p/q", Divide);   

    complexConjugateInplace(p);
    complexDisplay("p ConjugateInplace", p);

    complexNegateInplace(q);
    complexDisplay("p NegateInplace", q);    

    while (true) {
    }
}
