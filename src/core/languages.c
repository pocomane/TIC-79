#include <stddef.h>
#include "api.h"

#if defined (TIC_BUILD_WITH_LUA)
extern tic_script_config LuaSyntaxConfig;
#endif


tic_script_config* Languages[] = {

	#if defined (TIC_BUILD_WITH_LUA)
	&LuaSyntaxConfig,
	#endif

	NULL};

