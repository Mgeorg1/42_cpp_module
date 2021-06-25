#ifndef FIXED_HPP
# define FIXED_HPP
#include <ostream>
#include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;

		Fixed operator+(Fixed const &b);
		Fixed operator-(Fixed const &b);
		Fixed operator*(Fixed const &b);
		Fixed operator/(Fixed const &b);

		bool operator>(Fixed const &b) const;
		bool operator<(Fixed const &b) const;
		bool operator>=(Fixed const &b) const;
		bool operator<=(Fixed const &b) const;
		bool operator==(Fixed const &b) const;
		bool operator!=(Fixed const &b) const;

		Fixed operator++();
		Fixed operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
};

std::ostream& operator<<(std::ostream &sout, const Fixed &_value);
Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);
Fixed const &min(Fixed const &a, Fixed const &b);
Fixed const &max(Fixed const &a, Fixed const &b);
#endif 