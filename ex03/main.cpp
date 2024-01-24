#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

#include "HumanA.hpp"

int main()
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
	return 0;
}

// Using a pointer to Weapon would be beneficial in cases where the Human object
// does not necessarily need a Weapon at all times. For example, in the context
// of your HumanB class, a HumanB may not always have a Weapon. By using a pointer,
// you can easily represent this situation by setting the pointer to nullptr
// when no Weapon is present. This allows for flexibility in the HumanB class,
// as it can optionally have a Weapon.

// On the other hand, using a reference to Weapon would be more suitable when the
// Human object always needs a Weapon. For example, in the context of your HumanA class,
// a HumanA will always be armed. By using a reference, you ensure that a Weapon is always
// associated with a HumanA object. This provides stronger guarantees about the state of
// the HumanA object, as it will always have a Weapon.

// In general, whether to use a pointer or a reference depends on the specific requirements
// of your class design. If an object always needs to be associated with another object,
// use a reference. If an object may or may not need to be associated with another object,
// use a pointer.
