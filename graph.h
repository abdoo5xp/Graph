
struct node {
	int data;
	node *next;
	
};
class graph {
protected:
	node**arr;
	node* head;
	int size;
public:
	
	graph(); /*{
		head = NULL;
		cout << "Enter the number of your vertices \n";
		cin >> size;

		arr = new node*[size];    //creating array of pointers with size.

		for (int i = 0; i < size; i++) //intializing all heads to equal NULL.
		{
			arr[i] = NULL;
		}
		
	}*/
	bool addEdge(int src, int dest);/* {
		if (src > size || dest > size)        return false;
		head = arr[src];
		if (head == NULL) {
			node* curr = new node;
			curr->data = dest;
			curr->next = NULL;
			head = curr;
			
			arr[src] = head;
			return true;
			
		}

		node* curr;
		for (curr = head; curr->next != NULL; curr = curr->next)
			continue;
		node* ptr = new node;
		ptr->data = dest;
		ptr->next = NULL;
		curr->next = ptr;
		return true;
	}*/
	void print();/* {
		node* curr;
		for (int i = 0; i < size; i++)
		{
			cout << "v(" << i << ")={";
			for (curr = arr[i]; curr != NULL; curr = curr->next)
			{
				cout << curr->data << ",";
			}
			cout << "} \n";
		}
	}*/
};

