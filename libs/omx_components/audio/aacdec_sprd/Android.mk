LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	SPRDAACDecoder.cpp

LOCAL_C_INCLUDES := \
	frameworks/av/media/libstagefright/include \
	frameworks/native/include/media/openmax \
	frameworks/av/include/media/stagefright

LOCAL_CFLAGS := \
	-DOSCL_EXPORT_REF= \
	-DOSCL_IMPORT_REF= \
	-D_AACARM_ \
	-D_ARMNINEPLATFORM_ \
	-DAAC_DEC_LITTLE_ENDIAN

LOCAL_LDFLAGS := \
	-Wl,--no-warn-shared-textrel

LOCAL_SHARED_LIBRARIES := \
	libbinder \
	libstagefright \
	libstagefright_omx \
	libstagefright_foundation \
	libstagefrighthw \
	libutils \
	libui \
	libdl \
	libcutils

LOCAL_MODULE := libstagefright_sprd_aacdec
LOCAL_MODULE_TAGS := optional

include $(BUILD_SHARED_LIBRARY)
