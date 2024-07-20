//42 HEADER



#ifndef _POINT_HPP
# define _POINT_HPP


#include <string>
#include "Fixed.hpp"
#include "Point.hpp"


class Point {

  private:

    const Fixed _x;
    const Fixed _y;

  public:

    Point();
    ~Point();
    Point(const Point &copyConst);
    Point &operator=(const Point &copyAssign);
    Point(const Fixed nbr1, const Fixed nbr2);

    bool operator==(const Point& point);

    float getX() const;
    float getY() const;

    //Overloading the "<<" (insertion) operator to print a Point object
    friend std::ostream& operator<<(std::ostream& out, const Point& point);  
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

