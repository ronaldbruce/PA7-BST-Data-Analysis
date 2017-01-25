#include "BST.h"
class Data_Analysis
{
public:
	Data_Analysis();
	~Data_Analysis();
	void openstream()
	{
		instream.open("data.csv");
	}
	void closestream()
	{
		instream.close();
	}

	void make_trees();
	void insert_trees(string transaction, string units_st, string type);
	void run_anal();
private:
	BST tree_sold;
	BST tree_purchased;
	ifstream instream;
	
};

