#include "Data_Analysis.h"
/*************************************************************
* Function: constructor
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
Data_Analysis::Data_Analysis()
{
}
/*************************************************************
* Function: deconstructor
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
Data_Analysis::~Data_Analysis()
{
	tree_purchased.~BST();
	tree_sold.~BST();
}
/*************************************************************
* Function: builds trees
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void Data_Analysis::make_trees()
{
	
	string units_st;
	string type;
	string transaction;

	getline(instream, units_st, ','); // gets header
	getline(instream, type, ',');
	getline(instream, transaction, '\n');

	while (!instream.eof()) // loops through csv file
	{
		getline(instream, units_st, ',');
		getline(instream, type, ',');
		getline(instream, transaction, '\n');

		insert_trees(transaction,units_st,type);
	}

	
}
/*************************************************************
* Function: inserts nodes into trees
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void Data_Analysis::insert_trees(string transaction, string units_st, string type)
{

	int units = stoi(units_st);
	Transaction_Node * newnode = new Transaction_Node(type, units); // dynamically allocating node
	
	if (transaction[0] == 'S')
	{
		tree_sold.insert(newnode);
	}
	else if (transaction[0] == 'P')
	{
		tree_purchased.insert(newnode);
	}
}
/*************************************************************
* Function: runs analysis(app)
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void Data_Analysis::run_anal()
{
	openstream(); // opens stream
	make_trees(); // build trees
	closestream();

	cout << "tree of sold: " << endl << endl; // do/output analysis
	tree_sold.printdata();

	cout << "tree of purchased: " << endl << endl;
	tree_purchased.printdata();

	cout << endl << "trends for sold: " << endl;
	
	tree_sold.findlargest();
	tree_sold.findsmallest();
	cout << endl;
	cout << "trends for purchased: " << endl;

	tree_purchased.findlargest();
	tree_purchased.findsmallest();


}
