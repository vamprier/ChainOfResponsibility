#include "GeneralManager.h"


GeneralManager::GeneralManager(string n):Manager(n)
{
}


GeneralManager::~GeneralManager(void)
{
}

void GeneralManager::RequestApplications(Request* request)
{
	if ( request->GetType() == "请假")
	{
		cout<<name<<":"<<request->GetContext()<<request->GetNumber()<<"被批准"<<endl;
	} 
	else if ( request->GetType() == "加薪" && request->GetNumber() <= 500)
	{
		cout<<name<<":"<<request->GetContext()<<request->GetNumber()<<"被批准"<<endl;
	}
	else if ( request->GetType() == "加薪" && request->GetNumber() > 500)
	{
		cout<<name<<":"<<request->GetContext()<<request->GetNumber()<<"再说吧"<<endl;
	}
}