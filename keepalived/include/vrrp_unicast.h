/*
 * Soft:        Keepalived is a failover program for the LVS project
 *              <www.linuxvirtualserver.org>. It monitor & manipulate
 *              a loadbalanced server pool using multi-layer checks.
 *
 * Part:        vrrp_unicast.c include file.
 *
 * Author:      Ryan O'Hara, <rohara@redhat.com>
 *
 *              This program is distributed in the hope that it will be useful,
 *              but WITHOUT ANY WARRANTY; without even the implied warranty of
 *              MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *              See the GNU General Public License for more details.
 *
 *              This program is free software; you can redistribute it and/or
 *              modify it under the terms of the GNU General Public License
 *              as published by the Free Software Foundation; either version
 *              2 of the License, or (at your option) any later version.
 *
 * Copyright (C) 2012 Ryan O'Hara, <rohara@redhat.com>
 */

#ifndef _VRRP_UNICAST_H
#define _VRRP_UNICAST_H

extern void alloc_unicast(list, vector_t *);
extern void free_unicast(void *);
extern void dump_unicast(void *);

#endif
