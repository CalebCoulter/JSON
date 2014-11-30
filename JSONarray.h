#ifndef JSONARRAY_H
#define JSONARRAY_H

#include <JSONVal.h>
#include <vector>

class JSONarray : public JSONVal
{
	
    public:
        JSONarray();
		void add(JSONVal* val){
			arrayValues.push_back(val);
		}
		virtual int type(){
		// String = 0, object = 1, Array = 2, number = 3, true = 4, false = 5, null = 6
			return 2;
		}
		//std::string prettyPrint(){}
    
    private:
	std::vector<JSONVal*> arrayValues;
};

#endif // JSONARRAY_H
