#include "Point.hpp"

float	triangle_calc( Point const one, Point const two, Point const three )
{
	float	area;

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

	// check if point is a vertex or on edge
	if ( pab == 0 || pbc == 0 || pac == 0)
		ret_val = false;
	else if ( pab + pbc + pac == abc )
		ret_val = true;

	return (ret_val);
}
