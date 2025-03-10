require conf/distro/include/fslc-base.inc

DISTRO = "fsl-base"
DISTRO_NAME = "FSL Distro Base"
SDK_VENDOR = "-fslsdk"

MAINTAINER = "Freescale Semiconductors <lauren.post@nxp.com>"

TARGET_VENDOR = "-fsl"

DISTROOVERRIDES = "fsl"

# Use NXP BSP and u-boot for default
IMX_DEFAULT_BSP = "nxp"
IMX_DEFAULT_BOOTLOADER = "u-boot-imx"

# The following set the providers to components supported by NXP
# Use i.MX Kernel and Gstreamer 1.0 providers
PREFERRED_PROVIDER_virtual/kernel:mx6-nxp-bsp = "linux-imx"
PREFERRED_PROVIDER_virtual/kernel:mx7-nxp-bsp = "linux-imx"
PREFERRED_PROVIDER_virtual/kernel:mx8-nxp-bsp = "linux-imx"
PREFERRED_PROVIDER_virtual/kernel:mx9-nxp-bsp = "linux-imx"

MACHINE_GSTREAMER_1_0_PLUGIN:mx6-nxp-bsp = "imx-gst1.0-plugin"
MACHINE_GSTREAMER_1_0_PLUGIN:mx7-nxp-bsp = "imx-gst1.0-plugin"
MACHINE_GSTREAMER_1_0_PLUGIN:mx8-nxp-bsp = "imx-gst1.0-plugin"
MACHINE_GSTREAMER_1_0_PLUGIN:mx9-nxp-bsp = "imx-gst1.0-plugin"

PREFERRED_VERSION_ffmpeg                    = "4.4.1"

# GStreamer forked recipes
PREFERRED_VERSION_gstreamer1.0              ??= "1.24.7.imx"
PREFERRED_VERSION_gstreamer1.0-plugins-bad  ??= "1.24.7.imx"
PREFERRED_VERSION_gstreamer1.0-plugins-base ??= "1.24.7.imx"
PREFERRED_VERSION_gstreamer1.0-plugins-good ??= "1.24.7.imx"

# GStreamer copied recipes
PREFERRED_VERSION_gst-devtools              ??= "1.24.0.imx"
PREFERRED_VERSION_gstreamer1.0-libav        ??= "1.24.0.imx"
PREFERRED_VERSION_gstreamer1.0-plugins-ugly ??= "1.24.0.imx"
PREFERRED_VERSION_gstreamer1.0-python       ??= "1.24.0.imx"
PREFERRED_VERSION_gstreamer1.0-rtsp-server  ??= "1.24.0.imx"
PREFERRED_VERSION_gstreamer1.0-vaapi        ??= "1.24.0.imx"

# Enable allow-autospawn-for-root as default
PACKAGECONFIG:append:pn-pulseaudio = " autospawn-for-root"
