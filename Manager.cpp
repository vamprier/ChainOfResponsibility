#include "Manager.h"


Manager::Manager(string n):name(n)
{
}


Manager::~Manager(void)
{
}

void Manager::SetSuperior(Manager* s)
{
	superior = s;
}
