#include "PA8_Header.h"
class Node_base
{
public:
	Node_base();
	Node_base(string x);
	virtual ~Node_base();

	string getdata();
	void setdata(string newdata);

	Node_base *& getright();
	void setright(Node_base * newright);

	Node_base *& getleft();
	void setleft(Node_base * newleft);
	
	virtual void printdata() = 0;

private:
	string data;
	Node_base * pright;
	Node_base * pleft;
};

