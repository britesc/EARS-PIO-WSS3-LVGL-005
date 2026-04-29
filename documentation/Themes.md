`[//]: # (Revision Number 1000)`

# Themes.md

It is intended that a Light and Dark Theme will be produced, compatible with both RGB565 and RGB888.

## Themes

The Themes are defined in SYSTEM_rgb565ColoursDef.h and SYSTEM_rgb888ColoursDef.h

Within each header file are defined 2 swatches.
Camouflage Swatch
Red Swatch

The Red Swatch is a must have, whilst the Camouflage Swatch will be a nice to have.

## Coding

It is intended to develop both of the Swatches as fully integrated LVGL Themes.
Therefore these must be developed as soon as possible to prevent superfluous usage of defines.
The themes should replace the default Light and Dark Themes within LVGL to reduce memory space.

## Default

The Dark Theme is to become the Default Theme for the Application.

