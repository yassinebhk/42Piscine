#!/bin/bash
git log --format='% H' -n5 | tr -d " "
