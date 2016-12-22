export zsact=/home/venero/Downloads/chart_test

filebench -f ${zsact}/shell/workloads/randomwriteHMFS.f > ${zsact}/shell/target.txt
echo "--------------------------------------"
echo "Random write test for [HMFS] ends."
echo "--------------------------------------"
rm -rf ${zsact}/shell/HMFS/*
