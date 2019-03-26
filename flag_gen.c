#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((int)time(0));

    char num_start = '0';
    char num_end = '9';
    int num_range = (int)num_end - (int) num_start;

    char l_alpha_start = 'A';
    char l_alpha_end = 'Z';
    int l_alpha_range = (int)l_alpha_end - (int)l_alpha_start;

    char u_alpha_start = 'a';
    char u_alpha_end = 'z';
    int u_alpha_range = (int)u_alpha_end - (int)u_alpha_start;
    
    char flag[13] = { '\0' };
    
    for (int i = 0; i < 12; i++)
    {
	int gen_type = rand() % 3;
	switch(gen_type)
	{
	case 0:
	    flag[i] = (char)(rand() % num_range + (int)num_start);
	    break;
	    
	case 1:
	    flag[i] = (char)(rand() % l_alpha_range + (int)l_alpha_start);
	    break;

	case 2:
	    flag[i] = (char)(rand() % u_alpha_range + (int)u_alpha_start);
	    break;
	}
    }

    printf("flag:%s\n", flag);
    
    return 0;
    
}
