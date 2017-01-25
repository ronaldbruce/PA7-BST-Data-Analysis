#include "BST.h"

/*************************************************************
* Function: constructor
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
BST::BST()
{
	root = nullptr;
}
/*************************************************************
* Function: deconstructor
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
BST::~BST()
{
	destroytree(root);
}
/*************************************************************
* Function: getroot
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
Node_base * BST::getroot()
{
	return root;
}
/*************************************************************
* Function: setroot
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void BST::setroot(Node_base * newroot)
{
	root = newroot;
}
/*************************************************************
* Function: insert public
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void BST::insert(Transaction_Node *& newnode)
{
	insert(root,newnode);
}
/*************************************************************
* Function: insert private
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void BST::insert(Node_base *& root, Transaction_Node *& newnode)
{
	
	if (root == nullptr) // base case
	{
		root = newnode;
	} 
	else if (newnode->getunits() > static_cast<Transaction_Node*>(root)->getunits()) // using static casst to transaction node so i can acces getunits
	{
		insert(root->getright(), newnode); // go right
	}
	else if (newnode->getunits() < static_cast<Transaction_Node*>(root)->getunits()) // go left
	{
		insert(root->getleft(), newnode);
	}
	else
	{
		cout << "Tried to insert duplicate" << endl; // if node has same units
	}
}
/*************************************************************
* Function: privatly deconstructs tree
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void BST::destroytree(Node_base * del_node)
{
	if (del_node != nullptr)
	{
		destroytree(del_node->getleft());
		destroytree(del_node->getright());
	}
	delete del_node;
}
/*************************************************************
* Function: printdata
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void BST::printdata()
{
	printinorder(root);
}
/*************************************************************
* Function: print private
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void BST::printinorder(Node_base * root)
{
	if (root != nullptr)
	{
		printinorder(root->getleft());
		root->printdata();
		printinorder(root->getright());
	}
}
/*************************************************************
* Function: findsmallest public 
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void BST::findsmallest()
{
	Transaction_Node return_node;
	findsmallest(root, return_node);
	cout << "smallest node type: " << return_node.getdata() << " smallest node units: " << return_node.getunits() << endl;
	
}
/*************************************************************
* Function: findlargest public 
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void BST::findlargest()
{
	Transaction_Node return_node;
	findlargest(root,return_node);
	cout << "largest node type: " << return_node.getdata() << " largest node units: " << return_node.getunits() << endl;
	
}
/*************************************************************
* Function: findsmallest private
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void  BST::findsmallest(Node_base * root, Transaction_Node &return_node)
{
	if (root->getleft() == nullptr)
	{
		return_node.setdata(root->getdata());
		return_node.setunits(static_cast<Transaction_Node*>(root)->getunits()); // seting data in transaction node passed in
	}
	else
	{
		findsmallest(root->getleft(), return_node);
	}
}
/*************************************************************
* Function: find largest private
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void BST::findlargest(Node_base * root, Transaction_Node &return_node)
{
	if (root->getright() == nullptr)
	{
		return_node.setdata(root->getdata());
		return_node.setunits(static_cast<Transaction_Node*>(root)->getunits());
	}
	else
	{
		findlargest(root->getright(), return_node);
	}
}
