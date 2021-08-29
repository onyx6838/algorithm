#include<iostream> 
using namespace std; 
#define ID(c) ((int)c - (int)'a')  
class TrieNode 
{ 
	public:
    	TrieNode *children[26]; 
    	bool isWordEnd;
		TrieNode *getNode();
		void insert(TrieNode* root, const string a);
		bool isLastNode(TrieNode* root);
		void FindPrefix(TrieNode* root,string currPrefix);
		int print(TrieNode* root,string b);
}; 

TrieNode *TrieNode ::getNode() 
{ 
	TrieNode *pNode = new TrieNode; 
    pNode->isWordEnd = false;
    for (int i = 0; i < 26; i++) 
        pNode->children[i]= NULL;
    return pNode; 
}    

void TrieNode ::insert(TrieNode* root,const string a) 
{   
    for (int i = 0; i < a.length(); i++) 
    { 
        int index = ID(a[i]); 
        if (!root->children[index]) 
		root->children[index] = root->getNode();  
        root = root->children[index]; 
    }  
    root->isWordEnd = true; 
}  

bool TrieNode ::isLastNode(TrieNode* root) 
{ 
    for (int i = 0; i < 26; i++) 
        if (root->children[i]) 
            return 0; 
    return 1; 
}  
void TrieNode ::FindPrefix(TrieNode* root,string currPrefix) 
{ 
    if (root->isWordEnd)
    {   	
        cout << currPrefix; 
        cout << ","; 
    } 
    if (root->isLastNode(root)) 
        return;
    for (int i = 0; i < 26; i++) 
    { 
        if (root->children[i]) 
        { 
  			string _currPrefix = currPrefix + (char)(97+i);
            FindPrefix(root->children[i],_currPrefix); 
        } 
    } 
} 
int TrieNode::print(TrieNode* root, string b) 
{ 
    int i; 
    int n = b.length(); 
    for (i = 0; i < n; i++) 
    { 
        int index = ID(b[i]);
        if(!root->children[index])	return 0;
        root = root->children[index]; 
    } 
    bool isWord = (root->isWordEnd == true);  
    bool isLast = root->isLastNode(root);  
    if (isWord && isLast) 
    { 
        return -1; 
    } 
    if (!isLast) 
    { 
        string prefix = b; 
        for (int i = 0; i < 26; i++)
        if(root->children[i])
        {
        	cout<<"nhung tu co chua tu khoa can tim o dau: ";
        	
        	FindPrefix(root->children[i],prefix +(char)(97 +i)); 
    	}
        return 1; 
    } 
}  
int main() 
{ 
	TrieNode* p;
    TrieNode *root;
	root = p->getNode(); 
    int n;
    cout<<"\nnhap n:";
    cin>>n;
    string *a;
    a=new string[n];
    for(int i=0;i<n;i++)
    {
    	cout<<"\nnhap tu thu "<<i+1<<":";
    	cin>>a[i];
	}
    for(int i=0;i<n;i++)
    {
    	p->insert(root, a[i]); 
    }
    int comp;
    string m;
    cout<<"\nnhap tu khoa can tim:";
    cin.ignore(1);
    getline(cin,m);
    comp = p->print(root,m);
	if (comp == -1)
	{ 	
       	cout << "\nNhung khong tim thay tu nao chua tu khoa nay o dau"; 	
	} 
	else if(comp==0)
	{
		cout<<"\n- khong tim thay tu nao chua tu khoa nay o head";	
	} 
	return 0;
}
