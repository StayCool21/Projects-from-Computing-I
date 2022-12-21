#include "Person.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

Person::Person() {
}

Person::Person(string title, string firstName, string lastName, string streetAddress, string city, string state, string zipCode) {
   this->title = title;
   this->firstName = firstName;
   this->lastName = lastName;
   this->streetAddress = streetAddress;
   this->city = city;
   this->state = state;
   this->zipCode = zipCode;
}

string Person::getTitle() {
   return title;
}

string Person::getFirstName() {
   return firstName;
}

string Person::getLastName() {
   return lastName;
}

string Person::getStreetAddress() {
   return streetAddress;
}

string Person::getCity() {
   return city;
}

string Person::getState() {
   return state;
}

string Person::getZipCode() {
   return zipCode;
}

void Person::setTitle(string title) {
   this->title = title;
}

void Person::setFirstName(string firstName) {
   this->firstName = firstName;
}

void Person::setLastName(string lastName) {
   this->lastName = lastName;
}

void Person::setStreetAddress(string streetAddress) {
   this->streetAddress = streetAddress;
}

void Person::setCity(string city) {
   this->city = city;
}

void Person::setState(string state) {
   this->state = state;
}

void Person::setZipCode(string zipCode) {
   this->zipCode = zipCode;
}

void Person::printMailingLabel() {
   string fullName;
   
   fullName = getTitle() + " " + getFirstName() + " " + getLastName();
   cout << fullName << endl;
   cout << getStreetAddress() << endl;
   cout << getCity() << ", " << getState() << " " << getZipCode() << endl;
}
