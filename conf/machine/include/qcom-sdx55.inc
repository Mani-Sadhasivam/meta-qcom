SOC_FAMILY = "sdx55"
require conf/machine/include/qcom-common.inc
require conf/machine/include/tune-cortexa7.inc

MACHINE_ESSENTIAL_EXTRA_RRECOMMENDS += " \
    qrtr \
    rmtfs \
"

# Android boot image settings
QCOM_BOOTIMG_PAGE_SIZE = "4096"
