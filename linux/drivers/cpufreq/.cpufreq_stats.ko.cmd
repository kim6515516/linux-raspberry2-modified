cmd_drivers/cpufreq/cpufreq_stats.ko := arm-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/cpufreq/cpufreq_stats.ko drivers/cpufreq/cpufreq_stats.o drivers/cpufreq/cpufreq_stats.mod.o