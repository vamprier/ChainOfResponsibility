#include "CommonManager.h"


CommonManager::CommonManager(string n):Manager(n)
{
}


CommonManager::~CommonManager(void)
{
}

void CommonManager::RequestApplications(Request* request)
{
	if ( request->GetType() == "���" && request->GetNumber() <= 2)
	{
		cout<<name<<":"<<request->GetContext()<<request->GetNumber()<<"����׼"<<endl;
	}
	else
	{
		if (superior != NULL)
		{
			superior->RequestApplications(request);
		}		
	}
}