// tspp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>

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

class customer {
public:
	string FIO;
	int telnum;
	string adress;
	product obj;
	seller obj2;
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
		cout << "This product cost: " << endl;
			cout << "Enter information: " << endl;
			cout << "FIO: "; cin >> FIO;
			cout << "Adress: "; cin >> adress;
			cout << "Telephone number: "; cin >> telnum;
			cout << "Are you sure to order it? Y/N" << endl;
			cin >> flag;
			if (flag == 'y') {
				obj2.
			}
	}
};

class seller {
public:
	int statusotpr;
	int statusord;
	seller() {
		statusord = 0;
		statusotpr - 0
	}

};

int main()
{
	list<product> listProduct;

	product *pr = new product();
	//listProduct.insert(pr);
	//123

	return 0;
	
}

