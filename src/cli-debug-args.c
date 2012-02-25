/*   -*- buffer-read-only: t -*- vi: set ro:
 *  
 *  DO NOT EDIT THIS FILE   (cli-debug-args.c)
 *  
 *  It has been AutoGen-ed  February 24, 2012 at 05:06:23 PM by AutoGen 5.15pre10
 *  From the definitions    cli-debug-args.def
 *  and the template file   options
 *
 * Generated from AutoOpts 36:2:11 templates.
 *
 *  AutoOpts is a copyrighted work.  This source file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the gnutls-cli-debug author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 *
 * The gnutls-cli-debug program is copyrighted and licensed
 * under the following terms:
 *
 *  Copyright (C) 2000-2012 Free Software Foundation, all rights reserved.
 *  This is free software. It is licensed for use, modification and
 *  redistribution under the terms of the
 *  GNU General Public License, version 3 or later
 *      <http://gnu.org/licenses/gpl.html>
 *
 *  gnutls-cli-debug is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  gnutls-cli-debug is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <sys/types.h>

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define OPTION_CODE_COMPILE 1
#include "cli-debug-args.h"
#include <errno.h>
#ifdef  __cplusplus
extern "C" {
#endif
extern FILE * option_usage_fp;

/* TRANSLATORS: choose the translation for option names wisely because you
                cannot ever change your mind. */
#define zCopyright      (gnutls_cli_debug_opt_strs+0)
#define zLicenseDescrip (gnutls_cli_debug_opt_strs+284)

extern tUsageProc optionUsage;

#ifndef NULL
#  define NULL 0
#endif

/*
 *  gnutls-cli-debug option static const strings
 */
static char const gnutls_cli_debug_opt_strs[1828] =
/*     0 */ "gnutls-cli-debug 3.0.14\n"
            "Copyright (C) 2000-2012 Free Software Foundation, all rights reserved.\n"
            "This is free software. It is licensed for use, modification and\n"
            "redistribution under the terms of the\n"
            "GNU General Public License, version 3 or later\n"
            "    <http://gnu.org/licenses/gpl.html>\n\0"
/*   284 */ "gnutls-cli-debug is free software: you can redistribute it and/or modify\n"
            "it under the terms of the GNU General Public License as published by\n"
            "the Free Software Foundation, either version 3 of the License, or (at\n"
            "your option) any later version.\n\n"
            "gnutls-cli-debug is distributed in the hope that it will be useful, but\n"
            "WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY\n"
            "or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License\n"
            "for more details.\n\n"
            "You should have received a copy of the GNU General Public License along\n"
            "with this program.  If not, see <http://www.gnu.org/licenses/>.\n\0"
/*   905 */ "Enable debugging.\0"
/*   923 */ "DEBUG\0"
/*   929 */ "debug\0"
/*   935 */ "More verbose output\0"
/*   955 */ "VERBOSE\0"
/*   963 */ "verbose\0"
/*   971 */ "The port to connect to\0"
/*   994 */ "PORT\0"
/*   999 */ "port\0"
/*  1004 */ "Display extended usage information and exit\0"
/*  1048 */ "help\0"
/*  1053 */ "Extended usage information passed thru pager\0"
/*  1098 */ "more-help\0"
/*  1108 */ "Output version information and exit\0"
/*  1144 */ "version\0"
/*  1152 */ "GNUTLS_CLI_DEBUG\0"
/*  1169 */ "gnutls-cli-debug - GnuTLS debug client - Ver. 3.0.14\n"
            "USAGE:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]... \n\0"
/*  1281 */ "bug-gnutls@gnu.org\0"
/*  1300 */ "\n\n\0"
/*  1303 */ "\n"
            "TLS debug client. It sets up multiple TLS connections to a server\n"
            "and queries its capabilities. It was created to assist in debugging\n"
            "GnuTLS, but it might be useful to extract a TLS server's capabilities.\n"
            "It connects to a TLS server, performs tests and print the server's\n"
            "capabilities. If called with the `-v' parameter more checks will be\n"
            "performed.  Can be used to check for servers with special needs or bugs.\n\0"
/*  1718 */ "gnutls-cli-debug 3.0.14\0"
/*  1742 */ "Usage: gnutls-cli-debug [options] hostname\n"
            "gnutls-cli --help for usage instructions.\n";

