#ifndef COMMONMANAGER_H
#define COMMONMANAGER_H


#include "manager.h"

class CommonManager : public Manager
{
public:
	CommonManager(string n);
	~CommonManager(void);
public:
	virtual void RequestApplications(Request* request);
};

#endif