#pragma once
#include <vector>
#include "Product.h"

class Cart
{
private:
	vector<Product> product;
	static Cart* cart;
private:
	Cart();
public:
	static Cart* get_cart();
	vector<Product> get_product() const;
	void add_product(const string& name, const string& type, const int& price);
	void del_product(const string& name);
	int count_product() const;
	bool is_cart_empty() const;
	void show_cart() const;
};

