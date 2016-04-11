#include "Majordomo.h"


Majordomo::Majordomo(string n):Manager(n)
{
}


Majordomo::~Majordomo(void)
{
}

void Majordomo::RequestApplications(Request* request)
{
	if ( request->GetType() == "Çë¼Ù" && request->GetNumber() <= 5)
	{
		cout<<name<<":"<<request->GetContext()<<request->GetNumber()<<"±»Åú×¼"<<endl;
	} 
	else
	{
		if (superior != NULL)
		{
			superior->RequestApplications(request);
		}
	}
}