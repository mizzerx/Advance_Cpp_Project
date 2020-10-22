#pragma once
#include "Product.h"
#include <vector>

class ProductResource
{
private:
	vector<Product> product_src;
public:
	ProductResource();

	vector<Product> get_src() const;

private:
	void add_avaiable_src();
};

