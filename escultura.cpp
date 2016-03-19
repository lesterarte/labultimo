#include "escultura.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

escultura::escultura(string peso, string material, string name, string autor, string fecha) :  obras(name,autor,fecha),
 peso(peso), material(material)
{

}
escultura::~escultura()
{
	
}


string escultura::toString()const
{
	stringstream ss;
	ss << obras::toString()<<peso<< ", "<<material;
	return ss.str();
}



