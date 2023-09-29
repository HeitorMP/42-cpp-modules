#include <iostream>
#include <ctype.h>
#include <cctype>
#include <limits>
#include <string>
#include <stdlib.h>
#include <string.h>

bool    startsWith( std::string src, std::string to_find )
{
    return ( std::string::npos && src.rfind( to_find, 0 ) == 0 );
}

bool    strHasAll( std::string src, std::string char_set )
{
    if ( char_set.size() < 1 || src.size() < 1 || src.size() < char_set.size() )
        return ( false );
    
    for ( int i = 0; i < (int)char_set.size(); i++ )
    {
        if (src.find( char_set[i] ) == std::string::npos )
            return ( false );
    }
    return ( true );
}

size_t  count_if( std::string src, char to_find )
{
    int count = 0;

    for ( int i = 0; i < src.size(); i++ )
        if ( src[i] == to_find ) { count++; }
    
    return ( count );
}

bool    isSurroundByNumbers( std::string src, char to_find )
{
    if ( src.find( to_find ) == std::string::npos )
        return ( false );

    int pos = src.find( to_find );
    if ( std::isdigit( src[pos - 1] ) && std::isdigit( src[pos + 1] ) )
    {
        return ( true );
    }
    return ( false );
}

bool    isChar( std::string charCandidate )
{
   return ( charCandidate.length() == 1 && !isdigit( charCandidate[0] ) );
}


bool    isInt( std::string intCandidate )
{
    if ( intCandidate.find_first_not_of( "-0123456789" ) != std::string::npos )
    {
        return ( false );
    }
    if ( count_if( intCandidate, '-') > 1 )
    {
        return ( false );
    }
    if ( count_if( intCandidate, '-') == 1 && !startsWith( intCandidate, "-") )
    {
         return ( false );
    }
    return ( true );
}

bool    isFloat( std::string floatCandidate )
{
    if ( floatCandidate.find_first_not_of( "-.f0123456789" ) != std::string::npos )
    {   
        return ( false );
    }
    if ( count_if(floatCandidate, '.') != 1 || count_if(floatCandidate, '-') > 1 || count_if(floatCandidate, 'f') > 1 )
    {
        return ( false );
    }
    if ( floatCandidate[floatCandidate.size() - 1] != 'f' )
    {
        return ( false );
    }
    if ( count_if(floatCandidate, '-') ==  1 && floatCandidate[0] != '-' )
    {
        return ( false );
    }
    if ( !isSurroundByNumbers( floatCandidate, '.') )
    {
        return ( false );
    }
    return ( true );
}

bool    isDouble( std::string doubleCandidate )
{
    if ( doubleCandidate.find_first_not_of( "-.0123456789" ) != std::string::npos )
    {   
        return ( false );
    }
    if ( count_if(doubleCandidate, '.') != 1 || count_if(doubleCandidate, '-') > 1 )
    {
        return ( false );
    }
    if ( count_if(doubleCandidate, '-') ==  1 && doubleCandidate[0] != '-' )
    {
        return ( false );
    }
    if ( !isSurroundByNumbers( doubleCandidate, '.') )
    {
        return ( false );
    }
    return ( true );
}



int main( int argc, char const *argv[] )
{
    std::string my_str( argv[1] );

    bool test = isChar( my_str );
    std::cout << "is char: " << ((test == 0) ? "false" : "true") << std::endl;

    test = isInt( my_str );
    std::cout << "is int: " << ((test == 0) ? "false" : "true") << std::endl;

    test = isFloat( my_str );
    std::cout << "is float: " << ((test == 0) ? "false" : "true") << std::endl;

    test = isDouble( my_str );
    std::cout << "is double: " << ((test == 0) ? "false" : "true") << std::endl;

    return ( 0 );
}
