#ifndef REQUEST_H
#define REQUEST_H

#define NULL 0x00

#include <string>
#include <iostream>

using namespace std;

class Request
{
public:
	Request(string t,string c,int n);
	~Request(void);
public:
	string GetType();
	string GetContext();
	int GetNumber();
private:
	string type;
	string context;
	int number;
};

#endif