#!/bin/sh
git log --pretty=oneline | cut -f1 -d" " | head -n 5

