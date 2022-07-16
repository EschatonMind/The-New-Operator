#pragma once
#include <iostream>
using namespace std;
class Car
{
protected:
	
private:
	string name;
	static int CarsNom;
public:

	Car(const Car& other) { 
		name = other.name; 
		cout << " Copy Constructor created : " << endl;
		CarsNom++;
	}

	Car() { 
		cout << " Constructor created : " << endl;
		CarsNom++;
		cout << " CarsNom : " << CarsNom << endl;
	}

	~Car() {
		cout << name << " Destroyed :  " << endl;
		if(CarsNom > 0)CarsNom--;
		cout << " CarsNom :  " << CarsNom << endl;
	}

	void setname(string name) {
		this->name = name;
	}


};

int Car::CarsNom = 0;

