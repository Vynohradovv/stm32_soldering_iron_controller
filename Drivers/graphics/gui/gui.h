/*
 * gui.h
 *
 *  Created on: Aug 1, 2017
 *      Author: jose
 */

#ifndef GRAPHICS_GUI_GUI_H_
#define GRAPHICS_GUI_GUI_H_

#include "oled.h"
#include "screen.h"

void guiInit(TIM_HandleTypeDef *tim);
void guiDraw();
#endif /* GRAPHICS_GUI_GUI_H_ */
