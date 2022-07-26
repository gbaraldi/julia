## wine ##
include $(SRCDIR)/wine.version

ifeq ($(USE_BINARYBUILDER_WINE),1)

$(eval $(call bb-install,wine,wine,false))

endif