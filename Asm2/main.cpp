#include "Menu.h"

int main()
{
	string customer_name;
	cout << "Enter your name: ";
	cin >> customer_name;
	Menu* menu = new Menu(customer_name);
	do
	{
		system("CLS");
		menu->show_menu();
	} while (menu->get_option() > 0 && menu->get_option() < 5);
	return 0;
};