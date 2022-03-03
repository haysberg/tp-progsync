#!/bin/bash

wget https://www-verimag.imag.fr/DIST-TOOLS/SYNCHRONE/lustre-v4/distrib/linux64/lustre-v4-III-e-linux64.tgz -O lustrev4.tgz
tar zxvf ./lustrev4.tgz

sudo cp -r ./lustre-v4-III-e-linux64 /usr/local/lustrev4

echo "export LUSTRE_INSTALL=/usr/local/lustrev4" | tee -a ~/.bashrc > /dev/null
echo "export PATH=\$PATH:\$LUSTRE_INSTALL/bin" | tee -a ~/.bashrc > /dev/null

rm -rf ./lustre-v4-III-e-linux64 
rm -rf ./lustrev4.tgz