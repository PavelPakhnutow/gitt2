#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
using namespace std;

class func
{
private:
	float res, fir, sec;
public:
	void set();
	void getf(); 
	void gets();
	float sum();
	float sub();
	float mul();
	float div();
};

#endif // _HEADER_H_