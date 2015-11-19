#define CATCH_CONFIG_MAIN
#include "../includes/catch.hpp"
#include "../includes/helper.h"

TEST_CASE("toInt string to Int","[helper]"){
	REQUIRE(toInt("1")==1);
	REQUIRE(toInt("3")==3);
	REQUIRE(toInt("a")==0);
}
TEST_CASE("toDble string to Double","[helper]"){
	REQUIRE(toDble("1")==1.0);
	REQUIRE(toDble("3")==3.0);
	REQUIRE(toDble("a")==0.0);
}
