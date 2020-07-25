
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STACK_MAX_SIZE 4
typedef int T;
typedef struct Stack_tag {
    T data[STACK_MAX_SIZE];
    size_t size;
} Stack_t;
void push(Stack_t *stack, const T value) {
    stack->data[stack->size] = value;
    stack->size++;
}
void printStackValue(const T value) {
    printf("%d", value);
}

void printStack(const Stack_t *stack, void (*printStackValue)(const T)) {
    int i,s,k=0;
    int len = stack->size - 1;
    printf("stack %d > ", stack->size);
    for (i = 0; i < len; i++) {
        printStackValue(stack->data[i]);
        printf(" | ");
    }
    if (stack->size != 0) {
        printStackValue(stack->data[i]);
    }
    s=(stack->data[2])+(stack->data[3]);
     printf("\n suma = %d", s);
     for (i = 0; i < len+1; i++) {
     if((stack->data[i])%2==0){k++;}}
        printf("\n parni= %d", k);

    printf("\n");
}

void main() {
int i,a;
Stack_t stack;
stack.size = 0;
for (i=0;i<4;i++){
    printf("vvedit "); scanf("%d",&a);
    push(&stack, a);
}

printStack(&stack, printStackValue);

_getch();
}
