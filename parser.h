
#include "JSONVal.h"
#include <iostream>
//author Caleb Coulter
//adds the preceding whitepace
void processWS(std::stringstream& line)
{
    while(std::isspace(line.peek()))
    {
        line.get();
    }
}

std::string processName(std::stringstream& line)
{
    std::string thisName("");
    line.get();
    while(line.peek() != '\"')
    {
		//special instances for escape characters- \u needs to get the following 4 digits and we dont want to escape if its a quotation
        if(line.peek() == '\\')
        {
			//get that backslash
            thisName += line.get();
			char check= line.peek();
			// '/u' refers to four-hex-digits, so we need to make sure to include those as part of it
            if(check=='u'){
				thisName += line.get();
				thisName += line.get();
				thisName += line.get();
				thisName += line.get();
				thisName += line.get();
            else{
				thisName += line.get();
			}
        }
        else
        {
            thisName += line.get();
        }
    }
	//grab the closing "
    line.get();
    return thisName;
}

JSONVal* typeChecker(std::stringstream& line, JSONValue value){

    //Check for determining formaters
	if(line.peek() == '{'){
             val = processObject(line);
            }
    else if(line.peek() == '['){
                val = processArray(line);
            }
    else if line.peek() == '\"'){
            value= processString(line);
            }
    else if(std::isdigit(line.peek())){
            value = processNumber(line);
            }
	else if(line.peek() == '-'){
			value=processNumber(line)
    else if(line.peek() == 't'){
            val = processTrue(line);
            }
    else if(line.peek() == 'f'){
            val = processFalse(line);
            }
    else if(line.peek() == 'n'){
            value = processNull(line);
            }
    else{
            value= NULL;
            }
	return value;
         
}

//takes a line and processes it as an object; line should start with '{'
JSONVal* processObject(std::stringstream& line)
{
    Object* newObject = new JSONobject();
    //grab the opening and trim any whitespace
    if(line.peek() == '{')
        line.get();
    processWS(line);
     
	//keep processing until the closing bracket is found
    while(line.peek() != '}')
    {
        std::string valName;
        JSONVal* objectVal;
        
        processWS(line);
        
        if(line.peek()!='\"')
			return NULL;//Not an object if it doesnt have a name
        else
            thisName = processName(line);//process the line until the name is finished
        processWS(line);
        
        if(line.peek() == ':')
        {
			line.get();
			processWS(line);
			objectValue = typeChecker(
            if(val == NULL){
                return NULL;
            }
            processWS(line);
            
            if(line.peek() == ',')
                line.get();

            processWS(line);
            thisObject->addName(valName, objectVal);
            
        }
    }

    line.get();
    
    return value;
}

JSONVal* processArray(std::stringstream& line)
{
    JSONarray* array = new JSONarray();
    if(line.peek()=='['){
        line.get()
		}
	processWS(line);
        
    while(line.peek() != ']')
    {
        JSONVal* thisValue;
        processWS(line);
        
        thisValue=typeChecker(line, thisValue);
		
        if(thisValue == NULL){
            return NULL;
			}
		processWS(line);
            
        if(line.peek() == ','){
            line.get()
            }
        processWS(line);
            
        array->add(thisValue);
    }
    
    line.get();
    
    return array;
}

JSONVal* processString(std::stringstream& line)
{    
    std::string thisString= processName(line);
    
    JSONVal* str = new JSONstring(thisString);
    
    return str;
}

JSONVal* processNumber(std::stringstream& line)
{
    std::string thisNumber;

    if(line.peek() == '-')
       thisNumber += line.get();
    
    while(std::isdigit(line.peek()))
    {
       thisNumber += line.get();
        if(line.peek() == '.')
        {
           thisNumber += line.get();
        }
        else if('e'||line.peek()=='E'))
        {
           thisNumber += line.get();
            if(line.peek() == '-'){
               thisNumber += line.get();
        }}
    }
    JSONVal* num = new JSONnumber(thisNumber);
    return num;
}

//
JSONVal* processTrue(std::stringstream& line)
{

    if(line.peek() == 't'){
        line.get();
		if(line.peek() == 'r'){
			line.get();
			if(line.peek() == 'u'){
				line.get();
				if(line.peek() == 'e'){
					line.get();
					}
				else {
					return NULL;}}
			else{
				return NULL;}}
		else{return NULL;}}
	else{return NULL;}}
	
        
    JSONVal* tr = new JSONtrue();    
    return tr;
}

JSONVal* processFalse(std::stringstream& line)
{

    if(line.peek() == 'f'){
        line.get();
		if(line.peek() == 'a'){
			line.get();
			if(line.peek() == 'l'){
				line.get();
				if(line.peek() == 's'){
					line.get();
					if(line.peek() == 'e'){
						line.get();}
					else{return NULL;}}
					
				else {
					return NULL;}}
			else{
				return NULL;}}
		else{return NULL;}}
	else{return NULL;}
	
        
    JSONVal* fa = new JSONfalse();    
    return fa;
}

JSONVal* processNull(std::stringstream& line)
{
    if(line.peek() == 'n'||line.peek()=='N'){
        line.get();
		if(line.peek() == 'u'||line.peek() == 'U'){
			line.get();
			if(line.peek() == 'l'||line.peek() == 'L'){
				line.get();
				if(line.peek() == 'l'||line.peek() == 'L'){
					line.get();
					}
				else {
					return NULL;}}
			else{
				return NULL;}}
		else{return NULL;}}
	else{return NULL;}}
	
        
    JSONVal* nul = new JSONnull();
    
    return nul;
}

int main(){
std::string testString= "{ /"test/" : /"string/" }";
processObject
//call processObject on input string
}