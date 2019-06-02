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

class seller {
public:
	int statusotpr;
	int statusord;
	seller() {
		statusord = 1;
		statusotpr = 1;
	}
	seller(int n) {
		statusord = rand() % 3;
		statusotpr = rand() % 3;
	}
};

class order {
public:
	void view(product obj, seller sel) {
		cout << "Your order:" << endl;
		cout << "Product's name: " << obj.name << endl;
		cout << "Product's cost: " << obj.cost << endl;
		if (sel.statusotpr == 1) {
			cout << "Product not shipped" << endl;
		}
		else
			cout << "Product shipped" << endl;
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
	void ViewOrder() {
		order obj3;
		seller sel(1);
		obj3.view(obj,sel);
		system("pause");
	}
};



int menu() {
	int num;
	cout << "1.Browse directory" << endl;
	cout << "2.Take order" << endl;
	cout << "3.Browse order" << endl;
	cout << "4.Exit" << endl;
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

