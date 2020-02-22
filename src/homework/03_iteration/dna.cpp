#include "dna.h"
using std::string;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string &dna)
{
    double count = 0.0;
    double gc = 0.0;
    

    for (int i = 0; i < dna.length(); ++i)
    {
        
        if (dna[i] == 'G')
        {
            count = count + 1;  
        }
        else if (dna[i] == 'C')
        {
            count = count + 1;
        }
        
    }
    gc = count / dna.length();
    return gc;
    
}







/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
    string rdna;

    for (auto i = dna.length()-1; i != -1;  i--)
    {
        
        rdna = rdna + dna[i];
    }
    return rdna;
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

string get_dna_complement(string dna)
{
    string reversed = get_reverse_string(dna);

    for (auto i = 0; i <= reversed.length(); ++i)
    {
        if (reversed[i] == 'A')
        {
            reversed[i] = 'T';
        }
        else if (reversed[i] == 'T')
        {
            reversed[i] = 'A';
        }
        else if (reversed[i] == 'C')
        {
            reversed[i] = 'G';
        }
        else if (reversed[i] == 'G')
        {
            reversed[i] = 'C';
        }


    }
    return reversed;
}