#include "Cart.h"
// Init 
Cart* Cart::cart = 0;

Cart::Cart()
{
}

Cart* Cart::get_cart()
{
	if (cart == 0)
	{
		cart = new Cart();
	}
	return cart;
}

vector<Product> Cart::get_product() const
{
	return product;
}

void Cart::add_product(const string& name, const string& type, const int& price)
{
	Product pr(name, type, price);
	for (int i = 0; i < product.size(); i++)
	{
		if (product[i].get_name() == name)
		{
			product[i].increase_count();
			return;
		}
	}
	product.push_back(pr);
}

void Cart::del_product(const string& name)
{
	for (int i = 0; i < product.size(); i++)
	{
		if (product[i].get_name() == name)
		{
			product.erase(product.begin() + i);
			return;
		}
	}
	cout << "Product name \"" + name + "\" is not available on cart" << endl;
}

int Cart::count_product() const
{
	int count = 0;
	for (int i = 0; i < product.size(); i++)
	{
		count += product[i].get_count();
	}
	return count;
}

bool Cart::is_cart_empty() const
{
	if (product.empty()) return true;
	return false;
}

void Cart::show_cart() const
{
	cout << "Cart:" << endl;
	cout << "No. / Name / Type / Price(vnd) / Vol" << endl;
	for (int i = 0; i < product.size(); i++)
	{
		cout << i + 1 << " / " << product[i].get_name() << " / " << product[i].get_type() << " / " << product[i].get_price() << " / " << product[i].get_count() << endl;
	}
	cout << "Tolal: " << count_product() << " product" << endl;
}
