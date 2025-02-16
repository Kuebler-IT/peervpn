/*
 * MeshVPN - A open source peer-to-peer VPN (forked from PeerVPN)
 *
 * Copyright (C) 2012-2016  Tobias Volk <mail@tobiasvolk.de>
 * Copyright (C) 2016       Hideman Developer <company@hideman.net>
 * Copyright (C) 2017       Benjamin Kübler <b.kuebler@kuebler-it.de>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef H_GLOBALS
#define H_GLOBALS

#include "io.h"
#include "p2p.h"
#include "ethernet.h"

// compile time options & timing parameters
#define INITPEER_STORAGE 1024


// config parser options
#define CONFPARSER_LINEBUF_SIZE 4096
#define CONFPARSER_NAMEBUF_SIZE 512

// encryption options
#define ENCRYPTION_ASYM

// iogrps
#define IOGRP_DEFAULT 0
#define IOGRP_SOCKET 1
#define IOGRP_TAP 2
#define IOGRP_CONSOLE 3

struct s_initpeers {
        struct s_io_addr * addresses;
        int count;
};

// global variables
extern struct s_io_state iostate;
extern struct s_p2psec * g_p2psec;
extern int g_mainloop;

extern struct s_switch_state g_switchstate;
extern struct s_ndp6_state g_ndpstate;
extern struct s_virtserv_state g_virtserv;

extern int g_enableconsole;
extern int g_enableeth;
extern int g_enablendpcache;
extern int g_enablevirtserv;
extern int g_enableengines;

#endif
