#ifndef MANAGER_H
#define MANAGER_H

#include "Request.h"

class Manager
{
public:
	Manager(string n);
	virtual ~Manager(void);
public:
	void SetSuperior(Manager* s);
	virtual void RequestApplications(Request* request) = 0;
protected:
	string name;
	Manager* superior;
};

#endif