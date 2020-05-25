#pragma once
#include"Libs.h"
#include"Expression.h"
//class corresponding to the ']' operation
class EndWhileExpression : public Expression {
private:
	char* arr;
	int* i;
	int posOfBegin;  // field which contains the corresponding '[' position
public:
	bool isComposite() override;
	void execute() override ;
	EndWhileExpression(int c,int* i,char* arr);//constructor which recieves the '[' position. Initializes posOfBegin
};