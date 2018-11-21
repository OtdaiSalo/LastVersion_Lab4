#pragma once
#include <iostream>
#include <string>
using namespace std;
class lamp {

	char typeOfLamp;
	double powerOfLamp;
	double quantityOfLamps;
	char producerOfLamp;
protected: 
	double costOfLamp, discountSize;
public:
	lamp() {

	}
	lamp(char TypeOfLamp, double PowerOfLamp, double QuantityOfLamps, char ProducerOfLamp, double CostOfLamp, double DiscountSize) {
		typeOfLamp = TypeOfLamp;
		powerOfLamp = PowerOfLamp;
		quantityOfLamps = QuantityOfLamps;
		producerOfLamp = ProducerOfLamp;
		costOfLamp = CostOfLamp;
		discountSize = DiscountSize;
	}
	void getLampType() {
		cout << " type of this lamp = " << typeOfLamp << "\n";

	}
	void getPowerOfLamp() {
		cout << " power of this lamp = " << powerOfLamp << "\n";

	}
	void getQuantityOfLamps() {
		cout << " quantity of lamps = " << quantityOfLamps << "\n";

	}
	void getProducergetNameOfLampProducer() {
		cout << " producer of this lamp = " << producerOfLamp << "\n";
	}
	void getCostOfLamp() {
		cout << " cost of this lamp = " << costOfLamp << "\n";
	}
	void getSizeOfDiscount() {
		cout << "size of discount on this lamp = " << discountSize << "\n";
	}

};