#
# This class is automatically generated by mig. DO NOT EDIT THIS FILE.
# This class implements a Python interface to the 'Msg'
# message type.
#

import tinyos.message.Message

# The default size of this message type in bytes.
DEFAULT_MESSAGE_SIZE = 5

# The Active Message type associated with this message.
AM_TYPE = 206

class Msg(tinyos.message.Message.Message):
    # Create a new Msg of size 5.
    def __init__(self, data="", addr=None, gid=None, base_offset=0, data_length=5):
        tinyos.message.Message.Message.__init__(self, data, addr, gid, base_offset, data_length)
        self.amTypeSet(AM_TYPE)
    
    # Get AM_TYPE
    def get_amType(cls):
        return AM_TYPE
    
    get_amType = classmethod(get_amType)
    
    #
    # Return a String representation of this message. Includes the
    # message type name and the non-indexed field values.
    #
    def __str__(self):
        s = "Message <Msg> \n"
        try:
            s += "  [binding=0x%x]\n" % (self.get_binding())
        except:
            pass
        try:
            s += "  [mote=0x%x]\n" % (self.get_mote())
        except:
            pass
        try:
            s += "  [ve_start_byte=0x%x]\n" % (self.get_ve_start_byte())
        except:
            pass
        return s

    # Message-type-specific access methods appear below.

    #
    # Accessor methods for field: binding
    #   Field type: int
    #   Offset (bits): 0
    #   Size (bits): 16
    #

    #
    # Return whether the field 'binding' is signed (False).
    #
    def isSigned_binding(self):
        return False
    
    #
    # Return whether the field 'binding' is an array (False).
    #
    def isArray_binding(self):
        return False
    
    #
    # Return the offset (in bytes) of the field 'binding'
    #
    def offset_binding(self):
        return (0 / 8)
    
    #
    # Return the offset (in bits) of the field 'binding'
    #
    def offsetBits_binding(self):
        return 0
    
    #
    # Return the value (as a int) of the field 'binding'
    #
    def get_binding(self):
        return self.getUIntElement(self.offsetBits_binding(), 16, 1)
    
    #
    # Set the value of the field 'binding'
    #
    def set_binding(self, value):
        self.setUIntElement(self.offsetBits_binding(), 16, value, 1)
    
    #
    # Return the size, in bytes, of the field 'binding'
    #
    def size_binding(self):
        return (16 / 8)
    
    #
    # Return the size, in bits, of the field 'binding'
    #
    def sizeBits_binding(self):
        return 16
    
    #
    # Accessor methods for field: mote
    #   Field type: int
    #   Offset (bits): 16
    #   Size (bits): 16
    #

    #
    # Return whether the field 'mote' is signed (False).
    #
    def isSigned_mote(self):
        return False
    
    #
    # Return whether the field 'mote' is an array (False).
    #
    def isArray_mote(self):
        return False
    
    #
    # Return the offset (in bytes) of the field 'mote'
    #
    def offset_mote(self):
        return (16 / 8)
    
    #
    # Return the offset (in bits) of the field 'mote'
    #
    def offsetBits_mote(self):
        return 16
    
    #
    # Return the value (as a int) of the field 'mote'
    #
    def get_mote(self):
        return self.getUIntElement(self.offsetBits_mote(), 16, 1)
    
    #
    # Set the value of the field 'mote'
    #
    def set_mote(self, value):
        self.setUIntElement(self.offsetBits_mote(), 16, value, 1)
    
    #
    # Return the size, in bytes, of the field 'mote'
    #
    def size_mote(self):
        return (16 / 8)
    
    #
    # Return the size, in bits, of the field 'mote'
    #
    def sizeBits_mote(self):
        return 16
    
    #
    # Accessor methods for field: ve_start_byte
    #   Field type: byte
    #   Offset (bits): 32
    #   Size (bits): 8
    #

    #
    # Return whether the field 've_start_byte' is signed (False).
    #
    def isSigned_ve_start_byte(self):
        return False
    
    #
    # Return whether the field 've_start_byte' is an array (False).
    #
    def isArray_ve_start_byte(self):
        return False
    
    #
    # Return the offset (in bytes) of the field 've_start_byte'
    #
    def offset_ve_start_byte(self):
        return (32 / 8)
    
    #
    # Return the offset (in bits) of the field 've_start_byte'
    #
    def offsetBits_ve_start_byte(self):
        return 32
    
    #
    # Return the value (as a byte) of the field 've_start_byte'
    #
    def get_ve_start_byte(self):
        return self.getSIntElement(self.offsetBits_ve_start_byte(), 8, 1)
    
    #
    # Set the value of the field 've_start_byte'
    #
    def set_ve_start_byte(self, value):
        self.setSIntElement(self.offsetBits_ve_start_byte(), 8, value, 1)
    
    #
    # Return the size, in bytes, of the field 've_start_byte'
    #
    def size_ve_start_byte(self):
        return (8 / 8)
    
    #
    # Return the size, in bits, of the field 've_start_byte'
    #
    def sizeBits_ve_start_byte(self):
        return 8
    
