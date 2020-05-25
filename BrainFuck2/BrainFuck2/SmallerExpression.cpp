#include "SmallerExpressionHeader.h"
bool SmallerExpression::isComposite() { return false; };
void SmallerExpression::execute() { (*j)--; };
SmallerExpression::SmallerExpression(int* j,char* arr) {
	this->j = j;
}