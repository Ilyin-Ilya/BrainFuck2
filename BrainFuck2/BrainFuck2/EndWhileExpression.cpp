#include"EndWhileExpressionHeader.h"
bool EndWhileExpression::isComposite() { return false; };
void EndWhileExpression::execute() {
	if (arr[*i]) {
		*i = posOfBegin;
	}
}

EndWhileExpression::EndWhileExpression(int pos,int* i,char* arr) {
	this->posOfBegin = pos;
	this->arr = arr;
	this->i = i;
}