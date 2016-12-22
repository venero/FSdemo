export zsact=/home/venero/Downloads/chart_test

filebench -f ${zsact}/shell/workloads/seqwriteHMFS.f > ${zsact}/shell/target.txt
echo "--------------------------------------"
echo "Sequential write test for [HMFS] ends."
echo "--------------------------------------"
rm -rf ${zsact}/shell/HMFS/*