/*
 *  debug option description:
 */
#define DEBUG_DESC      (gnutls_cli_debug_opt_strs+905)
#define DEBUG_NAME      (gnutls_cli_debug_opt_strs+923)
#define DEBUG_name      (gnutls_cli_debug_opt_strs+929)
#define DEBUG_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_NUMERIC))

/*
 *  verbose option description:
 */
#define VERBOSE_DESC      (gnutls_cli_debug_opt_strs+935)
#define VERBOSE_NAME      (gnutls_cli_debug_opt_strs+955)
#define VERBOSE_name      (gnutls_cli_debug_opt_strs+963)
#define VERBOSE_FLAGS     (OPTST_DISABLED)

/*
 *  port option description:
 */
#define PORT_DESC      (gnutls_cli_debug_opt_strs+971)
#define PORT_NAME      (gnutls_cli_debug_opt_strs+994)
#define PORT_name      (gnutls_cli_debug_opt_strs+999)
#define PORT_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_NUMERIC))

/*
 *  Help/More_Help/Version option descriptions:
 */
#define HELP_DESC       (gnutls_cli_debug_opt_strs+1004)
#define HELP_name       (gnutls_cli_debug_opt_strs+1048)
#ifdef HAVE_WORKING_FORK
#define MORE_HELP_DESC  (gnutls_cli_debug_opt_strs+1053)
#define MORE_HELP_name  (gnutls_cli_debug_opt_strs+1098)
#define MORE_HELP_FLAGS (OPTST_IMM | OPTST_NO_INIT)
#else
#define MORE_HELP_DESC  NULL
#define MORE_HELP_name  NULL
#define MORE_HELP_FLAGS (OPTST_OMITTED | OPTST_NO_INIT)
#endif
#ifdef NO_OPTIONAL_OPT_ARGS
#  define VER_FLAGS     (OPTST_IMM | OPTST_NO_INIT)
#else
#  define VER_FLAGS     (OPTST_SET_ARGTYPE(OPARG_TYPE_STRING) | \
                         OPTST_ARG_OPTIONAL | OPTST_IMM | OPTST_NO_INIT)
#endif
#define VER_DESC        (gnutls_cli_debug_opt_strs+1108)
#define VER_name        (gnutls_cli_debug_opt_strs+1144)
/*
 *  Declare option callback procedures
 */
extern tOptProc
    optionBooleanVal,   optionNestedVal,    optionNumericVal,
    optionPagedUsage,   optionPrintVersion, optionResetOpt,
    optionStackArg,     optionTimeDate,     optionTimeVal,
    optionUnstackArg,   optionVendorOption;
static tOptProc
    doOptDebug, doOptPort, doUsageOpt;
#define VER_PROC        optionPrintVersion

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Define the Gnutls_Cli_Debug Option Descriptions.
 */
static tOptDesc optDesc[OPTION_CT] = {
  {  /* entry idx, value */ 0, VALUE_OPT_DEBUG,
     /* equiv idx, value */ 0, VALUE_OPT_DEBUG,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ DEBUG_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --debug */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptDebug,
     /* desc, NAME, name */ DEBUG_DESC, DEBUG_NAME, DEBUG_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 1, VALUE_OPT_VERBOSE,
     /* equiv idx, value */ 1, VALUE_OPT_VERBOSE,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, NOLIMIT, 0,
     /* opt state flags  */ VERBOSE_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --verbose */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ VERBOSE_DESC, VERBOSE_NAME, VERBOSE_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 2, VALUE_OPT_PORT,
     /* equiv idx, value */ 2, VALUE_OPT_PORT,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ PORT_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --port */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptPort,
     /* desc, NAME, name */ PORT_DESC, PORT_NAME, PORT_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_VERSION, VALUE_OPT_VERSION,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_VERSION,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ VER_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ VER_PROC,
     /* desc, NAME, name */ VER_DESC, NULL, VER_name,
     /* disablement strs */ NULL, NULL },



  {  /* entry idx, value */ INDEX_OPT_HELP, VALUE_OPT_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_IMM | OPTST_NO_INIT, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doUsageOpt,
     /* desc, NAME, name */ HELP_DESC, NULL, HELP_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_MORE_HELP, VALUE_OPT_MORE_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_MORE_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ MORE_HELP_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL,  NULL,
     /* option proc      */ optionPagedUsage,
     /* desc, NAME, name */ MORE_HELP_DESC, NULL, MORE_HELP_name,
     /* disablement strs */ NULL, NULL }
};


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Define the Gnutls_Cli_Debug Option Environment
 */
