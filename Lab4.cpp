#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

void main(void) {
	char LampType, LampProducerName;

	cin >> LampType;
	cin >> LampProducerName;

	lamp lamp1(LampType, 2.2, 3.6, LampProducerName, 5.5, 1.1);
	lamp1.getLampType();
	lamp1.getPowerOfLamp();
	lamp1.getQuantityOfLamps();
	lamp1.getNameOfLampProducer();
	lamp1.getCostOfLamp();
	lamp1.getSizeOfDiscount();

	cin >> LampType;
	cin >> LampProducerName;

	lamp lamp2(LampType, 3.1, 2, LampProducerName, 6.0, 0.9);
	lamp2.getLampType();
	lamp2.getPowerOfLamp();
	lamp2.getQuantityOfLamps();
	lamp2.getNameOfLampProducer();
	lamp2.getCostOfLamp();
	lamp2.getSizeOfDiscount();

	cin >> LampType;
	cin >> LampProducerName;

	lamp lamp3(LampType, 4, 1.3, LampProducerName, 3.1, 0.1);
	lamp3.getLampType();
	lamp3.getPowerOfLamp();
	lamp3.getQuantityOfLamps();
	lamp3.getNameOfLampProducer();
	lamp3.getCostOfLamp();
	lamp3.getSizeOfDiscount();

	system("pause");

}
