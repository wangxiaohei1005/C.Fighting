#include <new>
#include <iostream>
//
//template<class T>
//T* Alloc
//{
//	T* tmp = new(std::nothrow) T();
//	return tmp;
//}


class Test
{
public:
	Test() :x(10), y(10){}
	~Test()
	{
		cout << "deconstructor" << endl;
		cout << x << " " << y << endl;
	}
private:
	int x;
	int y;
};

int main()
{
	Test app;
	app.~Test();
	return 0;
}