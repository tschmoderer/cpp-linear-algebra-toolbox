#!/bin/bash

name=cpp-linalg-logo
svg=$name.svg
sizes=(16 32 64 128 256 512)
res=

for i in ${sizes[@]}; do
    folder=$i"x"$i
    mkdir -p $folder
    res+=" $folder/$name.png"
    inkscape $svg -o "$folder/$name.png" -w $i -h $i 
done

convert $res $name.ico
identify $name.ico

name=cpp-linalg-logo
name=$name-white
svg=$name.svg
res=

for i in ${sizes[@]}; do
    folder=$i"x"$i
    mkdir -p $folder
    res+=" $folder/$name.png"
    inkscape $svg -o "$folder/$name.png" -w $i -h $i 
done

convert $res $name.ico
identify $name.ico

name=cpp-linalg-logo
name=$name-bw
svg=$name.svg
sizes=(16 32 64 128 256 512)
res=

for i in ${sizes[@]}; do
    folder=$i"x"$i
    mkdir -p $folder
    res+=" $folder/$name.png"
    inkscape $svg -o "$folder/$name.png" -w $i -h $i 
done

convert $res $name.ico
identify $name.ico