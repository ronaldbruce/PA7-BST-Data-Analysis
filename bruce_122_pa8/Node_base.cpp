#include "Node_base.h"
/*************************************************************
* Function: constructor
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
Node_base::Node_base()
{
	this->data = "";
	this->pleft = nullptr;
	this->pright = nullptr;
}
/*************************************************************
* Function: destructor
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
Node_base::~Node_base()
{

}
/*************************************************************
* Function: constructor
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
Node_base::Node_base(string newdata)
{
	this->data = newdata;
	this->pleft = nullptr;
	this->pright = nullptr;
}
/*************************************************************
* Function: getdata
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
string Node_base::getdata()
{
	return data;
}
/*************************************************************
* Function: setdata
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void Node_base::setdata(string newdata)
{
	this->data = newdata;
}
/*************************************************************
* Function: getright
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
Node_base *& Node_base::getright()
{
	return pright;
}
/*************************************************************
* Function: setleft
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
void Node_base::setright(Node_base * newright)
{
	pright = newright;
}
/*************************************************************
* Function: getleft
* Date Created: 11/20/16
* Date Last Modified: 11/20/16
* Returns: void
* Preconditions: none
*************************************************************/
Node_base *& Node_base::getleft()
{
	return pleft;
}
void Node_base::setleft(Node_base * newleft)
{
	pleft = newleft;
}

