/********************************************************************
 *
 * Copyright 2019 Leidos, Inc.
 * There is no charge to use the library, and it may be accessed at:
 * https://www.leidos.com/products/ocean-marine#gsf.
 * This library may be redistributed and/or modified under the terms of
 * the GNU Lesser General Public License version 2.1, as published by the
 * Free Software Foundation.  A copy of the LGPL 2.1 license is included with
 * the GSF distribution and is avaialbe at: http://opensource.org/licenses/LGPL-2.1.
 *
 ********************************************************************/

#ifndef _GSF_DEC_H_
#define _GSF_DEC_H_

#include "gsf.h"
#include "gsf_ft.h"

int OPTLK gsfDecodeHeader(gsfHeader *header,  const unsigned char *sptr);
int OPTLK gsfDecodeSwathBathySummary(gsfSwathBathySummary *summ, const unsigned char *sptr);
int OPTLK gsfDecodeSwathBathymetryPing(gsfSwathBathyPing *ping, const unsigned char *sptr, GSF_FILE_TABLE *ft, int handle, int record_size);
int OPTLK gsfDecodeSoundVelocityProfile(gsfSVP *svp, GSF_FILE_TABLE *ft, const unsigned char *sptr);
int OPTLK gsfDecodeProcessingParameters(gsfProcessingParameters *param, GSF_FILE_TABLE *ft, const unsigned char *sptr);
int OPTLK gsfDecodeSensorParameters(gsfSensorParameters *param, GSF_FILE_TABLE *ft, const unsigned char *sptr);
int OPTLK gsfDecodeComment(gsfComment *comment, GSF_FILE_TABLE *ft, const unsigned char *sptr);
int OPTLK gsfDecodeHistory(gsfHistory *history, GSF_FILE_TABLE *ft, const unsigned char *sptr);
int OPTLK gsfDecodeNavigationError(gsfNavigationError *nav_error, const unsigned char *sptr);
int OPTLK gsfDecodeHVNavigationError(gsfHVNavigationError *hv_nav_error, GSF_FILE_TABLE *ft, const unsigned char *sptr);
int OPTLK gsfDecodeSinglebeam(gsfSingleBeamPing * ping, const unsigned char *sptr, int record_size);
int OPTLK gsfDecodeAttitude(gsfAttitude *attitude, GSF_FILE_TABLE *ft, const unsigned char *sptr);

#endif
