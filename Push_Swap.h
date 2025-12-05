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
int			ft_check_limits(char **str);
int			ft_verif_sign_seul(char **str);
//-----------------PARSING-------------//

//-----------new_tab------------------//
int			*ft_new_tab(int argc, char **argv, int *tab);
int			*ft_remplissage(int *tab, char **str);
int	ft_len_tab(char **argv ,int argc);
//-----------new_tab------------------//

//-----------FREE--------------------//
void		free_function(char **str);
//-----------FREE--------------------//

//------------------test--------------//
void		affiche(int *tab);
//------------------test--------------//

#endif
