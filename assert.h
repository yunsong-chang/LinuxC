/* assert.h standard header */
#undef assert	/* remove existing definition */

#ifdef NDEBUG
	#define assert(test)	((void)0)
#else		/* NDEBUG not defined */
	void _Assert(char *);
	/* macros */
//	#define _STR(x) #x
//  除#、##，其它宏参数替换前完全展开
	#define _STR(x) _VAL(x)
	#define _VAL(x) #x
	#define assert(test)	((test) ? (void)0 \
		: _Assert(__FILE__ ":" _STR(__LINE__) " " #test))
#endif
