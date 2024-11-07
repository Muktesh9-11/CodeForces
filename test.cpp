#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

class TreeNode{
        public:

                int data;
                TreeNode* left;
                TreeNode* right;
                TreeNode(){
                        data = 0;
                        left = NULL;
                        right = NULL;
                }                
                TreeNode(int data1){
                        data = data1;
                        left = right = NULL;
                }
                TreeNode(int data, TreeNode* left, TreeNode* right){
                        data = data;
                        left = left;
                        right = right;
                }
};

int main(){
        //code here
        TreeNode* temp = new TreeNode(20);
        temp-> left = new TreeNode(30);
        cout<<temp->left->data<<endl; 
        return 0;
}