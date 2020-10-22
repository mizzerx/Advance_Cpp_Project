#pragma once
#include "Cart.h"

class Customer
{
private:
	Cart* cart;
	string name;
public:
	Customer(const string& name);
	Customer(const string& name, const string& product_name, const string& product_type, const int& product_price);

	void add_product_to_cart(const string& product_name, const string& product_type, const int& product_price);
	void del_product_from_cart(const string& product_name);
	void show_cart() const;
	vector<Product> get_product_cart() const;
};

