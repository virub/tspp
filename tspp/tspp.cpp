// tspp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

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

class order {
public:
	int status;
	order() {
		status = 0;
	}
	void view(product obj) {
		cout << "Your order:" << endl;
		cout << "Product's name: " << obj.name << endl;
		cout << "Product's cost: " << obj.cost << endl;
		if (status == 0) {
			cout << "Product not shipped" << endl;
		}
		else
			cout << "Product shipped" << endl;
	}
};

class seller {
public:
	int statusotpr;
	int statusord;
	seller() {
		statusord = rand() % 3;
		statusotpr = rand() % 3;
	}
};

class customer {
public:
	string FIO;
	int telnum;
	string adress;
	product obj;
	seller obj2;
	customer() {
		FIO = "Viari";
		telnum = 452901;
		adress = "Ostryk246";
	}
	product TakeOrder() {
		char flag;
		cout << "Enter name of product witch you want to order: " << endl;
		cin >> obj.name;
		obj.cost = rand() % 1000;
		cout << "This product cost: " << obj.cost << endl;
			cout << "Are you sure to order it? Y/N" << endl;
			cin >> flag;
			if (flag == 'y') {
				obj2.statusord = 1;
			}
			return obj;
	}
	void ViewOrder(product obj) {
		order obj3;
		obj3.view(obj);
		system("pause");
	}
};

int menu() {
	int num;
	cout << "1.Browse directory" << endl;
	cout << "2.Take order" << endl;
	cout << "3.Browse order" << endl;
	cout << "Enter number: ";
	cin >> num;
	return num;
}

int main()
{
	string FIO, adress;
	int numtel;
	char flag;
	customer obj;
	while(1){
		switch (menu()) {
		case 1: {

		}
		case 2: {
			obj.ViewOrder(obj.TakeOrder());
			break;
		}
		case 3: {

		}
		}
	}
	cout << "Are you sure to order? Y/N ";
	return 0;
}

