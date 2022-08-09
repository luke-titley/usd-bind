#!/bin/bash

export PATH=/root/.cargo/bin:$PATH
export LD_LIBRARY_PATH=/usr/local/USD/lib:$LD_LIBRARY_PATH
g++ --version
#cd usd-rs && env CMAKE_PREFIX_PATH=/usr/local/USD cargo test
