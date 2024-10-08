#!/bin/bash
nitrogen --restore &

while true; do
	xsetroot -name "$(date)"
	sleep 1
done

