#ifndef JSONOBJECT_H
#define JSONOBJECT_H


class JSONobject : public JSONVal
{
	
    public:
		void add(std::string name, JSONVal objectVal){
			names.push_back(name);
			values.push_back(objectVal);
		}
		virtual int type(){
		// String = 0, object = 1, Array = 2, number = 3, true = 4, false = 5, null = 6
			return 1;
        JSONobject();
		virtual std::string prettyPrinting(int indent){
		std::string pretty="\n";
		for (int i=0;i<indent;i++){
			pretty+="\t";
		}
		pretty+="{ ";
		int size=names.size();
		for (i=0;i<size;i++){
			pretty+=names.at(i);
			pretty+=" : ";
			pretty+= values.at(i).prettyPrinting(indent+1);
			if(i!=size){
				pretty+=" , ";
				}
			}
			pretty+=" }";
			return pretty;
		};
    private:
	std::vector<std::string*> names;
	std::vector<JSONVal*> values;
};

#endif // JSONOBJECT_H
