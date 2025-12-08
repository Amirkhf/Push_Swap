#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

//--
# define INT_MIN -2147483648
# define INT_MAX 2147483647
# define INT_FALSE 2147483648
//-----------------PARSING-------------//
int			ft_check_arguments(char **argv);
char		**ft_split(char const *s, char c);
int			ft_sign_check(char **str);
long long	ft_atoi(char *str);
int			ft_check_limits(char **str);
int			ft_verif_tab_trier(long long *tab, char **argv, int argc);
//-----------------PARSING-------------//

//-----------new_tab------------------//
int			ft_verif_doublon(long long *tab, char **str);
long long	*ft_new_tab(int argc, char **argv, long long *tab);
long long	*ft_remplissage(long long *tab, char **str);
int			ft_len_tab(char **argv, int argc);
int			ft_strlen(char *str);
//-----------new_tab------------------//

//----------new_tab_rank-------------//
int			*ft_create_tab_rank(long long *tab, int *new_tab, char **argv,
				int argc);
int			*tab_test(long long *tab, int *new_tab, char **argv, int argc);

//----------new_tab_rank-------------//

//-----------FREE--------------------//
void		free_function(char **str);
//-----------FREE--------------------//

//------------------test--------------//

//------------------test--------------//

#endif
