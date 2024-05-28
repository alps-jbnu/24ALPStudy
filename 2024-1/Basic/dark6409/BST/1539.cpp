// 시간 초과
#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
  Node(int x) : data(x), left(nullptr), right(nullptr){}
};

class BST{
public:
  Node* root;
  int hSum;

  BST() : root(nullptr), hSum(1) {}

  void insert(Node* v, int data, int height){
    if(data < v->data) {
      if(v->left != nullptr) insert(v->left, data, height+1);
      else {v->left = new Node(data); height += 1; hSum+=height;}
    }
    else{
      if(v->right != nullptr) insert(v->right, data, height+1);
      else {v->right = new Node(data); height += 1; hSum+=height;}
    }
  }
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  BST tree;

  int n; cin >> n;
  
  for(int i=0; i<n; i++){
    int data; cin >> data;
    if(!tree.root) tree.root = new Node(data);
    else tree.insert(tree.root, data, 1);
  }

  cout << tree.hSum << '\n';

}
