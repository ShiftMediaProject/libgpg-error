# Makefile.am for libgpg-error/tests.
# Copyright (C) 2003 g10 Code GmbH
#
# This file is part of libgpg-error.
#
# libgpg-error is free software; you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as
# published by the Free Software Foundation; either version 2.1 of the
# License, or (at your option) any later version.
#
# libgpg-error is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA

## Process this file with automake to produce Makefile.in

if HAVE_W32CE_SYSTEM
extra_includes = -idirafter $(top_builddir)/src/gpg-extra
else
extra_includes =
endif

gpg_error_lib = ../src/libgpg-error.la

TESTS = t-version t-strerror t-syserror t-lock

INCLUDES = -I$(top_builddir)/src $(extra_includes)


LDADD = $(gpg_error_lib)

noinst_PROGRAMS = $(TESTS)
noinst_HEADERS = t-common.h

t_lock_LDADD = $(gpg_error_lib) $(LIBMULTITHREAD)