#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
  public: 
    char value;
    int wordEnd;
    TrieNode* children[26];

    TrieNode(){
      wordEnd = 0;
      for(int i=0; i<26; i++){
        children[i] = nullptr;
      }
    }

    TrieNode(char ch){
      value = ch;
      wordEnd = 0;
      for(int i=0; i<26; i++){
        children[i] = nullptr;
      }
    }
};

class Trie{
  private:
    TrieNode* root;

    bool removeNode(TrieNode* node, int pos, string word);

  public:
    Trie(){
      this->root = new TrieNode('*');
    }

    bool insert(string word);
    bool search(string word);
    bool remove(string word);
};

bool Trie::insert(string word){
  TrieNode* ptr = this->root;
  for(char ch: word){
    int index = ch - 'a';
    if(ptr->children[index] == nullptr){
      ptr->children[index] = new TrieNode(ch);
    }
    ptr = ptr->children[index];
  }
  ptr->wordEnd = ptr->wordEnd + 1;
  return true;
};

bool Trie::search(string word){
  TrieNode* ptr = this->root;
  for(char ch: word){
    int index = ch - 'a';
    if(ptr->children[index] == nullptr){
      return false;
    }
    ptr = ptr->children[index];
  }
  return ptr->wordEnd > 0;
};

bool Trie::removeNode(TrieNode* node, int pos, string word){
  if(node == nullptr){
    return false;
  }

  if(pos == word.size()){
    if(node->wordEnd > 0){
      node->wordEnd = node->wordEnd - 1;
      return true;
    }
    return false;
  }

  int index = word[pos] - 'a';

  removeNode(node->children[index], pos+1, word);

  if(node->wordEnd == 0){
    bool isEmpty = true;
    for(int i=0; i<26; i++){
      if(node->children[i] != nullptr){
        isEmpty = false;
        break;
      }
    }

    if(isEmpty){
      delete node;
      node = nullptr;
    }
  }

  return true;
}

bool Trie::remove(string word){
  return this->removeNode(this->root, 0, word);
};

void menu(Trie trie){
  while(true){
    cout<<"\nEnter 1 to insert a word"<<endl;
    cout<<"Enter 2 to search a word"<<endl;
    cout<<"Enter 3 to remove a word"<<endl;
    cout<<"Enter 0 to Exit\n"<<endl;
    
    int option;
    cin>>option;

    string word;
    switch (option){
      case 0:
        cout<<".\n.....Exiting Program........."<<endl;
        return;
      
      case 1:
        cout<<"\nEnter Word :"<<endl;
        cin>>word;
        trie.insert(word);
        break;
      
      case 2: 
        cin>>word;
        if(trie.search(word)){
          cout<<"\nword found"<<endl;
        }
        else{
          cout<<"\nword not found"<<endl;
        }
        break;
      
      case 3:
        cin>>word;
        trie.remove(word);
        break;
      
      default:
        cout<<"\nInvalid Option"<<endl;
        break;
    }
  }
}

int main(){
  cout<<"DICTIONARY"<<endl;
  cout<<"\nTRIE IMPLEMENTATION\n\n"<<endl;

  Trie trie;

  trie.insert("abc");
  trie.insert("acd");
  trie.insert("abcde");
  cout<<trie.search("abcde")<<endl;
  trie.remove("abcde");
  cout<<trie.search("abcde")<<endl;
  cout<<trie.search("abc")<<endl;
  trie.remove("abc");
  cout<<trie.search("abc")<<endl;
  cout<<trie.search("efg")<<endl;
  trie.remove("efg");
  cout<<trie.search("efg")<<endl;


  return 0;
}