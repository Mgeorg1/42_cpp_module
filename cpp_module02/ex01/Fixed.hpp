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
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream& operator<<(std::ostream &sout, const Fixed &_value);

#endif 