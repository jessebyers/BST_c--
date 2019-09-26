
//HTable.h


#ifndef JESSE_ASSIGNMENT3H
#define JESSE_ASSIGNMENT3H

#include <cstdlib> //NULL
#include <iostream>


using namespace std;

template <typename data_type>
class HTable
{


	//typedef string data_type; 


public:

	//Constructor
	// Precondition: none
    // Postcondition: hashArray is initialised with new data and size is set to 1
	HTable(const data_type& initdata);


	// Precondition: none
    // Postcondition: hashArray is initialised and size is set to 0
	HTable();
	
	//Destructor
	// Precondition:  HTable has been initialised
    // Postcondition: hashArray is deleted and size set to 0
	~HTable();

	// Precondition: HTable has been initialised
    // Postcondition: new data is added to the array in the position returned by the hashfun
	void add(const data_type& addval);

	// Precondition: HTable has been initialised
    // Postcondition: data is removed from the table
	void remove(const data_type& removeval);

	// Precondition: HTable has been initialised with data
    // Postcondition: Htable is traversed and boolean value is returned if data is found/notfound
	bool search(data_type& searchval);

	// Precondition: HTable has been initialised with data and add is called
    // Postcondition: position in the array is returned
	int hashfun(int value);

	// Precondition: HTable has been initialised
    // Postcondition: hashArrays contents is added to a string and used for the cout operator
	string print();


private:

	data_type hashArray[150];
	int size;



};

	// Precondition: HTable has been initialised
    // Postcondition: hasArrays contents are printed
template <typename data_type>
ostream& operator <<(ostream& outs, HTable<data_type>& tableValues); 


#include "HTable.template"
#endif

