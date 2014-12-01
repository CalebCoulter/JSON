#ifndef JSONFALSE_H
#define JSONFALSE_H

#include <JSONVal.h>


class JSONfalse : public JSONVal
{
    public:
        JSONfalse();
        virtual ~JSONfalse();
		virtual int type(){
		// String = 0, object = 1, Array = 2, number = 3, true = 4, false = 5, null = 6
			return 5;
		virtual std::string prettyPrinting(int indent){
			return " false";
		}
    protected:
    private:
};

#endif // JSONFALSE_H
