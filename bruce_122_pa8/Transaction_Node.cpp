#include "Transaction_Node.h"
/*************************************************************
* Function: constructor
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
Transaction_Node::Transaction_Node()
{
	this->units = 0;
}
/*************************************************************
* Function: destructor
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
Transaction_Node::~Transaction_Node()
{
}
/*************************************************************
* Function: copy costructor
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
Transaction_Node::Transaction_Node(Transaction_Node & copynode)
{
	this->setdata(copynode.getdata());
	this->units = copynode.getunits();
}
/*************************************************************
* Function: overloaded constructor
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
Transaction_Node::Transaction_Node(string newdata, int newunits)
{
	setdata(newdata);
	this->units = newunits;
}
/*************************************************************
* Function: getunits
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
int Transaction_Node::getunits()
{
	return this->units;
}
/*************************************************************
* Function: setunits
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void Transaction_Node::setunits(int newunits)
{
	this->units = newunits;
}
