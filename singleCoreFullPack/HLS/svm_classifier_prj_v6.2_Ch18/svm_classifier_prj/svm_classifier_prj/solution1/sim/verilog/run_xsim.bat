
call xelab xil_defaultlib.apatb_svm_classifier_top -prj svm_classifier.prj --initfile "C:/Xilinx/Vivado/2016.2/bin/../data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s svm_classifier 
call xsim --noieeewarnings svm_classifier -tclbatch svm_classifier.tcl

