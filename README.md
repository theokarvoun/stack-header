# stack-header
 A basic stack structure in C. To use it copy the stack.h file to the directory of your project and include it by using #include "stack.h".
 void push(int num), puts the number on the stack.
 int pop(void), takes out the number that was last put on the stack
 void add(void), adds the last two numbers that are on the stack
 void mul(void), multiplies the last two numbers on the stack
 void sub(void), subtracts the last two numbers on the stack
 void division(void), divides the last two numbers on the stack

REMINDER: the stack is a LIFO (Last In First Out) struture, which means that the numeric operations use the operands in the oposite way they were put in.
Example: 
push(5)
push(3)
sub()
The result will be -2