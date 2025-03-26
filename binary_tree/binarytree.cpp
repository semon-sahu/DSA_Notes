//binar tree implementation code 

#include <iostream>
using namespace std;
class node
{
    public:int data;
    node *left;
    node *right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
int main(){
    node *root=new node(10);//insert at root
    root->left=new node(20);//insert at left
    root->right=new node(30);//insert at right
    cout<<"preorder\n";
    cout<<root->data<<"\t";
    cout<<root->left->data<<"\t";
    cout<<root->right->data<<"\n";
    cout<<"inorder\n";
    cout<<root->left->data<<"\t";
    cout<<root->data<<"\t";
    cout<<root->right->data<<"\n";
    cout<<"postorder\n";
    cout<<root->left->data<<"\t";
    cout<<root->right->data<<"\t";
    cout<<root->data<<"\n";

}