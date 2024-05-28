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
    height+=1;
    if(data < v->data) {
      if(v->left == nullptr) {
        v->left = new Node(data); hSum+=height;}
      else insert(v->left, data, height);
    }
    else{
      if(v->right == nullptr) {
        v->right = new Node(data); hSum+=height; }
      else insert(v->right, data, height);
    }
  }
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  BST tree;

  int n; cin >> n;

  int data; cin >> data;
  tree.root = new Node(data);
  
  for(int i=1; i<n; i++){
    cin >> data;
    tree.insert(tree.root, data, 1);
  }

  cout << tree.hSum << '\n';

}
