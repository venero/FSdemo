export zsact=/home/venero/Downloads/chart_test

filebench -f ${zsact}/shell/workloads/randomreadEXT4ram.f > ${zsact}/shell/target.txt
echo "--------------------------------------"
echo "Random read test for [EXT4RAM] ends."
echo "--------------------------------------"
rm -rf ${zsact}/shell/EXT4RAM/*
