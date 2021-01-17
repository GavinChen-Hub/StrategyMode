#include <iostream>
#include "customer.h"
using namespace std;

int main()
{
	knife k;
	Customer *cus = new Customer(&k);
	cus->fighting();

	gun g;
	cus->changeWeapon(&g);
	cus->fighting();

	return 0;



}