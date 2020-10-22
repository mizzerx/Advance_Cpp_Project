#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
	string product_name;
	string product_type;
	int product_price;
	int count;
public:
	Product();
	Product(const string& name, const string& type, const int& price);

	string get_name() const;
	string get_type() const;
	int get_price() const;

	void set_name(const string& name);
	void set_type(const string& type);
	void set_price(const int& price);

	void increase_count();
	int get_count() const;
};

