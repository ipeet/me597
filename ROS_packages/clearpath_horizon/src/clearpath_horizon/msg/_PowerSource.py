"""autogenerated by genmsg_py from PowerSource.msg. Do not edit."""
import roslib.message
import struct


class PowerSource(roslib.message.Message):
  _md5sum = "adbe384d7d69a337a7f2b6bf1d0139cb"
  _type = "clearpath_horizon/PowerSource"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32 charge
int16 capacity
bool present
bool in_use
uint8 description

"""
  __slots__ = ['charge','capacity','present','in_use','description']
  _slot_types = ['float32','int16','bool','bool','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       charge,capacity,present,in_use,description
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(PowerSource, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.charge is None:
        self.charge = 0.
      if self.capacity is None:
        self.capacity = 0
      if self.present is None:
        self.present = False
      if self.in_use is None:
        self.in_use = False
      if self.description is None:
        self.description = 0
    else:
      self.charge = 0.
      self.capacity = 0
      self.present = False
      self.in_use = False
      self.description = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    @param buff: buffer
    @type  buff: StringIO
    """
    try:
      _x = self
      buff.write(_struct_fh3B.pack(_x.charge, _x.capacity, _x.present, _x.in_use, _x.description))
    except struct.error, se: self._check_types(se)
    except TypeError, te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    @param str: byte array of serialized message
    @type  str: str
    """
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.charge, _x.capacity, _x.present, _x.in_use, _x.description,) = _struct_fh3B.unpack(str[start:end])
      self.present = bool(self.present)
      self.in_use = bool(self.in_use)
      return self
    except struct.error, e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    @param buff: buffer
    @type  buff: StringIO
    @param numpy: numpy python module
    @type  numpy module
    """
    try:
      _x = self
      buff.write(_struct_fh3B.pack(_x.charge, _x.capacity, _x.present, _x.in_use, _x.description))
    except struct.error, se: self._check_types(se)
    except TypeError, te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    @param str: byte array of serialized message
    @type  str: str
    @param numpy: numpy python module
    @type  numpy: module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.charge, _x.capacity, _x.present, _x.in_use, _x.description,) = _struct_fh3B.unpack(str[start:end])
      self.present = bool(self.present)
      self.in_use = bool(self.in_use)
      return self
    except struct.error, e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_fh3B = struct.Struct("<fh3B")