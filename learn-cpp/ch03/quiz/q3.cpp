#include <iostream>
 
/* 1. What does the call stack look like for the following program?
 *
 * the call stack is ordered with the most recent function calls
 * at the top of the stack:
 *
 * d
 * b
 * a
 * main
 */
void d()
{ // here
}
 
void c()
{
}
 
void b()
{
	c();
	d();
}
 
void a()
{
	b();
}
 
int main()
{
	a();
 
	return 0;
}