#define zPROGNAME       (gnutls_cli_debug_opt_strs+1152)
#define zUsageTitle     (gnutls_cli_debug_opt_strs+1169)
#define zRcName         NULL
#define apzHomeList     NULL
#define zBugsAddr       (gnutls_cli_debug_opt_strs+1281)
#define zExplain        (gnutls_cli_debug_opt_strs+1300)
#define zDetail         (gnutls_cli_debug_opt_strs+1303)
#define zFullVersion    (gnutls_cli_debug_opt_strs+1718)
/* extracted from optcode.tlib near line 315 */

#if defined(ENABLE_NLS)
# define OPTPROC_BASE OPTPROC_TRANSLATE | OPTPROC_NXLAT_OPT
  static tOptionXlateProc translate_option_strings;
#else
# define OPTPROC_BASE OPTPROC_NONE
# define translate_option_strings NULL
#endif /* ENABLE_NLS */


#define gnutls_cli_debug_full_usage (NULL)

#define gnutls_cli_debug_short_usage (gnutls_cli_debug_opt_strs+1742)

/*
 *  Create the static procedure(s) declared above.
 */
static void
doUsageOpt(tOptions * pOptions, tOptDesc * pOptDesc)
{
    (void)pOptions;
    USAGE(GNUTLS_CLI_DEBUG_EXIT_SUCCESS);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   For the debug option.
 */
static void
doOptDebug(tOptions* pOptions, tOptDesc* pOptDesc)
{
    static struct {long rmin, rmax;} const rng[1] = {
        { 0 ,  9999 } };
    int  ix;

    if (pOptions <= OPTPROC_EMIT_LIMIT)
        goto emit_ranges;
    optionNumericVal(pOptions, pOptDesc);

    for (ix = 0; ix < 1; ix++) {
        if (pOptDesc->optArg.argInt < rng[ix].rmin)
            continue;  /* ranges need not be ordered. */
        if (pOptDesc->optArg.argInt == rng[ix].rmin)
            return;
        if (rng[ix].rmax == LONG_MIN)
            continue;
        if (pOptDesc->optArg.argInt <= rng[ix].rmax)
            return;
    }

    option_usage_fp = stderr;

emit_ranges:

    optionShowRange(pOptions, pOptDesc, (void *)rng, 1);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   For the port option.
 */
static void
doOptPort(tOptions* pOptions, tOptDesc* pOptDesc)
{
    static struct {long rmin, rmax;} const rng[1] = {
        { 0 ,  65536 } };
    int  ix;

    if (pOptions <= OPTPROC_EMIT_LIMIT)
        goto emit_ranges;
    optionNumericVal(pOptions, pOptDesc);

    for (ix = 0; ix < 1; ix++) {
        if (pOptDesc->optArg.argInt < rng[ix].rmin)
            continue;  /* ranges need not be ordered. */
        if (pOptDesc->optArg.argInt == rng[ix].rmin)
            return;
        if (rng[ix].rmax == LONG_MIN)
            continue;
        if (pOptDesc->optArg.argInt <= rng[ix].rmax)
            return;
    }

    option_usage_fp = stderr;

emit_ranges:

    optionShowRange(pOptions, pOptDesc, (void *)rng, 1);
}
/* extracted from optmain.tlib near line 1133 */

#ifndef  PKGDATADIR
# define PKGDATADIR ""
#endif

#ifndef  WITH_PACKAGER
# define gnutls_cli_debug_packager_info NULL
#else
static char const gnutls_cli_debug_packager_info[] =
    "Packaged by " WITH_PACKAGER

# ifdef WITH_PACKAGER_VERSION
        " ("WITH_PACKAGER_VERSION")"
# endif

# ifdef WITH_PACKAGER_BUG_REPORTS
    "\nReport gnutls_cli_debug bugs to " WITH_PACKAGER_BUG_REPORTS
# endif
    "\n";
#endif

tOptions gnutls_cli_debugOptions = {
    OPTIONS_STRUCT_VERSION,
    0, NULL,                    /* original argc + argv    */
    ( OPTPROC_BASE
    + OPTPROC_ERRSTOP
    + OPTPROC_SHORTOPT
    + OPTPROC_LONGOPT
    + OPTPROC_NO_REQ_OPT
    + OPTPROC_ARGS_REQ
    + OPTPROC_REORDER
    + OPTPROC_GNUUSAGE
    + OPTPROC_MISUSE ),
    0, NULL,                    /* current option index, current option */
    NULL,         NULL,         zPROGNAME,
    zRcName,      zCopyright,   zLicenseDescrip,
    zFullVersion, apzHomeList,  zUsageTitle,
    zExplain,     zDetail,      optDesc,
    zBugsAddr,                  /* address to send bugs to */
    NULL, NULL,                 /* extensions/saved state  */
    optionUsage, /* usage procedure */
    translate_option_strings,   /* translation procedure */
    /*
     *  Indexes to special options
     */
    { INDEX_OPT_MORE_HELP, /* more-help option index */
      NO_EQUIVALENT, /* save option index */
      NO_EQUIVALENT, /* '-#' option index */
      NO_EQUIVALENT /* index of default opt */
    },
    6 /* full option count */, 3 /* user option count */,
    gnutls_cli_debug_full_usage, gnutls_cli_debug_short_usage,
    NULL, NULL,
    PKGDATADIR, gnutls_cli_debug_packager_info
};

#if ENABLE_NLS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <autoopts/usage-txt.h>

static char* AO_gettext(char const* pz);
static void  coerce_it(void** s);

static char*
AO_gettext(char const* pz)
{
    char* pzRes;
    if (pz == NULL)
        return NULL;
    pzRes = _(pz);
    if (pzRes == pz)
        return pzRes;
    pzRes = strdup(pzRes);
    if (pzRes == NULL) {
        fputs(_("No memory for duping translated strings\n"), stderr);
        exit(GNUTLS_CLI_DEBUG_EXIT_FAILURE);
    }
    return pzRes;
}

static void coerce_it(void** s) { *s = AO_gettext(*s);
}

/*
 *  This invokes the translation code (e.g. gettext(3)).
 */
static void
translate_option_strings(void)
{
    tOptions * const pOpt = &gnutls_cli_debugOptions;

    /*
     *  Guard against re-translation.  It won't work.  The strings will have
     *  been changed by the first pass through this code.  One shot only.
     */
    if (option_usage_text.field_ct != 0) {
        /*
         *  Do the translations.  The first pointer follows the field count
         *  field.  The field count field is the size of a pointer.
         */
        tOptDesc * pOD = pOpt->pOptDesc;
        char **    ppz = (char**)(void*)&(option_usage_text);
        int        ix  = option_usage_text.field_ct;

        do {
            ppz++;
            *ppz = AO_gettext(*ppz);
        } while (--ix > 0);

        coerce_it((void*)&(pOpt->pzCopyright));
        coerce_it((void*)&(pOpt->pzCopyNotice));
        coerce_it((void*)&(pOpt->pzFullVersion));
        coerce_it((void*)&(pOpt->pzUsageTitle));
        coerce_it((void*)&(pOpt->pzExplain));
        coerce_it((void*)&(pOpt->pzDetail));
        coerce_it((void*)&(pOpt->pzPackager));
        coerce_it((void*)&(pOpt->pzShortUsage));
        option_usage_text.field_ct = 0;

        for (ix = pOpt->optCt; ix > 0; ix--, pOD++)
            coerce_it((void*)&(pOD->pzText));
    }

    if ((pOpt->fOptSet & OPTPROC_NXLAT_OPT_CFG) == 0) {
        tOptDesc * pOD = pOpt->pOptDesc;
        int        ix;

        for (ix = pOpt->optCt; ix > 0; ix--, pOD++) {
            coerce_it((void*)&(pOD->pz_Name));
            coerce_it((void*)&(pOD->pz_DisableName));
            coerce_it((void*)&(pOD->pz_DisablePfx));
        }
        /* prevent re-translation */
        gnutls_cli_debugOptions.fOptSet |= OPTPROC_NXLAT_OPT_CFG | OPTPROC_NXLAT_OPT;
    }
}

#endif /* ENABLE_NLS */

#ifdef  __cplusplus
}
#endif
/* cli-debug-args.c ends here */