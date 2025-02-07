#include <iostream>

template < typename T = float >
class Vertex {
	
	public:
		vertex( T const & x, T const & y, T const & z ) : _x( x ), _y( y ), _z( z ) {}
		~vertex( void ) {}

		T const & getX( void ) const { return this->_x;}
		T const & getY( void ) const { return this->_y;}
		T const & getZ( void ) const { return this->_z;}
	private:

		T const _x;
		T const _y;
		T const _z;

		vertex( void );
};

template < typename T >
std::ostream & operator<<(std::ostream & o, vertex< T > const & v)
{
	std::cout.precision( 1 );
	o << setiosflags( std::ios::fixed );
	o << "Vertex( ";
       	o << v.getX(); << ",";	
       	o << v.getY(); << ",";	
       	o << v.getZ();
       	o << " )";
	return 0;
}



//template < typename T >
//T const & max ( const T & x , const T & y )
//{
//	return(x >= ? x : y);
//}
//
//int main()
//{
//	int a = 21;
//	int b = 42;
//
//	std::cout << "max of " << a << " and " << b << "is : ";
//	std::cout << max<int> ( a,b ) << std::endl; // Explicit instantiation 
//	std::cout << "max of " << a << " and " << b << "is : ";
//	std::cout << max ( a,b ) << std::endl; // implicit instantiation
//
//	float	a = -2.1f;
//	float	b = -4.2f;
//
//	std::cout << "max of " << a << " and " << b << "is : ";
//	std::cout << max<float> ( a,b ) << std::endl; // Explicit instantiation 
//	std::cout << "max of " << a << " and " << b << "is : ";
//	std::cout << max ( a,b ) << std::endl; // implicit instantiation
//
//}

//template <typename T>
//T max(T a, T b) {
//    return (a > b) ? a : b;
//}
//
//int main() {
// 
//    std::cout << max(4, 5) << std::endl;         // Works with int
//    std::cout << max(3.5, 4.8) << std::endl; // Works with double
//    return 1;
//}

//template <typename T>
//T max(T a, T b) {
//    return (a > b) ? a : b;
//}
//
//int main() {
// 
//    std::cout << max(4, 5) << std::endl;         // Works with int
//    std::cout << max(3.5, 4.8) << std::endl; // Works with double
//    return 1;
//}
