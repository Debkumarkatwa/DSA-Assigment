#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int prec(char);

int isOperand(char c) {
    return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void infixToPostfix(char *infix, char *postfix) {
    int i = 0, j = 0;
    char stack[MAX];
    char top = -1;

    while (infix[i]!= '\0') {
        if (isOperand(infix[i])) {
            postfix[j++] = infix[i];
        } else if (infix[i] == '(') {
            stack[++top] = '(';
        } else if (infix[i] == ')') {
            while (stack[top]!= '(') {
                postfix[j++] = stack[top--];
            }
            top--;
        } else {
            while (top!= -1 && prec(stack[top]) > prec(infix[i])) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
        i++;
    }

    while (top!= -1) {
        postfix[j++] = stack[top--];
    }

    postfix[j] = '\0';
}

int prec(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return -1;
    }
}

int main() {
    char infix[] = "(a+b*c)/(d-e*f)";
    char postfix[100];

    infixToPostfix(infix, postfix);

    printf("Infix: %s\n", infix);
    printf("Postfix: %s\n", postfix);

    return 0;
}