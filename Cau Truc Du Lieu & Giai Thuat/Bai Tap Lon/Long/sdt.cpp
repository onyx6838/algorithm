#include<iostream> 
#include<cstring>
using namespace std; 
#define ID(c) ((int)c - (int)'0')  
struct TrieNode 
{ 
    struct TrieNode *children[10]; 
    bool isWordEnd; 
}; 
struct TrieNode *getNode(void) 
{ 
    struct TrieNode *pNode = new TrieNode; 
    pNode->isWordEnd = false;
    for (int i = 0; i < 10; i++) 
        pNode->children[i] = NULL; 
    return pNode; 
}
void insert(struct TrieNode *root,  const string a) 
{ 
    struct TrieNode *pCrawl = root;  
    for (int i = 0; i < a.length(); i++) 
    { 
        int index = ID(a[i]); 
        if (!pCrawl->children[index]) 
		pCrawl->children[index] = getNode();  
        pCrawl = pCrawl->children[index]; 
    }  
    pCrawl->isWordEnd = true; 
}  
bool search(struct TrieNode *root, const string a) 
{ 
    int length = a.length(); 
    struct TrieNode *pCrawl = root; 
    for (int i = 0; i < length; i++) 
    { 
        int index = ID(a[i]); 
  
        if (!pCrawl->children[index]) 
            return false; 
  
        pCrawl = pCrawl->children[index]; 
    } 
    return (pCrawl != NULL && pCrawl->isWordEnd); 
} 
bool isLastNode(struct TrieNode* root) 
{ 
    for (int i = 0; i < 10; i++) 
        if (root->children[i]) 
            return 0; 
    return 1; 
}  
void FindPrefix(struct TrieNode* root, string currPrefix) 
{ 
    if (root->isWordEnd)
    {   	
        cout << currPrefix; 
        cout << endl; 
    } 
    if (isLastNode(root)) 	return;
    for (int i = 0; i < 10; i++) 
    { 
        if (root->children[i]) 
        { 
  			string _currPrefix = currPrefix + (char)(48+i);
            FindPrefix(root->children[i],_currPrefix); 
        } 
    } 
} 
int print(TrieNode* root, string b) 
{ 
    struct TrieNode* pCrawl = root; 
    int i; 
    int n = b.length(); 
    for (i = 0; i < n; i++) 
    { 
        int index = ID(b[i]);
        pCrawl = pCrawl->children[index]; 
    } 
    bool isWord = (pCrawl->isWordEnd == true);  
    bool isLast = isLastNode(pCrawl);  
    if (isWord && isLast) 
    { 

        return -1; 
    } 
    if (!isLast) 
    { 
        string prefix = b; 
        for (int i = 0; i < 10; i++)
        if(pCrawl->children[i])
        {
        	cout<<"\nxau can tim:\n";
        	FindPrefix(pCrawl->children[i],prefix +(char)(48 +i)); 
    	}
        return 1; 
    } 
}  
int main() 
{ 
    struct TrieNode* root = getNode(); 
    int n;
    cout<<"\nnhap n:";
    cin>>n;
    string *a;
    a=new string[n];
    for(int i=0;i<n;i++)
    {
    	do	
    	{
			cout<<"\nnhap chuoi thu "<<i+1<<":";
    		cin>>a[i];
    	}
		while(a[i].length()>10);
	}
    for(int i=0;i<n;i++)
    {
    	insert(root, a[i]); 
    }
    int comp;
    for(int i=0;i<n;i++)
    {
    	cout<<"\nxau tien to dang xet:"<<a[i]<<endl;
	    comp = print(root, a[i]);
		if (comp == -1)
		{ 	
        	cout << "\nkhong tim thay\n"; 
		}
	}
	return 0;
}
