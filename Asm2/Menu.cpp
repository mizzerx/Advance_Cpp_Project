#include "Menu.h"

Menu::Menu(const string& name)
{
	option = -1;
	pr_src = new ProductResource;
	product = pr_src->get_src();
	customer = new Customer(name);
}

void Menu::show_menu()
{
	cout << "==========================" << endl;
	cout << "[1]. List avaiable product" << endl;
	cout << "[2]. Add product from list" << endl;
	cout << "[3]. Delete product" << endl;
	cout << "[4]. Show cart" << endl;
	cout << "[5]. Exit" << endl;
	cout << "==========================" << endl;
	cout << "Please choose option 1 to 5: ";
	int choose;
	cin >> choose;
	set_option(choose);
}

int Menu::get_option() const
{
	return option;
}

void Menu::set_option(const int& choose)
{
	if (choose < 0 || choose > 5)
	{
		cout << "Please choose again" << endl;
		show_menu();
	}
	option = choose;
	switch (option)
	{
	case 1:
		system("CLS");
		cout << "No. / Name / Type / Price(vnd)" << endl;
		cout << "------------------------" << endl;
		for (int i = 0; i < product.size(); i++)
		{
			cout << i + 1 << " / " << product[i].get_name() << " / " << product[i].get_type() << " / " << product[i].get_price() << endl;
		}
		cout << "------------------------" << endl;
		system("pause");
		break;
	case 2:
		system("CLS");
		cout << "No. / Name / Type / Price(vnd)" << endl;
		cout << "------------------------" << endl;
		for (int i = 0; i < product.size(); i++)
		{
			cout << i + 1 << " / " << product[i].get_name() << " / " << product[i].get_type() << " / " << product[i].get_price() << endl;
		}
		cout << "------------------------" << endl;
		cout << "Please choose one of above product to add to cart: ";
		int a;
		cin >> a;
		if (a > 0 && a <= 5)
		{
			customer->add_product_to_cart(product[a - 1].get_name(), product[a - 1].get_type(), product[a - 1].get_price());
		}
		else if (a < 0 && a > 5)
		{
			cout << "Error" << endl;
		}
		system("pause");
		break;
	case 3:
		system("CLS");
		customer->show_cart();
		cout << "Choose product to delete from cart: ";
		int b;
		cin >> b;
		if (b > 0 && b < customer->get_product_cart().size())
		{
			vector<Product> pr = customer->get_product_cart();
			customer->del_product_from_cart(pr[b - 1].get_name());
		}
		else
		{
			cout << "Invalid product" << endl;
		}
		system("pause");
		break;
	case 4:
		system("CLS");
		customer->show_cart();
		system("pause");
		break;
	case 5:
		system("CLS");
		cout << "Goodbye" << endl;
		system("pause");
		break;
	default:
		system("CLS");
		cout << "Incorrect input / choose" << endl;
		system("pause");
		break;
	}
}