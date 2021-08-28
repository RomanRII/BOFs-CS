#!/bin/python3
import argparse
import os

parser = argparse.ArgumentParser(description='Compile source files for BOFs')
parser.add_argument('-s', help='.c file to compile')
parser.add_argument('-a', help='Architecture to use (x86/x64)')
parser.add_argument('-o', help='Output file (Ex: output.o)')
args = parser.parse_args()

sourceFile = args.s
arch = args.a
outputFile = args.o

x86compileCMD = "i686-w64-mingw32-gcc -c %s -o %s"
x64compileCMD = "x86_64-w64-mingw32-gcc -c %s -o %s"

if (arch == "x86"):
	cmd = x86compileCMD
else:
	cmd = x64compileCMD
cmd = cmd % (sourceFile, outputFile)
os.system(cmd)
