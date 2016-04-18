#include "figure.h"

#define DIM 3.1

int main() {
    
    square sq;
    circle c;
    figure* fig[] = {&sq, &c};

    (*fig)->set_dim(DIM,0);
    (*fig)->show();

    (*(fig + 1))->set_dim(DIM,0);
    (*(fig + 1))->show();
    return 0;
}
