#ifndef _VISITOR_H_
#define _VISITOR_H_

class Add_Node;
class Div_Node;
class Mod_Node;
class Multi_Node;
class Num_Node;
class Neg_Node;

class Visitor
{
    public: 

        virtual void visit(Add_Node & add) = 0;
        virtual void visit(Div_Node & div) = 0;
        virtual void visit(Mod_Node & mod) = 0;
        virtual void visit(Multi_Node & multi) = 0;
        virtual void visit(Num_Node & num) = 0;
        virtual void visit(Neg_Node & neg) = 0;
};

#endif