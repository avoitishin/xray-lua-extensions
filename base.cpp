#include <lua.hpp>

#pragma comment(lib, "lua.JIT.1.1.4.lib")
#pragma comment(lib, "xrCore.lib")
#pragma comment(lib, "user32.lib")

extern "C"{
	#include "lfs.h"
	#include "lmarshal.h"
}

#include "Libs.h"


extern "C" __declspec(dllexport) int luaopen_lua_extensions(lua_State *L){
	//luaopen_debug(L);
	luaopen_lfs(L);
	open_string(L);
	open_math(L);
	open_table(L);
	luaopen_marshal(L);
	//luaopen_lfs(L);
	//open_kb(L);
	//open_log(L); 

	open_xray(L);
	return 0;
}