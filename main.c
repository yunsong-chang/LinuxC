#include <stdio.h>

int main()
{
	char *p_a = NULL;
	const char *p_ca = NULL;
	char * const cp_a = NULL;
	const char * const cp_ca = NULL;

	p_ca = p_a;
	// p_a = p_ca;  		// warning: assignment discards qualifiers from pointer target type
	// cp_a = p_a;			// error: assignment of read-only variable ‘cp_a’

	char **p_p_a = NULL;
	const char **p_p_ca = NULL;
	char * const *p_cp_a = NULL;
	const char * const *p_cp_ca = NULL;

	char ** const cp_p_a = NULL;
	const char * * const cp_p_ca = NULL;
	char * const * const cp_cp_a = NULL;
	const char * const *const cp_cp_ca = NULL;


	// p_p_ca = p_p_a; 		// warning: assignment from incompatible pointer type
	p_cp_a = p_p_a;			// 
	// p_cp_ca = p_p_a;
	p_cp_ca = p_p_ca;
	

// 000
	p_p_a = 0;
	*p_p_a = 0;
	**p_p_a = 0;

// 001
	p_p_ca = 0;
	*p_p_ca = 0;
	// **p_p_ca = 0;

// 010
	p_cp_a = 0;
	// *p_cp_a = 0;
	**p_cp_a = 0;

// 011
	p_cp_ca = 0;
	// *p_cp_ca = 0;
	// **p_cp_ca = 0;

// 100
	// cp_p_a = 0;
	*cp_p_a = 0;
	**cp_p_a = 0;

// 101
	// cp_p_ca = 0;
	*cp_p_ca = 0;
	// **cp_p_ca = 0;

// 110
	// cp_cp_a = 0;
	// *cp_cp_a = 0;
	**cp_cp_a = 0;

// 111
	// cp_cp_ca = 0;
	// *cp_cp_ca = 0;
	// **cp_cp_ca = 0;



	(void)p_a;
	(void)p_ca;
	(void)cp_a;
	(void)cp_ca;

	(void)p_p_a;
	(void)p_p_ca;
	(void)p_cp_a;
	(void)p_cp_ca;

	(void)cp_p_a;
	(void)cp_p_ca;
	(void)cp_cp_a;
	(void)cp_cp_ca;

	// (char *) p;
	// p = p_a;

	return 0;
}
