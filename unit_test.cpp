#define BOOST_TEST_MODULE MyModuleName
#include <boost/test/included/unit_test.hpp>
#include "headers/rational.h"

using namespace ExactArithmetic;

BOOST_AUTO_TEST_CASE(my_addition_test)
{
	Rational x, y;
	
	std::istringstream xstr("2/3");
	std::istringstream ystr("1/3");
	xstr >> x;
	ystr >> y;

	Rational result = 1;

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x + y), result);
}


BOOST_AUTO_TEST_CASE(my_subtraction_test)
{
	Rational x, y;

	std::istringstream xstr("2/3");
	std::istringstream ystr("1/3");
	xstr >> x;
	ystr >> y;

	Rational result = Rational(1,3);

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x - y), result);
}


BOOST_AUTO_TEST_CASE(my_multiplication_test)
{
	Rational x, y;

	std::istringstream xstr("2/3");
	std::istringstream ystr("1/3");
	xstr >> x;
	ystr >> y;

	Rational result = Rational(2,9);

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x * y), result);
}


BOOST_AUTO_TEST_CASE(my_division_test)
{
	Rational x, y;

	std::istringstream xstr("2/3");
	std::istringstream ystr("1/3");
	xstr >> x;
	ystr >> y;

	Rational result = 2;

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x / y), result);
}



BOOST_AUTO_TEST_CASE(my_simplification_test)
{
	Rational test = Rational(2, 4);
	Rational result = Rational (1, 2);

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL(test, result);
}

BOOST_AUTO_TEST_CASE(my_negetivenumber_test)
{
	Rational test = Rational(-2, 4);
	Rational result = Rational(-1, 2);

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL(test, result);
}