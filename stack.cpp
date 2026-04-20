#include "stack.h"
#include <stdexcept>

void init(Stack* s) {
    s->top = nullptr; 
}

bool isEmpty(const Stack* s) {
    return s->top == nullptr;
}
