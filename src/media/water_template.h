/*
 * water_template.h
 *
 *  Created on: 2015-1-20
 *      Author: maygolf
 */

#ifndef WATER_TEMPLATE_H_
#define WATER_TEMPLATE_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#define Transparent_Y 0x00
#define TEMPLATE_NUM 13

#define AnsiChar char
//0
const unsigned AnsiChar data0[146] = {
	0x08, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x90, 0x0F,
	0x00, 0x00, 0x00, 0x0F, 0xC0, 0xA0, 0x60, 0xE0, 0x30, 0x00, 0x00, 0x70, 0xCF, 0x00, 0x00, 0x90,
	0xAF, 0x00, 0x00, 0xC0, 0x7F, 0x00, 0x00, 0x50, 0xF0, 0x00, 0x00, 0xC0, 0x7F, 0x00, 0x00, 0x3F,
	0xFF, 0x00, 0x00, 0xC0, 0x7F, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0xC0, 0x7F, 0x00, 0x00, 0x3F,
	0xFF, 0x00, 0x00, 0xA0, 0xA0, 0x00, 0x00, 0x70, 0xCF, 0x00, 0x00, 0x3F, 0xF0, 0x30, 0x0F, 0xCF,
	0x60, 0x00, 0x00, 0x00, 0x30, 0xCF, 0xCF, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80
};
//1
const unsigned AnsiChar data1[146] = {
	0x08, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x7F, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x90, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xCF, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x90, 0xE0, 0xFF, 0xA0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80
};
//2
const unsigned AnsiChar data2[146] = {
	0x08, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x90, 0xA0, 0x50,
	0x00, 0x00, 0x00, 0x1F, 0xC0, 0x0F, 0x1F, 0xE0, 0x60, 0x00, 0x00, 0x7F, 0xA0, 0x00, 0x00, 0x90,
	0xAF, 0x00, 0x00, 0x50, 0x7F, 0x00, 0x00, 0xAF, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xF0,
	0x30, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xCF, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x60, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xA0, 0x60, 0x00, 0x00, 0x50, 0x00, 0x00, 0x70, 0xA0, 0x00, 0x00, 0x3F,
	0xC0, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80
};
//3
const unsigned AnsiChar data3[146] = {
	0x08, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xA0, 0x90, 0x1F,
	0x00, 0x00, 0x00, 0x1F, 0xCF, 0x00, 0x3F, 0xFF, 0x1F, 0x00, 0x00, 0x70, 0xC0, 0x00, 0x00, 0xE0,
	0x70, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x0F, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x70, 0xE0, 0x7F,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xA0, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0,
	0xA0, 0x00, 0x00, 0x50, 0x7F, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x90, 0xC0, 0x00, 0x00, 0xC0,
	0x70, 0x00, 0x00, 0x0F, 0xA0, 0x90, 0xAF, 0x90, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80
};
//4
const unsigned AnsiChar data4[146] = {
	0x08, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x90,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xC0, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xAF, 0x3F, 0x3F, 0xC0,
	0x00, 0x00, 0x00, 0x3F, 0x90, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0xE0, 0x90, 0x7F, 0xA0, 0xE0,
	0x7F, 0x1F, 0x00, 0x3F, 0x3F, 0x3F, 0x70, 0xCF, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x50, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xE0, 0xFF, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80
};
//5
const unsigned AnsiChar data5[146] = {
	0x08, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F,
	0x60, 0x00, 0x00, 0x00, 0xC0, 0x7F, 0x7F, 0x7F, 0x3F, 0x00, 0x00, 0x30, 0x7F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x3F, 0x7F, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xCF, 0xC0, 0xC0, 0xCF,
	0x1F, 0x00, 0x00, 0x30, 0x90, 0x00, 0x00, 0xC0, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
	0xC0, 0x00, 0x00, 0x70, 0xA0, 0x00, 0x00, 0x7F, 0xAF, 0x00, 0x00, 0x7F, 0xAF, 0x00, 0x00, 0xCF,
	0x60, 0x00, 0x00, 0x0F, 0xA0, 0x90, 0xC0, 0x7F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80
};
//6
const unsigned AnsiChar data6[146] = {
	0x08, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x7F, 0xC0, 0x70,
	0x00, 0x00, 0x00, 0x00, 0xCF, 0x7F, 0x0F, 0xCF, 0x70, 0x00, 0x00, 0x60, 0xAF, 0x00, 0x00, 0x50,
	0x1F, 0x00, 0x00, 0xAF, 0x7F, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xE0, 0xCF, 0xC0,
	0x30, 0x00, 0x00, 0xC0, 0xE0, 0x0F, 0x00, 0x90, 0xA0, 0x00, 0x00, 0xC0, 0x7F, 0x00, 0x00, 0x3F,
	0xF0, 0x00, 0x00, 0xAF, 0x90, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x60, 0xE0, 0x1F, 0x00, 0x60,
	0xAF, 0x00, 0x00, 0x00, 0x3F, 0xAF, 0xAF, 0xA0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80
};
//7
const unsigned AnsiChar data7[146] = {
	0x08, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x7F, 0x7F, 0x7F, 0x7F,
	0x7F, 0x00, 0x00, 0x70, 0xE0, 0x7F, 0x7F, 0xAF, 0xA0, 0x00, 0x00, 0x7F, 0x1F, 0x00, 0x00, 0xAF,
	0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCF, 0x1F,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x7F, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80
};
//8
const unsigned AnsiChar data8[146] = {
	0x08, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x90, 0xA0, 0x50,
	0x00, 0x00, 0x00, 0x3F, 0xCF, 0x1F, 0x1F, 0xAF, 0x60, 0x00, 0x00, 0xA0, 0x7F, 0x00, 0x00, 0x50,
	0xC0, 0x00, 0x00, 0x70, 0xF0, 0x30, 0x00, 0x7F, 0x90, 0x00, 0x00, 0x0F, 0xAF, 0xFF, 0xAF, 0xC0,
	0x0F, 0x00, 0x00, 0x0F, 0xCF, 0x90, 0xF0, 0xCF, 0x1F, 0x00, 0x00, 0xA0, 0x7F, 0x00, 0x0F, 0xCF,
	0xA0, 0x00, 0x00, 0xCF, 0x3F, 0x00, 0x00, 0x50, 0xE0, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x60,
	0x90, 0x00, 0x00, 0x0F, 0xA0, 0xA0, 0xA0, 0xA0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80
};
//9
const unsigned AnsiChar data9[146] = {
	0x08, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x90, 0x7F, 0x0F,
	0x00, 0x00, 0x00, 0x3F, 0xCF, 0x1F, 0x3F, 0xCF, 0x3F, 0x00, 0x00, 0xA0, 0x70, 0x00, 0x00, 0x7F,
	0xAF, 0x00, 0x00, 0xF0, 0x50, 0x00, 0x00, 0x60, 0xF0, 0x00, 0x00, 0xCF, 0x90, 0x00, 0x00, 0xA0,
	0xFF, 0x00, 0x00, 0x70, 0xF0, 0x90, 0xC0, 0xCF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x70, 0x50, 0x70,
	0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xA0, 0x00, 0x00, 0x50, 0xCF, 0x00, 0x3F, 0xF0,
	0x1F, 0x00, 0x00, 0x1F, 0xE0, 0xA0, 0xF0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80
};
//-
const unsigned AnsiChar data10[98] = {
	0x05, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x90, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80
};

//:
const unsigned AnsiChar data11[98] = {
	0x05, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3F, 0xFF, 0xAF, 0x00, 0x00, 0x1F, 0xC0, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1F, 0xC0, 0x70, 0x00, 0x00, 0x3F, 0xFF, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80
};

//空
const unsigned AnsiChar data12[98] = {
	0x05, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* WATER_TEMPLATE_H_ */
