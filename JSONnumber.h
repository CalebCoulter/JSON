#ifndef JSONNUMBER_H
#define JSONNUMBER_H

#include <JSONVal.h>

class JSONnumber : public JSONVal
{
    public:
		std::string number
        JSONnumber(std::string num){
			number=num;
			}
        virtual ~JSONnumber();
		virtual int type(){
		// String = 0, object = 1, Array = 2, number = 3, true = 4, false = 5, null = 6
			return 3;
		virtual std::string prettyPrint(){
			return " "+number;
		}
    protected:
    private:
};

#endif // JSONNUMBER_H
