//
//	default
//	2017/11/08
//

#include "Objects.h"

Objects::Objects(const int & xCoord, const int & yCoord) : 
	xCoord_(xCoord),
	yCoord_(yCoord)
{ }

int Objects::getX() const
{
	return xCoord_;
}

int Objects::getY() const
{
	return yCoord_;
}

void Objects::setX(const int & xCoord)
{
	xCoord_ = xCoord;
}

void Objects::setY(const int & yCoord)
{
	yCoord_ = yCoord;
}

Objects::~Objects()
{
}
