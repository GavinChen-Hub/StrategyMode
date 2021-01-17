#include <iostream>
using namespace std;

class StrategyWeapon
{
public:
	virtual void use() = 0;
};

class knife:public StrategyWeapon
{
public:
	void use()
	{
		cout << "using knife" << endl;
	}
};

class gun:public StrategyWeapon
{
public:
	void use()
	{
		cout << "using gun" << endl;
	}
};