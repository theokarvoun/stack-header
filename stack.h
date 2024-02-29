#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 1000

struct STACK {
	int elements[STACK_SIZE];
	int top;
}stack = {{0},-1};

void push(int num);
int pop(void);
void add(void);
void mul(void);
void sub(void);
void division(void);
int showResult(void);

void push(int num){
	if (stack.top == -1){
		stack.elements[0] = num;
		stack.top = 1;
		return;
	}
	stack.elements[stack.top++] = num;
}

int pop(void){
	if (stack.top == -1){
		printf("Stack is empty\n");
		return -1;
	}
	return stack.elements[--stack.top];
}

void add(void){
	push(pop() + pop());
}

void mul(void){
	push(pop() * pop());
}

void sub(void){
	push(pop() - pop());
}

void division(void){
	int temp1;
	temp1 = pop();
	int temp2;
	temp2 = pop();
	switch (temp1){
		case 0:{
			printf("Cannot divide by 0\n");
			break;
		}
		default:{
			push(temp1 / temp2);
			break;
		}
	}
	
}

int showResult(void){
	int temp;
	temp = pop();
	push(temp);
	return temp;
}
