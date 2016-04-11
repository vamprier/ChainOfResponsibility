#include "GeneralManager.h"


GeneralManager::GeneralManager(string n):Manager(n)
{
}


GeneralManager::~GeneralManager(void)
{
}

void GeneralManager::RequestApplications(Request* request)
{
	if ( request->GetType() == "���")
	{
		cout<<name<<":"<<request->GetContext()<<request->GetNumber()<<"����׼"<<endl;
	} 
	else if ( request->GetType() == "��н" && request->GetNumber() <= 500)
	{
		cout<<name<<":"<<request->GetContext()<<request->GetNumber()<<"����׼"<<endl;
	}
	else if ( request->GetType() == "��н" && request->GetNumber() > 500)
	{
		cout<<name<<":"<<request->GetContext()<<request->GetNumber()<<"��˵��"<<endl;
	}
}