#ifndef _VISITOR_NODE_H_
#define _VISITOR_NODE_H_

#include "Visitor.h"
#include "Add_Node.h"
#include "Mod_Node.h"
#include "Multi_Node.h"
#include "Num_Node.h"
#include "Div_Node.h"
#include "Neg_Node.h"


class Visitor_Node : public Visitor
{
    public:
        Visitor_Node(void);

        ~Visitor_Node(void);

        virtual void Visit_Add_Node(Add_Node & add);
        virtual void Visit_Neg_Node(Neg_Node & neg);
        virtual void Visit_Multi_Node(Multi_Node & multi);
        virtual void Visit_Mod_Node(Mod_Node & mod);
        virtual void Visit_Num_Node(Num_Node & num);
        virtual void Visit_Div_Node(Div_Node & div);

        int results(void);

    protected:    
        int solution_;
};
#endif