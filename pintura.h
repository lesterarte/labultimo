#pragma once 
#include <string>
#include "obras.h"
using std::string;

class pintura : public obras
{
	private:
		string material; 
		string tecnica; 

	public: 
		pintura(string,string,string,string,string);
		~pintura();
		string toString()const;

};