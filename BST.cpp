#ifdef _BST_h


template <typename elemtype>
BST<elemtype>::BST(){
  root=NULL;
}


template <typename elemtype>
BST<elemtype>::~BST(){
	deletecompletelist(root);
}

template <typename elemtype>
void BST<elemtype>::deletecompletelist(nodeT *t){
	if(t!=NULL)
	{
		deletecompletelist(t->left);
		deletecompletelist(t->right);
		cout<<"deletingCompList::"<<t<<endl;
		delete t;
	}
}


template <typename elemtype>
void BST<elemtype>::add(elemtype val){
	addnode(root,val);
}

template <typename elemtype>
void BST<elemtype>::addnode(nodeT *&t,elemtype a){
	if(t==NULL)
	{
		t=new nodeT;
		t->key=a;
		t->left=NULL;
		t->right=NULL;
	}else if(a==t->key)
	{
		cout<<"ALREADY THERE "<<endl;
	}else if(a<t->key)
	{
		addnode(t->left,a);
	}else {
		addnode(t->right,a);
	}
}

template <typename elemtype>
void BST<elemtype>::find(elemtype valu){
	findval(root,valu);
}

template <typename elemtype>
void BST<elemtype>::findval(nodeT *y,elemtype j){	if(y==NULL)
	{
		cout<<"There existis no such value"<<endl;
	}else if(y->key==j)
	{
		cout<<"Woho value found at the following address"<<&y<<;
	}else if(j<y->key)
	{
		findval(y->left,j);
	}else
	{
		finadval(y->right,j);
	}
}



template <typename elemtype>
void BST<elemtype>::printinorder(){
	cout<<"Printing output INORDER"<<endl;
	inorder(root);
}

template <typename elemtype>
void BST<elemtype>::inorder(nodeT *p){
	if(p !=NULL)
	{
	inorder(p->left);
	cout<<p->key<<endl;
	inorder(p->right);
	}
}


template <typename elemtype>
void BST<elemtype>::printpostorder(){
	cout<<"Printing output POSTORDER"<<endl;
	postorder(root);
}

template <typename elemtype>
void BST<elemtype>::postorder(nodeT *p){
	if(p !=NULL)
	{
	postorder(p->left);
	postorder(p->right);
	cout<<p->key<<endl;
	}
}


template <typename elemtype>
void BST<elemtype>::printpreorder(){
	cout<<"Printing output PREORDER"<<endl;
	preorder(root);
}

template <typename elemtype>
void BST<elemtype>::preorder(nodeT *p){
	if(p !=NULL)
	{
		cout<<p->key<<endl;
	preorder(p->left);
	preorder(p->right);
	
	}
}


#endif
