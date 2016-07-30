/*
 * An example of a custom NumericMenuItem.
 * It tries to display some ASCII graphics in edit mode.
 * This can be useful if you want to give the end user an overview of the value limits.
 * 
 * Copyright (c) 2016 arduino-menusystem
 * Licensed under the MIT license (see LICENSE)
 */

#ifndef _MY_RENDERER_H
#define _MY_RENDERER_H

#include "MenuSystem.h"
#include "CustomNumericMenuItem.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"
#include "FreeMonoBold18pt7b.h"
#include "FreeMono12pt7b.h"
#include "FreeMono24pt7b.h"
#include "FreeMonoBold24pt7b.h"
#include "FreeMono9pt7b.h"


class CustomNumericMenuItem;

class MyRenderer : public MenuComponentRenderer
{
public:
MyRenderer (Adafruit_SSD1306 * ptr);    
virtual void render(Menu const& menu) const;
    virtual void render_menu_item(MenuItem const& menu_item) const;
    virtual void render_back_menu_item(BackMenuItem const& menu_item) const;
    virtual void render_numeric_menu_item(NumericMenuItem const& menu_item) const;
    virtual void render_custom_numeric_menu_item(CustomNumericMenuItem const& menu_item) const;
    virtual void render_menu(Menu const& menu) const;
private:
Adafruit_SSD1306 * displayptr;

};

#endif
