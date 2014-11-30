#ifndef JSONNULL_H
#define JSONNULL_H

#include <JSONVal.h>


class JSONnull : public JSONVal
{
    public:
        JSONnull();
        virtual ~JSONnull();
		virtual int type(){
		// String = 0, object = 1, Array = 2, number = 3, true = 4, false = 5, null = 6
			return 6;
		virtual std::string prettyPrint(){
			return " null";
		}
    protected:
    private:
};

#endif // JSONNULL_H
