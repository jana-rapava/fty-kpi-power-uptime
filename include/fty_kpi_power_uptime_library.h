/*  =========================================================================
    fty-kpi-power-uptime - generated layer of public API

    Copyright (C) 2014 - 2018 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_KPI_POWER_UPTIME_LIBRARY_H_INCLUDED
#define FTY_KPI_POWER_UPTIME_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>
#include <malamute.h>
#include <ftyproto.h>

//  FTY_KPI_POWER_UPTIME version macros for compile-time API detection
#define FTY_KPI_POWER_UPTIME_VERSION_MAJOR 1
#define FTY_KPI_POWER_UPTIME_VERSION_MINOR 0
#define FTY_KPI_POWER_UPTIME_VERSION_PATCH 0

#define FTY_KPI_POWER_UPTIME_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define FTY_KPI_POWER_UPTIME_VERSION \
    FTY_KPI_POWER_UPTIME_MAKE_VERSION(FTY_KPI_POWER_UPTIME_VERSION_MAJOR, FTY_KPI_POWER_UPTIME_VERSION_MINOR, FTY_KPI_POWER_UPTIME_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined FTY_KPI_POWER_UPTIME_STATIC
#       define FTY_KPI_POWER_UPTIME_EXPORT
#   elif defined FTY_KPI_POWER_UPTIME_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define FTY_KPI_POWER_UPTIME_EXPORT __declspec(dllexport)
#       else
#           define FTY_KPI_POWER_UPTIME_EXPORT
#       endif
#   elif defined FTY_KPI_POWER_UPTIME_EXPORTS
#       define FTY_KPI_POWER_UPTIME_EXPORT __declspec(dllexport)
#   else
#       define FTY_KPI_POWER_UPTIME_EXPORT __declspec(dllimport)
#   endif
#   define FTY_KPI_POWER_UPTIME_PRIVATE
#elif defined (__CYGWIN__)
#   define FTY_KPI_POWER_UPTIME_EXPORT
#   define FTY_KPI_POWER_UPTIME_PRIVATE
#else
#   if (defined __GNUC__ && __GNUC__ >= 4) || defined __INTEL_COMPILER
#       define FTY_KPI_POWER_UPTIME_PRIVATE __attribute__ ((visibility ("hidden")))
#       define FTY_KPI_POWER_UPTIME_EXPORT __attribute__ ((visibility ("default")))
#   else
#       define FTY_KPI_POWER_UPTIME_PRIVATE
#       define FTY_KPI_POWER_UPTIME_EXPORT
#   endif
#endif

//  Project has no stable classes, so we build the draft API
#undef  FTY_KPI_POWER_UPTIME_BUILD_DRAFT_API
#define FTY_KPI_POWER_UPTIME_BUILD_DRAFT_API

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
//  Draft classes are by default not built in stable releases
#ifdef FTY_KPI_POWER_UPTIME_BUILD_DRAFT_API
typedef struct _fty_kpi_power_uptime_server_t fty_kpi_power_uptime_server_t;
#define FTY_KPI_POWER_UPTIME_SERVER_T_DEFINED
#endif // FTY_KPI_POWER_UPTIME_BUILD_DRAFT_API


//  Public classes, each with its own header file
#ifdef FTY_KPI_POWER_UPTIME_BUILD_DRAFT_API
#include "fty_kpi_power_uptime_server.h"
#endif // FTY_KPI_POWER_UPTIME_BUILD_DRAFT_API

#ifdef FTY_KPI_POWER_UPTIME_BUILD_DRAFT_API

#ifdef __cplusplus
extern "C" {
#endif

//  Self test for private classes
FTY_KPI_POWER_UPTIME_EXPORT void
    fty_kpi_power_uptime_private_selftest (bool verbose, const char *subtest);

#ifdef __cplusplus
}
#endif
#endif // FTY_KPI_POWER_UPTIME_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
