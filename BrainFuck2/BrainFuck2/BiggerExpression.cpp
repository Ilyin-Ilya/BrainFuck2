#include"BiggerExpressionHeader.h"
bool BiggerExpression :: isComposite(){ return false; };
void BiggerExpression :: execute() { (*j)++; };
BiggerExpression::BiggerExpression(int* j,char* arr) {
	this->j = j;
}