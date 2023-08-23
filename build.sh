# /bin/bash

cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -S . -B build/

cd build/

cp ./compile_commands.json ../

make

./app/app
