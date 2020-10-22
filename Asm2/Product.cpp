#include "Product.h"

Product::Product()
{
	//Nothing to do
}

Product::Product(const string& name, const string& type, const int& price)
{
	product_name = name;
	product_type = type;
	product_price = price;
	count = 1;
}

string Product::get_name() const
{
	return product_name;
}

string Product::get_type() const
{
	return product_type;
}

int Product::get_price() const
{
	return product_price;
}

void Product::set_name(const string& name)
{
	product_name = name;
}

void Product::set_type(const string& type)
{
	product_type = type;
}

void Product::set_price(const int& price)
{
	product_price = price;
}

void Product::increase_count()
{
	count = count + 1;
}

int Product::get_count() const
{
	return count;
}
