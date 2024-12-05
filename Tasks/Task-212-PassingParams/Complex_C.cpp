#include "stdio.h"
#include "Complex_C.hpp"
#include "math.h"

ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;
    y.real += b.real;
    y.imag += b.imag;
    return y;
}

ComplexNumber_C complexConjugate(const ComplexNumber_C a) {
    ComplexNumber_C y = a;
    y.real = a.real;
    y.imag = -a.imag;
    return y;
}

ComplexNumber_C complexNegate(const ComplexNumber_C a) {
    ComplexNumber_C y = a;
    y.real = -a.real;
    y.imag = -a.imag;
    return y;
}

ComplexNumber_C complexSubtract(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = complexNegate(b);
    ComplexNumber_C z = complexAdd(a,y);
    return z;
}

double complexMagnitude(const ComplexNumber_C a) {
    double y = sqrt((a.real*a.real) + (a.imag*a.imag));
    return y;    
}

ComplexNumber_C complexMultiply(const ComplexNumber_C a, const ComplexNumber_C b){
    ComplexNumber_C y;
    y.real = (a.real*b.real)-(a.imag*b.imag);
    y.imag = (a.real*b.imag)+(a.imag*b.real);
    return y;
}

ComplexNumber_C complexDivide(const ComplexNumber_C a, const ComplexNumber_C b){
    ComplexNumber_C y;
    y.real = ((a.real*b.real)+(a.imag*b.imag))/((b.real*b.real)+(b.imag*b.imag));
    y.imag = ((a.imag*b.real)-(a.real*b.imag))/((b.real*b.real)+(b.imag*b.imag));
    return y;
}

void complexConjugateInplace(ComplexNumber_C& a){
    a.imag = -a.imag;
    a.real = a.real;
} 

void complexNegateInplace(ComplexNumber_C& a){
    a.imag = -a.imag;
    a.real = -a.real;
}

void complexDisplay(const char *strName, const ComplexNumber_C u) {
    printf("%s = %f + j%f\n", strName, u.real, u.imag);
}