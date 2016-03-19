#pragma once 

#include <string>
#include "obras.h"
using std::string;

class escultura : public obras
{
	private:
		string peso; 
		string material; 

	public: 
		escultura(string,string,string,string,string);
		~escultura();
		string toString()const;
};