#include "Visitor_Node.h"

Visitor_Node::Visitor_Node(void)
    
{

}
Visitor_Node::~Visitor_Node(void)
{

}
void Visitor_Node::Visit_Add_Node(Add_Node & add)
{
    add.getRight()->accept(*this);
    int n1S = this->solution_;


    add.getLeft()->accept(*this);
    int n2S = this->solution_;

    solution_ = n1S + n2S;  
}
void Visitor_Node::Visit_Neg_Node(Neg_Node & neg)
{
    neg.getRight()->accept(*this);
    int n1S = this->solution_;


    neg.getLeft()->accept(*this);
    int n2S = this->solution_;

    solution_ = n1S - n2S;
}
void Visitor_Node::Visit_Multi_Node(Multi_Node & multi)
{
    multi.getRight()->accept(*this);
    int n1S = this->solution_;


    multi.getLeft()->accept(*this);
    int n2S = this->solution_;

    solution_ = n1S * n2S;
}
void Visitor_Node::Visit_Mod_Node(Mod_Node & mod)
{
    mod.getRight()->accept(*this);
    int n1S = this->solution_;


    mod.getLeft()->accept(*this);
    int n2S = this->solution_;

    solution_ = n1S % n2S;
}
void Visitor_Node::Visit_Num_Node(Num_Node & num) // **
{
    //solution_ = num.
}
void Visitor_Node::Visit_Div_Node(Div_Node & div)
{
    div.getRight()->accept(*this);
    int n1S = this->solution_;


    div.getLeft()->accept(*this);
    int n2S = this->solution_;

    solution_ = n1S / n2S;
}

int Visitor_Node::results(void)
{
    return solution_;
}

