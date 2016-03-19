#include "pintura.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

pintura::pintura(string material, string  tecnica, string name, string autor, string fecha) :  obras(name,autor,fecha),
 material(material), 
tecnica(tecnica)
{

}
pintura::~pintura()
{
	
}


string pintura::toString()const
{
	stringstream ss;
	ss << obras::toString()<<material<<","<<tecnica;
	return ss.str();
}


