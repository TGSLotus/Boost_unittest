#define BOOST_TEST_MODULE your_test_module
#include <boost/test/included/unit_test.hpp>
#include <boost/variant.hpp>

using namespace std;

BOOST_AUTO_TEST_CASE( your_test_case ) {
	    std::vector<int> a{1, 2};
	        std::vector<int> b{1, 2};
		    BOOST_TEST( a == b );
}
BOOST_AUTO_TEST_CASE( another_test_case ){
	std::string a = "a";
	std::string b = "b";
	BOOST_TEST ( a == b);
}

BOOST_AUTO_TEST_CASE(another_wan) {
// union

    union {int i; float f;} u;
    u.i = 34;
    u.f = 2.3;

    boost::variant<int, string> u1, u2;
    u1 = 2;
    u2 = "hello";
    cout << u1 << "" << u2 << endl;

    u1 = boost::get<int>(u1)*2;
    // string st = boost::get<string>(u1);
    u1 = "good";
    u2 = 32;

    boost::variant<int, string> u3;
    cout << u3 << endl;

}
