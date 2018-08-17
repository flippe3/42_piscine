#!/bin/bash
ifconfig | grep "ether ." | tr -d " \t" | cut -d 'r' -f 2
