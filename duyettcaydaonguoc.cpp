#include<bits/stdc++.h>
using namespace std;
vector<int>res;
struct node{
	int key;
	node*left;
	node*right;
	node(int x)
	{
		this->key=x;
		left=right=NULL;
	}
};

void addNODE(int u,int v,char x,node**root)
{
	if((*root)!=NULL&&(*root)->key==u)
	{
		if(x=='L') (*root)->right= new node(v);
		else (*root)-> left=new node(v);
	}
	else
	{
	if((*root)->left!=NULL) addNODE(u,v,x,&(*root)->left);
	if((*root)->right!=NULL) addNODE(u,v,x,&(*root)->right);
	}
}
void xuly(node*root)
{
	
    if (root == NULL)  return;
    queue<node *> q;
    q.push(root);
 
    while (q.empty() == false)
    {
        node *tmp = q.front();
        //cout << tmp->key << " ";
        res.push_back(tmp->key);
        q.pop();
 
        if (tmp->left != NULL)
            q.push(tmp->left);
        if (tmp->right != NULL)
            q.push(tmp->right);
    }
    for(int i=res.size()-1;i>=0;i--) cout<<res[i]<<" ";
}

main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,u,v;
		char x;
		cin>>n>>u>>v>>x;
		res.clear();
		node*root=new node(u);
		addNODE(u,v,x,&root);
		for(int i=2;i<=n;i++)
		{
			cin>>u>>v>>x;
			addNODE(u,v,x,&root);
		}
		xuly(root);
		cout<<endl;
		
	}
}
