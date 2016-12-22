export zsact=/home/venero/Downloads/chart_test

filebench -f ${zsact}/shell/workloads/seqreadEXT4ram.f > ${zsact}/shell/target.txt
echo "--------------------------------------"
echo "Sequential read test for [EXT4RAM] ends."
echo "--------------------------------------"
rm -rf ${zsact}/shell/EXT4RAM/*
