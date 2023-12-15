#!/bin/bash
wget -P /tmp/win.so https://github.com/Hasssan888/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
