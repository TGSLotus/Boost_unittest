#define BOOST_TEST_MODULE your_test_module
#include <boost/test/included/unit_test.hpp>
#include <boost/variant.hpp>

using namespace std;

BOOST_AUTO_TEST_CASE( pass_test_case ) {
	    std::vector<int> a{1, 2};
	        std::vector<int> b{1, 2};
		    BOOST_TEST( a == b );
}
BOOST_AUTO_TEST_CASE( fail_test_case ){
	std::string a = "a";
	std::string b = "b";
	BOOST_TEST ( a == b);
}

