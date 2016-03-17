 ///
 /// @file    override.cc
 /// @author  chen(chengybotany.com)
 /// @date    2016-03-17 01:51:40
 /// @content 派生类对基类成员的隐藏，基类成员的调用方式
 
#include <iostream>

using std::cout;
using std::endl;

class Cbase
{
protected:
	int _i;
public:
	int Func(int i)
	{
		return _i;
	}
};

class Cderived : public Cbase
{
public:
	int _i;
	int Func()
	{
		_i = 9;
		Cbase::_i = 10;
		return _i;
	}
};

int main(void)
{
	Cderived obj;
	cout << obj.Func() << endl;
	//obj.Func(3);
	cout << obj.Cbase::Func(3) << endl;
	return 0;
}
