#include "dna.h"
#include<string>
#include<iostream>
#include<algorithm>

using std::cout; using std::string; using std::replace;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const std::string input)
{   
    double count = 0;

    for (size_t i = 0; i < input.size(); i++)
    {
        if(input[i] == 'C' || input[i] == 'G' || input[i] == 'c' || input[i] == 'g') 
        count ++;
    }
     
    double quotient = 0;
    return quotient = count/input.size();
  
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string input)
{
   
    int i, len;

    len = input.size() - 1;
    
    string temp = input;

    for(i = len; i >= 0; i--)
    {
        temp[len - i] = input[i];
    }
    return temp;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string
*/
string get_dna_complement(string input)
{
    string replace_characters = input;

    int len = input.length();

    string local_string_variable = get_reverse_string(input);

    for (size_t i = 0; i < len; i++)
    {
        if(replace_characters[i] == 'G')
            replace_characters[i] = 'C';
        else if(replace_characters[i] == 'g')
            replace_characters[i] = 'c';
        else if(replace_characters[i] == 'A')
            replace_characters[i] = 'T';
        else if(replace_characters[i] == 'a')
            replace_characters[i] = 't';
        else if(replace_characters[i] == 'C')
            replace_characters[i] = 'G';
        else if(replace_characters[i] == 'c')
            replace_characters[i] = 'g';
        else if(replace_characters[i] == 'T')
            replace_characters[i] = 'A';
        else if(replace_characters[i] == 't')
            replace_characters[i] = 'a';
    }

    return replace_characters;

}
