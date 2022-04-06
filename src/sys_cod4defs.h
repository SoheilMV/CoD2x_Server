/*
===========================================================================
	Copyright (c) 2015-2019 atrX of Raid Gaming
    Copyright (C) 2010-2013  Ninja and TheKelm of the IceOps-Team
    Copyright (C) 1999-2005 Id Software, Inc.

    This file is part of CoD4-Unleashed-Server source code.

    CoD4-Unleashed-Server source code is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    CoD4-Unleashed-Server source code is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>
===========================================================================
*/



#ifndef __SYS_COD4DEFS_H__
#define __SYS_COD4DEFS_H__


#define EXECUTABLE_NAME "cod2x_lnxded"

#define PRODUCT_NAME				" CoD2X: Dedicated Server - Alpha"
#define BASEGAME					"main"
#define CLIENT_WINDOW_TITLE     	" CoD2X: Dedicated Server - Alpha"
#define CLIENT_WINDOW_MIN_TITLE 	" CoD2X: Dedicated Server - Alpha"

#define PORT_MASTER 28960
#define MASTER_SERVER_NAME "cod2master.activision.com"
#define MASTER_SERVER_NAME2 "master01.cod2x.me"
#define HEARTBEAT_GAME "COD-2"
#define HEARTBEAT_DEAD "flatline"

#define PRODUCT_VERSION "1.3a"

/*
#ifdef COD4U
    #define Q3_VERSION "1.7a"
#else
    #define Q3_VERSION "1.8"
#endif
*/
#define Q3_VERSION "1.3a"

#define GAME_STRING "  CoD2X"

#include "version.h"
#ifndef BUILD_NUMBER
#define BUILD_NUMBER -1
#endif

#define MAX_CLIENTS 64
#define MAX_CONFIGSTRINGS 2442

#endif