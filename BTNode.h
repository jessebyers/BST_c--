//Mr Jesse Byers
//3162857
//SENG1120 - Assignment 3
//BTNode.h


#ifndef JESSE_ASSIGNMENT3N
#define JESSE_ASSIGNMENT3N

#include <cstdlib> //NULL
#include <iostream>


using namespace std;

template <typename data_type>
class BTNode
{


	//typedef string data_type; 


public:

	//Constructor
	// Precondition: none
    // Postcondition: BTNode is set with data
	BTNode(const data_type& initdata);


	// Precondition: none
    // Postcondition: parent, left, right and data set to NULL
	BTNode();
	
	//Destructor
	// Precondition: node is initialized with data.
    // Postcondition: data, right, left and parent all set to NULL
	~BTNode();


	//Gets
    // Precondition: data has been initialized
    // Postcondition: data is returned
	data_type getData() const;

	// Precondition: data has been initialized
    // Postcondition: data is returned
	data_type& getData();

	// Precondition: right has been initialized
    // Postcondition: right is returned
	BTNode* getRight() const;

	// Precondition: left has been initialized
    // Postcondition: left is returned
	BTNode* getLeft() const;

	// Precondition: parent has been initialized
    // Postcondition: parent is returned
	BTNode* getParent() const;


  	//Sets
	// Precondition: data has been initialized
    // Postcondition: data is set
	void setData(const data_type& newData);

	// Precondition: data has been initialized
    // Postcondition: left is set with new data
	void setRight(BTNode* rightChild);

	// Precondition: data has been initialized
    // Postcondition: left is set with new data
	void setLeft(BTNode* leftChild);

	// Precondition: data has been initialized
    // Postcondition: parent is set with new data
	void setParent(BTNode* parentnode);






private:

	data_type data;
	BTNode* right;
	BTNode* left;
	BTNode* parent;




};

#include "BTNode.template"
#endif

