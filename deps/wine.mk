## wine ##
include $(SRCDIR)/wine.version

ifeq ($(USE_BINARYBUILDER_WINE),1)
BB_TRIPLET = x86_64-linux-gnu
$(eval $(call bb-install,wine,WINE,false))


endif