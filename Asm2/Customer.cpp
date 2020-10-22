#include "Customer.h"

Customer::Customer(const string& name)
{
	this->name = name;
	cart = Cart::get_cart();
}

Customer::Customer(const string& name, const string& product_name, const string& product_type, const int& product_price)
{
	cart = Cart::get_cart();
	cart->add_product(product_name, product_type, product_price);
	this->name = name;
}

void Customer::add_product_to_cart(const string& product_name, const string& product_type, const int& product_price)
{
	cart->add_product(product_name, product_type, product_price);
}

void Customer::del_product_from_cart(const string& product_name)
{
	cart->del_product(product_name);
}

void Customer::show_cart() const
{
	cout << "Customer name: " << name << endl;
	cart->show_cart();
}

vector<Product> Customer::get_product_cart() const
{
	return cart->get_product();
}
