#pragma once
#ifndef CATA_TESTS_CATA_CATCH_H
#define CATA_TESTS_CATA_CATCH_H

// To avoid ODR violations, it's important that whenever a file includes
// catch.hpp it also includes stringmaker.h, so that all specializations of
// StringMaker match.  Therefore, all test code should include catch.hpp via
// this file.

// IWYU pragma: begin_exports
#include "catch/catch_amalgamated.hpp"
#include "stringmaker.h"
// IWYU pragma: end_exports

// Export symbols to maintain compatibility with version 2.13.7 Catch.

using Approx = Catch::Approx;


#endif // CATA_TESTS_CATA_CATCH_H
