#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

void main(void) {
	char a, b;
	cin >> a;
	cin >> b;
	lamp lamp1(a, 2.2, 3.6, b, 5.5, 1.1);
	lamp1.getType();
	lamp1.getPower();
	lamp1.getQuantity();
	lamp1.getProducer();
	lamp1.getCost();
	lamp1.getDiscount();

	cin >> a;
	cin >> b;
	lamp lamp2(a, 3.1, 2, b, 6.0, 0.9);
	lamp2.getType();
	lamp2.getPower();
	lamp2.getQuantity();
	lamp2.getProducer();
	lamp2.getCost();
	lamp2.getDiscount();

	cin >> a;
	cin >> b;
	lamp lamp3(a, 4, 1.3, b, 3.1, 0.1);
	lamp3.getType();;
	lamp3.getPower();
	lamp3.getQuantity();
	lamp3.getProducer();
	lamp3.getCost();
	lamp3.getDiscount();

	system("pause");

}
