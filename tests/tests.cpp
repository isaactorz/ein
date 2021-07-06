#include <numbers>

#include <gtest/gtest.h>

#include "Geometry.hpp"

TEST(ConversionTest, DegToRad)
{
	EXPECT_NEAR(std::numbers::pi, ein::geometry::DegreesToRadians(180.), 0.01);
}

TEST(ConversionTest, RadToDeg)
{
	EXPECT_NEAR(180., ein::geometry::RadiansToDegrees(std::numbers::pi), 0.01);
}