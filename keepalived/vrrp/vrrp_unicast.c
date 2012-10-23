/*
 * Soft:        Keepalived is a failover program for the LVS project
 *              <www.linuxvirtualserver.org>. It monitor & manipulate
 *              a loadbalanced server pool using multi-layer checks.
 *
 * Part:        VRRP unicast framework.
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

#include <syslog.h>

#include "logger.h"
#include "memory.h"
#include "vector.h"
#include "list.h"
#include "utils.h"

void
alloc_unicast(list unicast_list, vector_t *strvec)
{
	struct sockaddr_storage *addr = NULL;

	addr = (struct sockaddr_storage *) MALLOC(sizeof(struct sockaddr_storage));
	inet_stosockaddr(vector_slot(strvec, 0), 0, addr);
	list_add(unicast_list, addr);
}

void
free_unicast(void *data)
{
	free(data);
}

void
dump_unicast(void *data)
{
	struct sockaddr_storage *addr = data;

	log_message(LOG_INFO, "     %s", inet_sockaddrtos(addr));
}
