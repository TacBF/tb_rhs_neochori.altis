#include "tb_defines.hpp"
//Mission:
zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY ,    {3}      	, {}    , 1      , {}        , 0    , "%3" },

{ 2, TEAM_RED, 		SPAWN_XRAY,     {8}      	, {}   	, 1      , {}        , 0    , "%3" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,    {1,4}  		, {}    , 1      , {}        , 0    , "Lakka City" },

{ 4, TEAM_NEUTRAL, 	SPAWN_NEVER,    {5,3}      	, {}  	, 1      , {}        , 0    , "Stavros" },

{ 5, TEAM_NEUTRAL, 	SPAWN_NEVER,    {6,4}      	, {}   	, 1      , {}        , 0    , "Neochori East" },

{ 6, TEAM_NEUTRAL, 	SPAWN_NEVER,    {5,7}      	, {}   	, 1      , {}        , 0    , "Neochori West" },

{ 7, TEAM_NEUTRAL, 	SPAWN_NEVER,    {6,8}      	, {}   	, 1      , {}        , 0    , "Katalaki" },

{ 8, TEAM_RED, 		SPAWN_NEVER,    {7,2}		, {}    , 1      , {}        , 0    , "Poliakko" },

{ 9, TEAM_BLUE, 	SPAWN_INSTANT,  {}      	, {}    , 1      , {1,3}	 , 2    , "[FB] Docks" },

{ 10, TEAM_RED, 	SPAWN_INSTANT,  {}			, {}    , 1      , {2,8}     , 2    , "[FB] Docks" },

{ 11, TEAM_NEUTRAL, SPAWN_INSTANT,  {}			, {}    , 1  	 , {1,4}  	 , 2    , "[FB] Factory" },

{ 12, TEAM_NEUTRAL, SPAWN_INSTANT,  {}			, {}    , 1  	 , {2,7}     , 2    , "[FB] Solar Plant" }

};