#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person {
   private:
   string title;
   string firstName;
   string lastName;
   string streetAddress;
   string city;
   string state;
   string zipCode;
   
   public:
   Person();
   Person(string title, string firstName, string lastName, string streetAddress, string city, string state, string zipCode);
   
   string getTitle();
   string getFirstName();
   string getLastName();
   string getStreetAddress();
   string getCity();
   string getState();
   string getZipCode();
   
   void setTitle(string title);
   void setFirstName(string firstName);
   void setLastName(string lastName);
   void setStreetAddress(string streetAddress);
   void setCity(string city);
   void setState(string state); 
   void setZipCode(string zipCode);
   void printMailingLabel();
};
#endif