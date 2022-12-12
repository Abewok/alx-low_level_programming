#!/bin/bash
wget -P /tmp nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
