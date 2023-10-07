#!/bin/bash

cd ..
git submodule init
git submodule update

cd src/libs/rapp
git submodule init
git submodule update
cd ../../../scripts

