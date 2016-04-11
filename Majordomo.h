#ifndef MAJORDOMO_H
#define MAJORDOMO_H


#include "manager.h"

class Majordomo : public Manager
{
public:
	Majordomo(string n);
	~Majordomo(void);
public:
	virtual void RequestApplications(Request* request);
};

#endif