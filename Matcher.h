#ifndef MATCHER_H_INCLUDED
#define MATCHER_H_INCLUDED

#include <vector>
#include <boost/tr1/array.hpp>
#include <bitset>

class Matcher {
public:    
    Matcher();
    Matcher(std::tr1::array<unsigned char, 65536> & pats);
        
    static const int THRESHOLD = 16;

    unsigned char matches(int color, int pattern);

    /*
        return the "global" matcher
    */            
    static Matcher* get_Matcher(void);
    static void set_Matcher(Matcher * m);

private:            
    static Matcher* s_matcher;   

    std::tr1::array<std::vector<unsigned char>, 2> m_patterns;
};

#endif
