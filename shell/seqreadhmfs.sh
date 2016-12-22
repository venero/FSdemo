export zsact=/home/venero/Downloads/chart_test

filebench -f ${zsact}/shell/workloads/seqreadHMFS.f > ${zsact}/shell/target.txt
echo "--------------------------------------"
echo "Sequential read test for [HMFS] ends."
echo "--------------------------------------"
rm -rf ${zsact}/shell/HMFS/*
