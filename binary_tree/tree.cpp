#include<iostream>
using namespace std;
class node {
    public: int data ;
    node *left;
    node *right ;
    node (int d){
        data =d;
        left=NULL;
        right=NULL;
    };
};
void PreOrder (node *r){
    if(r== NULL){
        return;
    }
    cout<<r->data<<"\t";
    PreOrder(r->left);
    PreOrder(r->right);

}

void InOrder (node *r){
    if(r== NULL){
        return;
    }
    
    InOrder(r->left);
    cout<<r->data<<"\t";
    InOrder(r->right);

}



void PostOrder (node *r){
    if(r== NULL){
        return;
    }
    
    PostOrder(r->left);
    
    PostOrder(r->right);
    cout<<r->data<<"\t";

}
int main(){


    node *root=new node (10);
        root->left=new node(20);
        root->right= new node(40);

        cout<<"Pre ordeer print \n";
        PreOrder(root);

        cout<<"\n Increment oder Print \n";
        InOrder(root);

        cout<<"\n Post Order Print \n";
        PostOrder(root);
    return 0;

}
