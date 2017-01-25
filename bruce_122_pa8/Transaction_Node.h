
#include "Node_base.h"
class Transaction_Node :
	public Node_base
{
public:

	Transaction_Node();
	Transaction_Node(string newdata,int units);
	Transaction_Node(Transaction_Node & copynode);
	~Transaction_Node();

	int getunits();
	void setunits(int newunits);

	virtual void printdata()
	{
		cout << "data: " << this->getdata() << " Units: " << this->units << endl;
	}

private:
	int units;
};

