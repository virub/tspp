// tspp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class product {
public:
	int cost;
	string name;
	product() {
		cost = 0;
		name = "name";
	}
	product(int _cost, string _name) {
		cost = _cost;
		name = _name;
	}
};

class seller {
public:
	int statusotpr;
	int statusord;
	seller() {
		statusord = 0;
		statusotpr = 1;
	}
	 int funk(){
		statusotpr = rand() % 3;
		return statusotpr;
	}
};

class order {
public:
	void view(product obj, int flag) {
		cout << "Your order:" << endl;
		cout << "Product's name: " << obj.name << endl;
		cout << "Product's cost: " << obj.cost << endl;
		if (flag == 1) {
			cout << "Product not shipped" << endl;
		}
		else
			if (flag == 5)
				cout << "You have not confirmed the order!" << endl;
			else {
				cout << "Product shipped" << endl;
				flag = 2;
			}
	}
};


class customer {
public:
	string FIO;
	int telnum;
	string adress;
	product obj;
	seller sel;
	customer() {
		FIO = "Viari";
		telnum = 452901;
		adress = "Ostryk246";
	}
	product TakeOrder() {
		char flag;
		while (1) {
			cout << "Enter name of product witch you want to order: ";
			cin >> obj.name;
			if (obj.name == "computer") {
				obj.cost = 1500;
				break;
			}
			else
				if (obj.name == "headphones") {
					obj.cost = 100;
					break;
				}
				else
					if (obj.name == "mouse") {
						obj.cost = 30;
						break;
					}
					else
						if (obj.name == "grafictable") {
							obj.cost = 500;
							break;
						}
						else {
							cout << "There is no such product" << endl;
						}
		}
		cout << "This product cost: " << obj.cost << endl;
		cout << "Are you sure to order it? Y/N  ";
		cin >> flag;
		if (flag == 'y') {
			sel.statusord = 1;
		}
		return obj;
	}
	void ViewOrder() {
		order obj3;
		int flag;
		if (sel.statusord == 1) {
			flag = sel.funk();
			obj3.view(obj, flag);
		}
		else
		{
			flag = 5;
			obj3.view(obj, flag);
		}
		system("pause");
	}
};

int menu() {
	int num;
	system("cls");
	cout << "1.Browse directory" << endl;
	cout << "2.Take order" << endl;
	cout << "3.Browse order" << endl;
	cout << "4.Exit" << endl;
	cout << "Enter number: ";
	cin >> num;
	return num;
}

void Directory() {
	cout << "Name of product" << setw(5) << "Cost" << endl;
	cout << "Computer" << setw(12) << "1500$" << endl;
	cout << "Headphones" << setw(10) << "100$" << endl;
	cout << "Grafic table" << setw(8) << "500$" << endl;
	cout << "Mouse" << setw(15) << "30$" << endl;
}

int main()
{
	customer obj;
	while(1){
		switch (menu()) {
		case 1: {
			Directory();
			system("pause");
			break;
		}
		case 2: {
			obj.TakeOrder();
			break;
		}
		case 3: {
			obj.ViewOrder();
			break;
		}
		case 4: {
			return 0;
		}
		}
	}
	return 0;
}

