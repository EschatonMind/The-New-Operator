#include <iostream>
#include "Car.h"
using namespace std;

Car* SetNewCar(string name) {// inorder to return an object of type of any class the return type has to be apointer because when the function ends the object will be destroyed automatically inorder to prevent that we need to use heap memory
	Car* cara = new Car;
	cara->setname(name);
	return cara;
}

int main() {
	
	Car car1;// regular object created
	car1.setname("Ziba");
	Car car2 = car1;// acopy object created so a copy constructor is created
	Car* car3 = new Car;// an object created using heap
	car3->setname("Jigar");// to asign a function to an object which is created through heap we use " -> "
	delete car3;// heap memory allocation needs to be deallocated manually
	Car *car4 = SetNewCar("Ali");//inorder to be able to use the return type of a functions that returns apointer our newly cretaed object has to be created in heap
	delete car4;
	
	return 0;
}