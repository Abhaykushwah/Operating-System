#!/bin/bash

## zombie process

for i in {1...100}
do
    sleep 1 &
done
exec sleep 100

### run ps command in another terminal to check the PID of running process
