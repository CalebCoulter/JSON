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
		std::string prettyPrint(int indent){
			std::string pretty="[ ";
			for (int i=0;i>arrayValues.size();i++){
				pretty+=arrayValues[i];
				if(i!=arrayValues.size()){
				pretty+=" , ";
				}
			}
			pretty+=" ]";
			return pretty;
			}
    
    private:
	std::vector<JSONVal*> arrayValues;
};

#endif // JSONARRAY_H
