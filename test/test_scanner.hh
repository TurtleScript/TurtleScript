#ifndef TEST_SCANNER_HH_
#define TEST_SCANNER_HH_

#include <catch.hpp>
#include <fstream>
#include <parser/scanner.hh>

TEST_CASE("scanner basic test", "[scanner]") {
  std::ifstream in("sample_file.tu");
  // check if the file is opened correctly
  SECTION("the file is opened correctly") { REQUIRE(in.is_open() == true); }
  // pass ifstream as istream* to the scanner
  tu::Scanner sc(&in);
  REQUIRE(1 == 1);
}

#endif // END TEST_SCANNER_HH_
