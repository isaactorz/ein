#ifndef EIN_GEOMETRY_HPP
#define EIN_GEOMETRY_HPP

#include <concepts>
#include <numbers>

namespace ein::geometry {

template<std::floating_point T>
[[nodiscard]] constexpr T
DegreesToRadians(const T& angle) noexcept
{
  return angle * std::numbers::pi_v<T> / T(180.);
}

template<std::floating_point T>
[[nodiscard]] constexpr T
RadiansToDegrees(const T& angle) noexcept
{
  return angle * std::numbers::inv_pi_v<T> * T(180.);
}

} // ein::geometry

#endif // _h