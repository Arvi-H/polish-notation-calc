#ifndef SHUNTING_YARD
#define SHUNTING_YARD

#include "expression-manager.h"

class ShuntingYard : public ExpressionManagerInterface {
public:
	ShuntingYard(void) {}
	~ShuntingYard(void) {}

	std::string infix(void);

	std::string postfix(void);

	std::string prefix(void);

	std::string toString(void) const;
};

#endif