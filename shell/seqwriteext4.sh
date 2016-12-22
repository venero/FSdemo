export zsact=/home/venero/Downloads/chart_test

filebench -f ${zsact}/shell/workloads/seqwriteEXT4.f > ${zsact}/shell/target.txt
echo "--------------------------------------"
echo "Sequential write test for [EXT4] ends."
echo "--------------------------------------"
rm -rf ${zsact}/shell/EXT4/*
