 ///
 /// @file    point.cc
 /// @author  chen(chengybotany.com)
 /// @date    2016-03-16 07:47:40
 /// @content 
 
#include <iostream>
using std::cout;
using std::endl;

class point
{
public:
	int _x;
	int _y;
public:
	point(int x = 0, int y = 0): _x(x), _y(y)
	{
		cout << "point()" << endl;
	}

	~point()
	{
		cout << "~point()" << endl;
	}

	void disp()
	{
		cout << "(" << _x << ", " << _y << ")" << endl;
	}

	int getX()
	{
		return _x;
	}

	int getY()
	{
		return _y;
	}
};

class point3D:point
{
private:
	int _z;
public:
	point3D(int x = 0, int y = 0, int z = 0):point(), _z(z)
	{
		_x = x;
		_y = y;
		_z = z;
		cout << "point3D" << endl;
	}

	~point3D()
	{
		cout << "~point3D()" << endl;
	}

	void disp()
	{
		cout << "(" << getX() << ", "  << getY() << ", "  << _z << ")" << endl;
	}
};

int main()
{
	point3D pt(1, 2, 3);
	pt.disp();
}
