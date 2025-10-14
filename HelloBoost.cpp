#include <iostream>
#include <tchar.h>
#include <boost/lambda/lambda.hpp>
#include <iterator>
#include <algorithm>

int _tmain(int argc, _TCHAR* argv[])
{
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;
    //--------------------------------------------------------------------------
    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " " );
}
