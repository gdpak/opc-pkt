obj-m := ovnet.o
KVERSION = $(shell uname -r)
all:
	make -C /lib/modules/$(KVERSION)/build M=$(PWD) DESTDIR=$(PWD)/build modules
clean:
	make -C /lib/modules/$(KVERSION)/build M=$(PWD) DESTDIR=$(PWD)/build clean
