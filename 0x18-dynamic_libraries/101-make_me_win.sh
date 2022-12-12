#!/bin/bash
wget -P /tmp https://github.com/Abewok/alx-low_level_programming/blob/main/0x18-dynamic_libraries/nrandom.so?raw=true
export LD_PRELOAD=/tmp/nrandom.so
