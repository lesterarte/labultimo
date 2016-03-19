#pragma once 
#include <string>
#include "obras.h"
using std::string;

class literatura : public obras
{
	private:
		string genero; 
		string epoca; 

	public: 
		literatura(string,string,string,string,string);
		~literatura();
		string toString()const;
};