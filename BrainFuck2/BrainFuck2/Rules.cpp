#include"Rules.h"

Rules::Rules() {}


Expression* Rules::toObject(char symbol, int* j, char* arr,int* i, int pos) {
	switch (symbol) {
	case '+':
		return new PlusExpression(j, arr);
	case '-':
		return new MinusExpression(j, arr);
	case '>':
		return new BiggerExpression(j, arr);
	case '<':
		return new SmallerExpression(j, arr);
	case '.':
		return new DotExpression(j, arr);
	case ']':
		return new EndWhileExpression(pos, i, arr);
	case '[':
		throw - 1;
	}
	return nullptr;
}
