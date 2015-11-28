/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2014-2015 Matthias Klumpp <matthias@tenstral.net>
 *
 * Licensed under the GNU Lesser General Public License Version 2.1
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the license, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __LI_RUN_PRIVATE_H
#define __LI_RUN_PRIVATE_H

#include <glib-object.h>

G_BEGIN_DECLS

gboolean	li_run_acquire_caps (void);
gboolean	li_run_drop_caps (void);

gchar		*li_run_env_setup (void);
gchar		*li_run_env_setup_with_root (const gchar *root_fs);
gboolean	li_run_env_enter (const gchar *newroot);

G_END_DECLS

#endif /* __LI_RUN_PRIVATE_H */
