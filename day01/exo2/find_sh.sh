#!/bin/sh
find -name '*.sh' | tr -d '.sh' | awk -F/ '{print $NF}'

