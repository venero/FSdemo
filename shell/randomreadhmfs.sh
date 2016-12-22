export zsact=/home/venero/Downloads/chart_test

filebench -f ${zsact}/shell/workloads/randomreadHMFS.f > ${zsact}/shell/target.txt
echo "--------------------------------------"
echo "Random read test for [HMFS] ends."
echo "--------------------------------------"
rm -rf ${zsact}/shell/HMFS/*
