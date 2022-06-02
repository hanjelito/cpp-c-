#ifndef BASE_HPP
#define BASE_HPP

# include <stdlib.h>
# include <time.h>

using std::cout;
using std::endl;

class Base
{
	public:
		virtual	~Base() {};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base *generate();
void identify(Base *p);

#endif
