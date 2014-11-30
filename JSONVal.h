#ifndef JSONVAL_H
#define JSONVAL_H


class JSONVal
{
    public:
        JSONVal();
		virtual int type(){
		// String = 0, object = 1, Array = 2, number = 3, true = 4, false = 5, null = 6
			return 0;

		virtual std::string prettyPrinting(){return NULL;}
    protected:
    private:
};

#endif // JSONVAL_H
