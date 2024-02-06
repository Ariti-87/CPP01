#include "Zombie.hpp"

//heap
Zombie* newZombie( std::string name );

//stack
void randomChump( std::string name );

int main(void)
{
	Zombie cos("Cos");
	cos.annonce();

	randomChump("Sin");
	Zombie *Rin3 = newZombie("Tan");
	Rin3->annonce();
	delete Rin3;

	return 0;
}

// The decision to allocate objects on the stack or heap in C++ depends on several factors:

// Lifetime: Stack-allocated objects are automatically deallocated when they go out of scope,
// while heap-allocated objects persist until explicitly deleted.
// If a zombie only exists within a certain scope, it might be better to allocate it
// on the stack. If a zombie needs to exist beyond its creation scope,
// then it should be allocated on the heap.

// Memory Management: Stack allocation is simpler and safer because it doesn't
// require manual memory management. Heap allocation gives you more control over memory,
// allowing you to create and destroy objects at runtime.

// Size: Large objects are typically better off on the heap to avoid wasting stack space.
// Small objects can be efficiently managed on the stack.
