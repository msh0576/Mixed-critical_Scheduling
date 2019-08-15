#
# This class is automatically generated by mig. DO NOT EDIT THIS FILE.
# This class implements a Python interface to the 'Msg'
# message type.
#

import tinyos.message.Message

# The default size of this message type in bytes.
DEFAULT_MESSAGE_SIZE = 6

# The Active Message type associated with this message.
AM_TYPE = 205

class Msg(tinyos.message.Message.Message):
    # Create a new Msg of size 6.
    def __init__(self, data="", addr=None, gid=None, base_offset=0, data_length=6):
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
            s += "  [node1=0x%x]\n" % (self.get_node1())
        except:
            pass
        try:
            s += "  [node2=0x%x]\n" % (self.get_node2())
        except:
            pass
        try:
            s += "  [gain1to2=0x%x]\n" % (self.get_gain1to2())
        except:
            pass
        try:
            s += "  [gain2to1=0x%x]\n" % (self.get_gain2to1())
        except:
            pass
        return s

    # Message-type-specific access methods appear below.

    #
    # Accessor methods for field: node1
    #   Field type: int
    #   Offset (bits): 0
    #   Size (bits): 16
    #

    #
    # Return whether the field 'node1' is signed (False).
    #
    def isSigned_node1(self):
        return False
    
    #
    # Return whether the field 'node1' is an array (False).
    #
    def isArray_node1(self):
        return False
    
    #
    # Return the offset (in bytes) of the field 'node1'
    #
    def offset_node1(self):
        return (0 / 8)
    
    #
    # Return the offset (in bits) of the field 'node1'
    #
    def offsetBits_node1(self):
        return 0
    
    #
    # Return the value (as a int) of the field 'node1'
    #
    def get_node1(self):
        return self.getUIntElement(self.offsetBits_node1(), 16, 1)
    
    #
    # Set the value of the field 'node1'
    #
    def set_node1(self, value):
        self.setUIntElement(self.offsetBits_node1(), 16, value, 1)
    
    #
    # Return the size, in bytes, of the field 'node1'
    #
    def size_node1(self):
        return (16 / 8)
    
    #
    # Return the size, in bits, of the field 'node1'
    #
    def sizeBits_node1(self):
        return 16
    
    #
    # Accessor methods for field: node2
    #   Field type: int
    #   Offset (bits): 16
    #   Size (bits): 16
    #

    #
    # Return whether the field 'node2' is signed (False).
    #
    def isSigned_node2(self):
        return False
    
    #
    # Return whether the field 'node2' is an array (False).
    #
    def isArray_node2(self):
        return False
    
    #
    # Return the offset (in bytes) of the field 'node2'
    #
    def offset_node2(self):
        return (16 / 8)
    
    #
    # Return the offset (in bits) of the field 'node2'
    #
    def offsetBits_node2(self):
        return 16
    
    #
    # Return the value (as a int) of the field 'node2'
    #
    def get_node2(self):
        return self.getUIntElement(self.offsetBits_node2(), 16, 1)
    
    #
    # Set the value of the field 'node2'
    #
    def set_node2(self, value):
        self.setUIntElement(self.offsetBits_node2(), 16, value, 1)
    
    #
    # Return the size, in bytes, of the field 'node2'
    #
    def size_node2(self):
        return (16 / 8)
    
    #
    # Return the size, in bits, of the field 'node2'
    #
    def sizeBits_node2(self):
        return 16
    
    #
    # Accessor methods for field: gain1to2
    #   Field type: byte
    #   Offset (bits): 32
    #   Size (bits): 8
    #

    #
    # Return whether the field 'gain1to2' is signed (False).
    #
    def isSigned_gain1to2(self):
        return False
    
    #
    # Return whether the field 'gain1to2' is an array (False).
    #
    def isArray_gain1to2(self):
        return False
    
    #
    # Return the offset (in bytes) of the field 'gain1to2'
    #
    def offset_gain1to2(self):
        return (32 / 8)
    
    #
    # Return the offset (in bits) of the field 'gain1to2'
    #
    def offsetBits_gain1to2(self):
        return 32
    
    #
    # Return the value (as a byte) of the field 'gain1to2'
    #
    def get_gain1to2(self):
        return self.getSIntElement(self.offsetBits_gain1to2(), 8, 1)
    
    #
    # Set the value of the field 'gain1to2'
    #
    def set_gain1to2(self, value):
        self.setSIntElement(self.offsetBits_gain1to2(), 8, value, 1)
    
    #
    # Return the size, in bytes, of the field 'gain1to2'
    #
    def size_gain1to2(self):
        return (8 / 8)
    
    #
    # Return the size, in bits, of the field 'gain1to2'
    #
    def sizeBits_gain1to2(self):
        return 8
    
    #
    # Accessor methods for field: gain2to1
    #   Field type: byte
    #   Offset (bits): 40
    #   Size (bits): 8
    #

    #
    # Return whether the field 'gain2to1' is signed (False).
    #
    def isSigned_gain2to1(self):
        return False
    
    #
    # Return whether the field 'gain2to1' is an array (False).
    #
    def isArray_gain2to1(self):
        return False
    
    #
    # Return the offset (in bytes) of the field 'gain2to1'
    #
    def offset_gain2to1(self):
        return (40 / 8)
    
    #
    # Return the offset (in bits) of the field 'gain2to1'
    #
    def offsetBits_gain2to1(self):
        return 40
    
    #
    # Return the value (as a byte) of the field 'gain2to1'
    #
    def get_gain2to1(self):
        return self.getSIntElement(self.offsetBits_gain2to1(), 8, 1)
    
    #
    # Set the value of the field 'gain2to1'
    #
    def set_gain2to1(self, value):
        self.setSIntElement(self.offsetBits_gain2to1(), 8, value, 1)
    
    #
    # Return the size, in bytes, of the field 'gain2to1'
    #
    def size_gain2to1(self):
        return (8 / 8)
    
    #
    # Return the size, in bits, of the field 'gain2to1'
    #
    def sizeBits_gain2to1(self):
        return 8
    
