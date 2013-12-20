/* $Id: gmt_core_module.h 12380 2013-10-23 19:20:13Z pwessel $
 *
 * Copyright (c) 2012-2013
 * by P. Wessel, W. H. F. Smith, R. Scharroo, J. Luis, and F. Wobbe
 * See LICENSE.TXT file for copying and redistribution conditions.
 */

/* gmt_core_module.h declares the prototypes for core module functions
 * and the array that contains core GMT module parameters such as name
 * and purpose strings.
 * DO NOT edit this file directly! Instead edit gmt_moduleinfo.txt
 * and regenerate this file with gmt_make_module_src.sh core. */

#pragma once
#ifndef _GMT_CORE_MODULE_H
#define _GMT_CORE_MODULE_H

#ifdef __cplusplus /* Basic C++ support */
extern "C" {
#endif

/* Declaration modifiers for DLL support (MSC et al) */
#include "declspec.h"

/* Prototypes of all modules in the GMT core library */
EXTERN_MSC int GMT_blockmean (void *API, int mode, void *args);
EXTERN_MSC int GMT_blockmedian (void *API, int mode, void *args);
EXTERN_MSC int GMT_blockmode (void *API, int mode, void *args);
EXTERN_MSC int GMT_filter1d (void *API, int mode, void *args);
EXTERN_MSC int GMT_fitcircle (void *API, int mode, void *args);
EXTERN_MSC int GMT_gmt2kml (void *API, int mode, void *args);
EXTERN_MSC int GMT_gmtconnect (void *API, int mode, void *args);
EXTERN_MSC int GMT_gmtconvert (void *API, int mode, void *args);
EXTERN_MSC int GMT_gmtdefaults (void *API, int mode, void *args);
EXTERN_MSC int GMT_gmtget (void *API, int mode, void *args);
EXTERN_MSC int GMT_gmtinfo (void *API, int mode, void *args);
EXTERN_MSC int GMT_gmtmath (void *API, int mode, void *args);
EXTERN_MSC int GMT_gmtselect (void *API, int mode, void *args);
EXTERN_MSC int GMT_gmtset (void *API, int mode, void *args);
EXTERN_MSC int GMT_gmtsimplify (void *API, int mode, void *args);
EXTERN_MSC int GMT_gmtspatial (void *API, int mode, void *args);
EXTERN_MSC int GMT_gmtvector (void *API, int mode, void *args);
EXTERN_MSC int GMT_gmtwhich (void *API, int mode, void *args);
EXTERN_MSC int GMT_grd2cpt (void *API, int mode, void *args);
EXTERN_MSC int GMT_grd2rgb (void *API, int mode, void *args);
EXTERN_MSC int GMT_grd2xyz (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdblend (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdclip (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdcontour (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdcut (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdedit (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdfft (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdfilter (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdgradient (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdhisteq (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdimage (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdinfo (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdlandmask (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdmask (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdmath (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdpaste (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdproject (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdraster (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdreformat (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdsample (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdtrack (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdtrend (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdvector (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdview (void *API, int mode, void *args);
EXTERN_MSC int GMT_grdvolume (void *API, int mode, void *args);
EXTERN_MSC int GMT_greenspline (void *API, int mode, void *args);
EXTERN_MSC int GMT_kml2gmt (void *API, int mode, void *args);
EXTERN_MSC int GMT_makecpt (void *API, int mode, void *args);
EXTERN_MSC int GMT_mapproject (void *API, int mode, void *args);
EXTERN_MSC int GMT_nearneighbor (void *API, int mode, void *args);
EXTERN_MSC int GMT_project (void *API, int mode, void *args);
EXTERN_MSC int GMT_ps2raster (void *API, int mode, void *args);
EXTERN_MSC int GMT_psbasemap (void *API, int mode, void *args);
EXTERN_MSC int GMT_psclip (void *API, int mode, void *args);
EXTERN_MSC int GMT_pscoast (void *API, int mode, void *args);
EXTERN_MSC int GMT_pscontour (void *API, int mode, void *args);
EXTERN_MSC int GMT_pshistogram (void *API, int mode, void *args);
EXTERN_MSC int GMT_psimage (void *API, int mode, void *args);
EXTERN_MSC int GMT_pslegend (void *API, int mode, void *args);
EXTERN_MSC int GMT_psmask (void *API, int mode, void *args);
EXTERN_MSC int GMT_psrose (void *API, int mode, void *args);
EXTERN_MSC int GMT_psscale (void *API, int mode, void *args);
EXTERN_MSC int GMT_pstext (void *API, int mode, void *args);
EXTERN_MSC int GMT_pswiggle (void *API, int mode, void *args);
EXTERN_MSC int GMT_psxyz (void *API, int mode, void *args);
EXTERN_MSC int GMT_psxy (void *API, int mode, void *args);
EXTERN_MSC int GMT_read (void *API, int mode, void *args);
EXTERN_MSC int GMT_sample1d (void *API, int mode, void *args);
EXTERN_MSC int GMT_spectrum1d (void *API, int mode, void *args);
EXTERN_MSC int GMT_sph2grd (void *API, int mode, void *args);
EXTERN_MSC int GMT_sphdistance (void *API, int mode, void *args);
EXTERN_MSC int GMT_sphinterpolate (void *API, int mode, void *args);
EXTERN_MSC int GMT_sphtriangulate (void *API, int mode, void *args);
EXTERN_MSC int GMT_splitxyz (void *API, int mode, void *args);
EXTERN_MSC int GMT_surface (void *API, int mode, void *args);
EXTERN_MSC int GMT_trend1d (void *API, int mode, void *args);
EXTERN_MSC int GMT_trend2d (void *API, int mode, void *args);
EXTERN_MSC int GMT_triangulate (void *API, int mode, void *args);
EXTERN_MSC int GMT_write (void *API, int mode, void *args);
EXTERN_MSC int GMT_xyz2grd (void *API, int mode, void *args);

/* Pretty print all modules in the GMT core library and their purposes */
EXTERN_MSC void gmt_core_module_show_all (void *API);

#ifdef __cplusplus
}
#endif

#endif /* !_GMT_CORE_MODULE_H */
