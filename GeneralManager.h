#ifndef GENERALMANAGER_H
#define GENERALMANAGER_H


#include "manager.h"

class GeneralManager : public Manager
{
public:
	GeneralManager(string n);
	~GeneralManager(void);
public:
	virtual void RequestApplications(Request* request);
};

#endif