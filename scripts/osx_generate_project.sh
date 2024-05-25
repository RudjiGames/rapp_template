#!/bin/bash
target="$1"

if [ -z "$target" ]; then
action="--gcc=osx gmake"
fi

if [[ "$target" == "emscripten" ]]; then 
action="--gcc=asmjs gmake"
fi

if [[ "$target" == "cheerp" ]]; then 
action="--gcc=cheerp gmake"
fi

cd ../src/app_template/genie
../../../build/tools/bin/darwin/genie $action
cd ../../../scripts
