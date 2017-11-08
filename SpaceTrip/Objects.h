//
//	default
//	2017/11/08
//

#pragma once

/*!
 * \file Objects.h
 *
 * \author default
 * 
 *
 * God Class
 */

class Objects
{
public:

	Objects(const int& xCoord, const int& yCoord);
	virtual int getX() const;
	virtual int getY() const;
	virtual void setX(const int& xCoord);
	virtual void setY(const int& yCoord);
	virtual ~Objects();

private:

	int xCoord_;
	int yCoord_;
};
