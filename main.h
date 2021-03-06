/*
 * Copyright (C) 2014 Prashanth.Udumula
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

#ifndef _MAIN_H_
#define _MAIN_H_

/**************************************************************/

// Build switches

// uncomment this if you want an led to blink on TX and RX
#define USE_LED_TX_RX

/**************************************************************/

typedef enum
{
    APP_IDLE,
    APP_RUN,
    APP_DATA_RECEIVED,
} appState_t;

/**************************************************************/

void app(appState_t);
void processData(void);

/**************************************************************/
#endif // #ifndef _MAIN_H_
