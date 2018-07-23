/*****************************************************************************
 * equalizer_presets_50b.h:
 ***************************************************************************** 
 * Copyright (C) 2004 VLC authors and VideoLAN
 * $Id: 44acb681da5a55c590a4ad1d881265204a404a10 $
 *
 * Authors: Laurent Aimar <fenrir@via.ecp.fr>
 * Modified by Masahisa Endo. Jan 27, 2018 17:13
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#ifndef VLC_EQUALIZER_PRESETS_30b_H_
#define VLC_EQUALIZER_PRESETS_30b_H_

/*****************************************************************************
 * Equalizer presets
 *****************************************************************************/
/* Equalizer presets values are in this file instead of equalizer.c, so you can
 * get these values even if the equalizer is not enabled.
 */

#define EQZ_BANDS_30 30


// 42 frequency Num were added to f_vlc_frequency_table_10b 2018.1.2 Masahisa Endo
static const float f_vlc_frequency_table_30b[EQZ_BANDS_30] =
{
    32.703, 65.406, 97.999, 110.000, 164.814, 
    195.998, 233.082, 261.626, 293.665, 329.628, 
    391.995, 440.000, 493.883, 587.330, 659.255, 
    698.456, 783.991, 880.000, 1174.659, 1396.913,
    1760.000, 2093.005, 2637.020, 3135.963, 3520.000, 
    4186.009, 6000, 12000, 14000, 16000,
};

#define NB_PRESETS 1

static const char *const preset_list_30b[NB_PRESETS] = {
    "flat"
};
static const char *const preset_list_30b_text[NB_PRESETS] = {
    N_("Flat"),
};


typedef struct
{
    const char psz_name[16];
    int  i_band;
    float f_preamp;
    float f_amp[EQZ_BANDS_30];
} eqz_preset_t;

static const eqz_preset_t eqz_preset_30b[NB_PRESETS] =
{
    {
        "flat", 30, 12.0f,
        { 
        0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
         },
    },
};



#endif
