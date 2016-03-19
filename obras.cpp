#include "obras.h"
#include <string>
#include <sstream>
#include <cstdlib>
using std::string;
using std::stringstream;

obras::obras(string name, string autor, string fecha) 
{
	this -> name = name; 
	this -> autor = autor; 
	this -> fecha = fecha; 
}

obras::~obras()
{

}

string obras::toString()const
{
	stringstream ss;
	ss << this->name<<", "<<this->autor<<" , "<<this ->fecha;
	return ss.str();
}



