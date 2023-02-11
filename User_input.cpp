#include <iostream>
#include <string>
#include <ctype.h>

class TextInput
{
public:
    
    void virtual add(char c) { 
      data +=c; }

    std::string getValue() { return data; }
    std::string data;
};

class NumericInput : public TextInput {

public:
    void add (char c ){
        if (isdigit(c))
            data +=c;
    }
    
};

#ifndef RunTests
int main()
{
    TextInput* input = new TextInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue();
}
#endif