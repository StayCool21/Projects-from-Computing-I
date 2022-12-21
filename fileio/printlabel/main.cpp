int main()
{

   string fileName;
   Person person;
   ifstream fin;

   cout << "Enter the file name: ";
   cin >> fileName;

   fin = openInputFile(fileName);

   person = readInPerson(fin);
   while(!fin.eof())
   {
      cout << endl;
      person.printMailingLabel();
      person = readInPerson(fin);
   }

   fin.close();
}

// function definitions should be implemented here
ifstream openInputFile(string fileName) {
   ifstream fileIn;
   
   fileIn.open(fileName);
   if(!fileIn.is_open()) {
      exit(1);
   }
   return fileIn;
}

Person readInPerson(ifstream &in) {
   string title;
   string firstName;
   string lastName;
   string streetAddress;
   string city;
   string state;
   string zipCode;
   getline(in, title, ',');
   getline(in, lastName, ',');
   getline(in, firstName, ',');
   getline(in, streetAddress, ',');
   getline(in, city, ',');
   getline(in, state, ',');
   getline(in, zipCode);
   
   Person person (title, firstName, lastName, streetAddress, city, state, zipCode);
   return person;
}
