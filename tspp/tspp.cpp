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
		cout << "Switch products" << endl;

	}
};

class seller {
public:
	int numtel;
	seller() {
		numtel = 0;
	}
	seller(int _numtel) {
		numtel = _numtel;
	}

};

int main()
{
	list<product> listProduct;

	product *pr = new product();
	//listProduct.insert(pr);

	return 0;
	
}

