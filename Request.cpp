#include "Request.h"


Request::Request(string t,string c,int n):type(t),context(c),number(n)
{
}


Request::~Request(void)
{
}

string Request::GetType()
{
	return type;
}

string Request::GetContext()
{
	return context;
}

int Request::GetNumber()
{
	return number;
}