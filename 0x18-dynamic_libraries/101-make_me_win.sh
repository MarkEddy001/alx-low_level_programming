#!/bin/bash
wget -P /tmp https://github.com/MarkEddy001/0x18.c/raw/master/gm
export LD_PRELOAD=/tmp/nrandom.so
