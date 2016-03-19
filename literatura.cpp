#include "literatura.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

literatura::literatura(string genero, string epoca, string name, string autor, string fecha) :  obras(name,autor,fecha) ,
 genero(genero), epoca(epoca)
{

}
literatura::~literatura()
{
	
}


string literatura::toString()const
{
	stringstream ss;
	ss << obras::toString()<<genero<<", "<<epoca;
	return ss.str();
}

