#!/bin/env bash

#docker run -v ${PWD}:/tmp/usd-bind --workdir /tmp/usd-bind -it usd_rs_build_env
docker run -v ${PWD}:/tmp/usd-bind --workdir /tmp/usd-bind usd_rs_build_env bash build.sh
#echo 'cd usd-rs && env LD_LIBRARY_PATH=/usr/local/USD/lib CMAKE_PREFIX_PATH=/usr/local/USD cargo test' | docker run -v ${PWD}:/tmp/usd-bind --workdir /tmp/usd-bind -it usd_rs_build_env

