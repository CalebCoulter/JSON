#ifndef JSONTRUE_H
#define JSONTRUE_H

#include <JSONVal.h>


class JSONtrue : public JSONVal
{
    public:
        JSONtrue();
		virtual int type(){
		// String = 0, object = 1, Array = 2, number = 3, true = 4, false = 5, null = 6
			return 4;
		virtual std::string prettyPrint(){
			return " true";
		}};

#endif // JSONTRUE_H
