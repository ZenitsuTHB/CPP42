//42 HEADER






#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : _x(0), _y(0)  {

}

Point::Point(const Fixed nbr1, const Fixed nbr2) : _x(nbr1), _y(nbr2) {

}

Point::Point(const Point &copyConst) : _x(copyConst._x), _y(copyConst._y) 
{
}

Point& Point::operator=(const Point &copyAssign) {

  (void)copyAssign;
  //Since _x and _y are const We can't assign them 
  return (*this);
}


float Point::getX() const {

  return (_x.toFloat());

}

float Point::getY() const {

  return(_y.toFloat());
}

bool Point::operator==(const Point& point) {

  return (this->_x.toFloat() == point.getX() && 
      this->_y.toFloat() == point.getY());
}

std::ostream& operator<<(std::ostream& out, const Point& point)
{
  out<< point._x.toInt() << "," << point._y.toInt();

  return (out);
} 

Point::~Point() {}

