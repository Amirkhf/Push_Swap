#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

//--
# define INT_MIN -2147483648
# define INT_MAX 2147483648

//-----------------PARSING-------------//
int			ft_check_arguments(char **argv);
char		**ft_split(char const *s, char c);
int			ft_sign_check(char **str);
long long	ft_atoi(char *str);
int			test(char **str);
//-----------------PARSING-------------//

//-----------FREE--------------------//
void		free_function(char **str);
//-----------FREE--------------------//

#endif
