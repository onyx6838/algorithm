#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 
#define ID(c) ((int)c - (int)'a')  
class TrieNode 
{ 
	private:
    	TrieNode *children[26]; 
    	bool isWordEnd;
    	TrieNode *root;
	public:
		TrieNode();
		void insert( const string a);
//		bool search( const string a);
		bool isLastNode();
		void FindPrefix(string currPrefix);
		int print(string b);
}; 
TrieNode *TrieNode::getNode() 
{
	TrieNode *pNode = new TrieNode; 
	pNode->isWordEnd = false; 
	for (int i = 0; i < 26; i++) 
		pNode->children[i] = NULL; 
	return pNode;
}
TrieNode::TrieNode()
{
	isWordEnd=false;
	for (int i = 0; i < 26; i++) 
        children[i] = NULL;
}
void TrieNode::insert(const string a) 
{   
	TrieNode *pCrawl=root;
    for (int i = 0; i < a.length(); i++) 
    { 
        int index = ID(a[i]); 
        if (!pCrawl->children[index]) 
			pCrawl->children[index] = new TrieNode();
        pCrawl = pCrawl->children[index]; 
    }  
    pCrawl->isWordEnd = true; 
}  
//bool TrieNode::search( const string a) 
//{ 
//    int n = a.length(); 
//    TrieNode *root=new TrieNode; 
//    for (int i = 0; i < n; i++) 
//    { 
//        int index = ID(a[i]); 
//        if (!root->children[index]) 
//            return false; 
//  
//        root = root->children[index]; 
//    } 
//    return (root != NULL && root->isWordEnd); 
//} 
bool TrieNode::isLastNode() 
{ 
	TrieNode *pCrawl=root;
    for (int i = 0; i < 26; i++) 
        if (pCrawl->children[i]) 
            return 0; 
    return 1; 
}  
void TrieNode::FindPrefix(string currPrefix) 
{ 
	TrieNode *pCrawl=root;
    if (pCrawl->isWordEnd)
    {   	
        cout << currPrefix; 
        cout << endl; 
    } 
    if (pCrawl->isLastNode()) 
        return;
    for (int i = 0; i < 26; i++) 
    { 
        if (pCrawl->children[i]) 
        { 
  			string _currPrefix = currPrefix + (char)(97+i);
            FindPrefix( _currPrefix); 
        } 
    } 
} 
int TrieNode::print(string b) 
{ 
    TrieNode* pCrawl = root; 
    int i; 
    int n = b.length(); 
    for (i = 0; i < n; i++) 
    { 
        int index = ID(b[i]);
        pCrawl = pCrawl->children[index]; 
    } 
    bool isWord = (pCrawl->isWordEnd == true);  
    bool isLast = pCrawl->isLastNode();  
    if (isWord && isLast) 
    { 
        return -1; 
    } 
    if (!isLast) 
    { 
        string prefix = b; 
        for (int i = 0; i < 26; i++)
        if(pCrawl->children[i])
        {
        	cout<<"\nxau can tim:\n";
        	FindPrefix(prefix +(char)(97 +i)); 
    	}
        return 1; 
    } 
}  
int main() 
{ 
//    TrieNode *root;
//    root=new TrieNode;
//	root.getNode(); 
//    int n;
//    cout<<"\nnhap n:";
//    cin>>n;
//    string *a;
//    a=new string[n];
//    for(int i=0;i<n;i++)
//    {
//    	cout<<"\nnhap chuoi thu "<<i+1<<":";
//    	cin>>a[i];
//	}
//    for(int i=0;i<n;i++)
//    {
//    	root.insert( a[i]); 
//    }
//    int comp;
//    for(int i=0;i<n;i++)
//    {
//    	cout<<"\nxau tien to dang xet:"<<a[i]<<endl;
//	    comp = root.print(a[i]);
//		if (comp == -1)
//		{ 	
//        	cout << "\nkhong tim thay\n"; 
//		}  
//	}
//	return 0;
   	TrieNode *root=new TrieNode();
    int n;
    cout<<"\nnhap n:";
    cin>>n;
    string *a;
    a=new string[n];
    for(int i=0;i<n;i++)
    {
    	cout<<"\nnhap chuoi thu "<<i+1<<":";
    	cin>>a[i];
	}
    for(int i=0;i<n;i++)
    {
    root->insert(a[i]); 
    }
    int comp;
    for(int i=0;i<n;i++)
    {
    	cout<<"\nxau tien to dang xet:"<<a[i]<<endl;
	    comp = root->print(a[i]);
		if (comp == -1)
		{ 	
        	cout << "\nkhong tim thay\n"; 
		}
	}
	return 0;
}
