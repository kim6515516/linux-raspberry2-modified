cmd_drivers/pps/pps_core.ko := arm-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/pps/pps_core.ko drivers/pps/pps_core.o drivers/pps/pps_core.mod.o
