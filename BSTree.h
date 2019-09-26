
//BSTree.h


#ifndef JESSE_ASSIGNMENT3BST
#define JESSE_ASSIGNMENT3BST

#include <cstdlib> //NULL
#include <iostream>
#include "BTNode.h"


using namespace std;

template <typename data_type>
class BSTree
{

	//typedef string data_type; 

public:

	//Constructor
	// Precondition: none
    // Postcondition: root is initialized with data, size is set to 1
	BSTree(data_type& initdata);


	// Precondition: none
    // Postcondition: root is set to NULL and size is set to 0
	BSTree();
	
	//Destructor
	// Precondition: BSTree has been initialised
    // Postcondition: size is set to 0 and root is set to NULL. 
	~BSTree();

	// Precondition: size has been initialised
    // Postcondition: size is returned
	int getSize();

	// Precondition: BSTree has been initialised
    // Postcondition: insert is called
	void add(data_type newdata);

	// Precondition: root has been initialised
    // Postcondition: root is returned
	data_type getRoot() const;

	// Precondition: BSTree has been initialised
    // Postcondition: find is called
	data_type search(data_type target) ;

	// Precondition: BSTree has been initialised and search has been called 
    // Postcondition: function searches the the tree and returns the data if found or -1 if not found
	data_type find(BTNode<data_type>* currentnode, data_type target);

	// Precondition: BSTree has been initialised
    // Postcondition: BTNode is added to the tree in correct position with newdata
 	void insert(BTNode<data_type>* currentnode, data_type& newdata);

	// Precondition: BSTree has been initialised with data
    // Postcondition: toString is called
	string toString();

	// Precondition: BSTree has been initialised with data. toString has been called.
    // Postcondition: the data is returned and added to a string which is then outputted by the cout operator
	string toString(BTNode<data_type>* currentnode, int level);


	// Precondition:  BTree has been initialised with data
    // Postcondition: node is removed from the tree and the tree is reorganised to account for this.
	void remove(BTNode<data_type>* p);

	// Precondition:  BTree has been initialised with data
    // Postcondition: remove is called
	void remove (data_type deleteItem);

	// Precondition: preorder has been called. BTree has been initialised with data
    // Postcondition: data is added to a string and passed onto the cout operator
	string preorder(BTNode<data_type>* currentnode) const;

	// Precondition: BTtree has been initialised
    // Postcondition: preorder is called.
	string preorder() const;



private:
	BTNode<data_type>* root;
	int size;


};

	// Precondition:  BTree has been initialised with data/nodes
    // Postcondition: prints the tree in the specified order
template <typename data_type>
ostream& operator <<(ostream& outs, BSTree<data_type>& treeValues); 


#include "BSTree.template"
#endif

