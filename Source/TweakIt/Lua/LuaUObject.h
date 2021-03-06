﻿#pragma once
#include "CoreMinimal.h"

#include <string>

#include "D:\SatisfactoryModding\SatisfactoryModLoader\Source\TweakIt\LuaLib\lua.hpp"

namespace TweakIt
{
	namespace Lua
	{
		struct LuaUObject
		{
			UObject* Object;

			static int lua_index(lua_State* L);

			static int lua_newindex(lua_State* L);
			static int lua_DumpProperties(lua_State* L);
			static int ConstructObject(lua_State* L, UObject* Object);
			static int lua_gc(lua_State* L);
			static int lua_GetClass(lua_State* L);
			static int lua__tostring(lua_State* L);
		};
	}
}
