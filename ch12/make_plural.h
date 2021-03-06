#ifndef MAKE_PLURAL_H
#define MAKE_PLURAL_H

inline
std::string make_plural(std::size_t ctr,
                        const std::string &word,
                        const std::string &ending)
{
	return (ctr > 1) ? word + ending : word;
}

#endif
