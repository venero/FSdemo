export zsact=/home/venero/Downloads/chart_test

filebench -f ${zsact}/shell/workloads/randomwriteEXT4ram.f > ${zsact}/shell/target.txt
echo "--------------------------------------"
echo "Random write test for [EXT4] ends."
echo "--------------------------------------"
rm -rf ${zsact}/shell/EXT4RAM/*
