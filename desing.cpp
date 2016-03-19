#include "desing.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

desing::desing(string terreno, string name, string autor, string fecha) :  obras(name,autor,fecha),terreno(terreno)
{

}
desing::~desing()
{
	
}


string desing::toString()const
{
	stringstream ss;
	ss << obras::toString()<<this->terreno;
	return ss.str();
}





