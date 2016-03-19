#pragma once 
#include <string>
using std::string;

class obras 
{
	private: 
		string name; 
		string autor; 
		string fecha; 

	public:
		obras(string,string,string);
		~obras();
		string toString()const;	
};