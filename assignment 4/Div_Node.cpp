#include "Div_Node.h"

Div_Node::Div_Node(void)
{

}
Div_Node::~Div_Node(void) 
{

}
Div_Node::Div_Node(Expr_Node * n1, Expr_Node * n2)
{
    this->right_ = n1;
    this->left_ = n2;
}
void accept(Visitor & V)
{
    //V(*this);
}
