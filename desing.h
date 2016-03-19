#pragma once
#include <string>
#include "obras.h"
using std::string; 

class desing : public obras
{
	private:
		string terreno; 

	public: 
		desing(string,string,string,string);
		~desing();
		string toString()const;
};