#include "Transaction_Node.h"
class BST
{
public:
	BST();
	~BST();

	Node_base * getroot();
	void setroot(Node_base * newroot);
	
	void findsmallest();
	void findlargest();
	void insert(Transaction_Node *& newnode);
	void printdata();
private:
	Node_base * root;
	void destroytree(Node_base * root);
	void insert(Node_base *& root, Transaction_Node *& newnode);
	void printinorder(Node_base * root);

	void findsmallest(Node_base * root, Transaction_Node &return_node);
	void findlargest(Node_base * root, Transaction_Node &return_node);
};

