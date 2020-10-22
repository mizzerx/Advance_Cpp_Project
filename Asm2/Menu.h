#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include "ProductResource.h"
#include "Cart.h"
#include "Product.h"
#include "Customer.h"

using namespace std;

class Menu
{
private:
	int option;
	ProductResource* pr_src;
	vector<Product> product;
	Customer* customer;
public:
	Menu(const string& name);

public:
	void show_menu();
	int get_option() const;
private:
	void set_option(const int& choose);
};

