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
	product obj;
	order() {
		status = 0;
	}
	void view() {
		cout << "Your order:" << endl;
		cout << "Product's name: " << obj.name << endl;
		cout << "Product's cost" << obj.cost << endl;
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
	order obj3;
	customer() {
		FIO = "FIO";
		telnum = 0;
		adress = "adress";
	}
	customer(string _FIO, int _telnum, string _adress) {
		FIO = _FIO;
		telnum = _telnum;
		adress = _adress;
	}
	void TakeOrder() {
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
	}
	void ViewOrder() {
		obj3.view();
		system("pause");
	}
};

int main()
{
	string FIO, adress;
	int numtel;
	char flag;
	cout << "Create customer acount: " << endl;
	cout << "Enter FIO: "; cin >> FIO;
	cout << "Enter adress: "; cin >> adress;
	cout << "Enter your telephone number: "; cin >> numtel;
	customer obj(FIO, numtel, adress);
	obj.TakeOrder();
	cout << "Do you want to view your order? Y/N ";
	cin >> flag;
	if (flag == 'y') {
		obj.ViewOrder();
	}
	return 0;
	
}

