#include <iostream>
#include "Base.hpp"

Base *generate( void )
{
	int ran;
	Base *gen;

	gen = 0;
	srand(time(0));
	ran = (rand() % 3);

	switch (ran)
	{
	case 0:
		gen = new A();
		cout << "Base instantiated  : A" << " generated" << endl;
		break;
	case 1:
		gen = new B();
		cout << "Base instantiated  : B" << " generated" << endl;
		break;
	case 2:
		gen = new C();
		cout << "Base instantiated  : C" << " generated" << endl;
		break;
	default:
		break;
	}
	return gen;
}

void identify(Base *p)
{

	if (dynamic_cast<A *>(p))
		cout << "A" << endl;
	else if (dynamic_cast<B *>(p))
		cout << "B" << endl;
	else if (dynamic_cast<C *>(p))
		cout << "C" << endl;

}

int main ()
{
	Base *a = generate();
	identify(a);
	delete a;
}
