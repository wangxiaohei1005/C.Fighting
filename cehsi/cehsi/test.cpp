#include <iostream>

using namespace std;

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