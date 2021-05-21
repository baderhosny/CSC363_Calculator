#include "Calc.h"

Calc::Calc(void)
    : builder_(nullptr)
{

}
Calc::~Calc(void)
{
    delete builder_;
}

int Calc::calculate(const std::string & infix) 
{
    std::istringstream input(infix);
    std::string token;

    builder_ = new Expr_TreeBuilder();
    // still need to implement paranthese;
    while(!input.eof()) {
        input >> token;

        if(token == "+") {
            builder_->build_add_node(); 
        }
        else if(token == "-")
        {
            builder_->build_neg_node();
        }
        else if(token == "*")
        {
            builder_->build_multi_node();
        }
        else if(token=="/")
        {
            builder_->build_div_node();
        }
        else if(token == "%")
        {
            builder_->build_mod_node();
        }
    }
}