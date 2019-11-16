#include "Contact.h"

void test()
{
	Contact ct;
	InitContact(&ct);
	AddContact(&ct);
	DelContact(&ct);
	SearchContact(&ct);
}

int main()
{
	test();
	return 0;
}
