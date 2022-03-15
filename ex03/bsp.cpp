#include "Point.hpp"

// float	triangle_calc( Point const one, Point const two, Point const three )
// {
// 	float	area;

// 	// ################### TESTS #############################
// 	std::cout << "one.getXFloat(): " << one.getXFloat() << std::endl;

// 	//Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
// 	area =	(
// 			( one.getXFloat() * ( two.getYFloat() - three.getYFloat() ) )
// 			+ ( two.getXFloat() * ( three.getYFloat() - one.getYFloat() ) )
// 			+ ( three.getXFloat() * ( one.getYFloat() - two.getYFloat() ) )
// 			)
// 			/ 2;

// 	return (area);
// }

// bool	bsp( Point const a, Point const b, Point const c, Point const point )
// {
// 	bool	ret_val;
// 	float	abc;
// 	float	pab;
// 	float	pbc;
// 	float	pac;

// 	ret_val = false;
// 	// calculate area of original triangle (ABC)
// 	abc = triangle_calc( a, b, c );
// 	// calculate area of triangle PAB
// 	pab = triangle_calc( point, a, b );
// 	// calculate area of triangle PBC
// 	pbc = triangle_calc( point, b, c );
// 	// calculate area of triangle PAC
// 	pac = triangle_calc( point, a, c );

// 	// ################### TESTS #############################
// 	std::cout << "abc: " << abc << std::endl;
// 	std::cout << "pab: " << pab << std::endl;
// 	std::cout << "pbc: " << pbc << std::endl;
// 	std::cout << "pac: " << pac << std::endl;

float	triangle_calc( Point const one, Point const two, Point const three )
{
	float	area;

	// ################### TESTS #############################
	//std::cout << "one.getXFloat(): " << one.getXFloat() << std::endl;

	//Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
	area =	(
			( one.getXFloat() * ( two.getYFloat() - three.getYFloat() ) )
			+ ( two.getXFloat() * ( three.getYFloat() - one.getYFloat() ) )
			+ ( three.getXFloat() * ( one.getYFloat() - two.getYFloat() ) )
			)
			/ 2;

	if (area >= 0)
		return (area);
	else
		return (area * -1);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	bool	ret_val;
	float	abc;
	float	pab;
	float	pbc;
	float	pac;

	ret_val = false;
	// calculate area of original triangle (ABC)
	abc = triangle_calc( a, b, c );
	// calculate area of triangle PAB
	pab = triangle_calc( point, a, b);
	// calculate area of triangle PBC
	pbc = triangle_calc( point, b, c);
	// calculate area of triangle PAC
	pac = triangle_calc( point, a, c);

	// ################### TESTS #############################
	//std::cout << "abc: " << abc << std::endl;
	//std::cout << "pab: " << pab << std::endl;
	//std::cout << "pbc: " << pbc << std::endl;
	//std::cout << "pac: " << pac << std::endl;

	// check if point is a vertex or on edge
	if ( pab == 0 || pbc == 0 || pac == 0)
		ret_val = false;
	else if ( pab + pbc + pac == abc )
		ret_val = true;

	return (ret_val);
}


// 	// check if point is a vertex or on edge
// 	if ( pab == 0 || pbc == 0 || pac == 0)
// 		ret_val = false;
// 	else if ( pab + pbc + pac == abc )
// 		ret_val = true;

// 	return (ret_val);
// }


// ############### NO floats #################
// Fixed	triangle_calc( Point one, Point two, Point three )
// {
// 	Fixed	area;

// 	// ################### TESTS #############################
// 	std::cout << "one.getX(): " << one.getX() << std::endl;

// 	//Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
// 	area =	(Fixed)0.5f *
// 			( one.getX() * ( two.getY() - three.getY() ) )
// 			+ ( two.getX() * ( three.getY() - one.getY() ) )
// 			+ ( three.getX() * ( one.getY() - two.getY() ) );
// 	if (area >= (Fixed)(0))
// 		return (area);
// 	else
// 		return (area * (Fixed)(-1));
// }

// bool	bsp( Point const a, Point const b, Point const c, Point const point )
// {
// 	bool	ret_val;
// 	Fixed	abc;
// 	Fixed	pab;
// 	Fixed	pbc;
// 	Fixed	pac;

// 	ret_val = false;
// 	// calculate area of original triangle (ABC)
// 	abc = triangle_calc( a, b, c );
// 	// calculate area of triangle PAB
// 	pab = triangle_calc( a, b, point );
// 	// calculate area of triangle PBC
// 	pbc = triangle_calc( b, c, point );
// 	// calculate area of triangle PAC
// 	pac = triangle_calc( a, c, point );

// 	// ################### TESTS #############################
// 	std::cout << "abc: " << abc << std::endl;
// 	std::cout << "pab: " << pab << std::endl;
// 	std::cout << "pbc: " << pbc << std::endl;
// 	std::cout << "pac: " << pac << std::endl;



// 	// check if point is a vertex or on edge
// 	if ( pab == 0 || pbc == 0 || pac == 0)
// 		ret_val = false;
// 	else if ( pab + pbc + pac == abc )
// 		ret_val = true;

// 	return (ret_val);
// }
