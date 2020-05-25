#pragma once
#include"Libs.h"
#include"Expression.h"
//class corresponding to the '.' operation
class DotExpression :public Expression {
private:
	int* j;
	char* arr;
public:
   bool isComposite() override;
   void execute() override;
   DotExpression( int* j, char* arr);
};
