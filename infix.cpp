#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

// Define a stack structure
typedef struct {
    char items[MAX_SIZE];
    int top;
} Stack;

// Initialize an empty stack
void initStack(Stack *s) {
    s->top = -1;
}

// Check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Push an element onto the stack
void push(Stack *s, char item) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
        exit(1);
    }
    s->items[++s->top] = item;
}

// Pop an element from the stack
char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow!\n");
        exit(1);
    }
    return s->items[s->top--];
}

// Get the precedence of an operator
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

// Convert infix expression to postfix
void infixToPostfix(char *infix, char *postfix) {
    Stack stack;
    initStack(&stack);

    int i, j;
    i = j = 0;

    while (infix[i] != '\0') {
        char ch = infix[i];

        if (isalnum(ch)) {
            postfix[j++] = ch;
        } else if (ch == '(') {
            push(&stack, ch);
        } else if (ch == ')') {
            while (!isEmpty(&stack) && stack.items[stack.top] != '(') {
                postfix[j++] = pop(&stack);
            }
            if (!isEmpty(&stack) && stack.items[stack.top] == '(') {
                pop(&stack); // Pop '(' from the stack
            } else {
                printf("Mismatched parentheses!\n");
                exit(1);
            }
        } else {
            while (!isEmpty(&stack) && precedence(ch) <= precedence(stack.items[stack.top])) {
                postfix[j++] = pop(&stack);
            }
            push(&stack, ch);
        }

        i++;
    }

    while (!isEmpty(&stack)) {
        if (stack.items[stack.top] == '(') {
            printf("Mismatched parentheses!\n");
            exit(1);
        }
        postfix[j++] = pop(&stack);
    }

    postfix[j] = '\0';
}

// Reverse a string
void reverseString(char *str) {
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Convert infix expression to prefix
void infixToPrefix(char *infix, char *prefix) {
    reverseString(infix);

    // Replace '(' with ')' and vice versa
    int i;
    for (i = 0; infix[i] != '\0'; i++) {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    char postfix[MAX_SIZE];
    infixToPostfix(infix, postfix);

    reverseString(postfix);
    strcpy(prefix, postfix);
}

int main() {
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];
    char prefix[MAX_SIZE];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);
    infixToPrefix(infix, prefix);

    printf("Postfix expression: %s\n", postfix);
    printf("Prefix expression: %s\n", prefix);

    return 0;
}

