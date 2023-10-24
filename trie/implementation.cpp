#include<bits/stdc++.h>
using namespace std;
class trienode{
    public:
        char data;
        trienode* children[26];
        bool terminal;
        trienode(char ch){
            this->data=ch;
            for(int i=0;i<26;i++){
                children[i] =NULL;
            }
            terminal=false;
        }
};
class trie {
    public:
    trie(){
        root=new trienode('\0');
    }
    trienode* root;
    void insertutil(trienode* root,string word){
        if(word.length() == 0)
            root->terminal=true;
        int index=word[0] -'a';
        trienode* child;
        if(root->children != NULL){
            child=root->children[index];
        }else{
            child=new trienode(word[0]);
            root->children[index] = child;
        }
        insertutil(child,word.substr(1));
        
    }
    void insertnode(string word){
        return insertutil(root,word);
    }


    bool search(trienode* root,string word){
        if(word.length() == 0){
            return root->terminal;
        }
        int index=word[0] - 'a';
        trienode* child;
        if(root->children[index] != NULL){
            child=root->children[index];
        }
        else{
            return false;
        }
        return search(child,word.substr(1));

    }
    bool searchword(string word){
        return search(root,word);
    }
};
int main(){
    trie *d=new trie();
    d->insertnode("arm");
    d->insertnode("do");
    d->insertnode("hello");
    d->insertnode("hi");
    cout<<"present or not- > " << d->searchword("hello")<<endl;
    
}