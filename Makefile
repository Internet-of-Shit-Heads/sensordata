PNAME=sensordata
NANOPB=nanopb

all: $(PNAME).pb.c $(PNAME).pb.h

$(NANOPB)/generator/proto/nanopb_pb2.py $(NANOPB)/generator/proto/plugin_pb2.py:
	$(MAKE) -C $(NANOPB)/generator/proto

$(PNAME).pb.c $(PNAME).pb.h: $(NANOPB)/generator/proto/nanopb_pb2.py $(NANOPB)/generator/proto/plugin_pb2.py
	protoc --plugin=protoc-gen-nanopb=$(NANOPB)/generator/protoc-gen-nanopb --nanopb_out=. $(PNAME).proto	

clean:
	rm -f $(PNAME).pb.c $(PNAME).pb.h
	rm -f $(NANOPB)/generator/proto/nanopb_pb2.py $(NANOPB)/generator/proto/plugin_pb2.py

.PHONY: all clean
