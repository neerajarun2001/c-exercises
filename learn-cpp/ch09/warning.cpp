#include <iostream>
 
void foo(int*&) // We cover & later. Don't worry about it for now, we're only using it to trick the compiler into thinking that p has a value.
{
    // p is a reference to a pointer.  We'll cover references (and references to pointers) later in this chapter.
    // We're using this to trick the compiler into thinking p could be modified, so it won't complain about p being uninitialized.
    // This isn't something you'll ever want to do intentionally.
}
 
int main()
{
    int* p; // Create an uninitialized pointer (that points to garbage)
    foo(p); // Trick compiler into thinking we're going to assign this a valid value
	    
    std::cout << *p << '\n'; // Indirection through the garbage pointer
 
    return 0;
}
