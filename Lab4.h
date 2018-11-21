#pragma once
#include <iostream>
#include <string>
using namespace std;
class lamp {

	char type;
	double power;
	double quantity;
	char producer;
protected: 
	double cost, discount;
public:
	lamp() {

	}
	lamp(char Type, double Power, double Quantity, char Producer, double Cost, double Discount) {
		type = Type;
		power = Power;
		quantity = Quantity;
		producer = Producer;
		cost = Cost;
		discount = Discount;
	}
	void getType() {
		cout << " type=" << type << "\n";

	}
	void getPower() {
		cout << " power=" << power << "\n";

	}
	void getQuantity() {
		cout << " quantity=" << quantity << "\n";

	}
	void getProducer() {
		cout << " producer=" << producer << "\n";
	}
	void getCost() {
		cout << " cost=" << cost << "\n";
	}
	void getDiscount() {
		cout << " discount=" << discount << "\n";
	}

};
