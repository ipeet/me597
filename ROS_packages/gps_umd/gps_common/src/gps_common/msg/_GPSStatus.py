"""autogenerated by genmsg_py from GPSStatus.msg. Do not edit."""
import roslib.message
import struct

import std_msgs.msg

class GPSStatus(roslib.message.Message):
  _md5sum = "1002b6c11b093a7fb9bf266d1de57fcb"
  _type = "gps_common/GPSStatus"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header

# Satellites used in solution
uint16 satellites_used # Number of satellites
int32[] satellite_used_prn # PRN identifiers

# Satellites visible
uint16 satellites_visible
int32[] satellite_visible_prn # PRN identifiers
int32[] satellite_visible_z # Elevation of satellites
int32[] satellite_visible_azimuth # Azimuth of satellites
int32[] satellite_visible_snr # Signal-to-noise ratios (dB)

# Measurement status
uint16 STATUS_NO_FIX=0   # Unable to fix position
uint16 STATUS_FIX=1      # Normal fix
uint16 STATUS_DGPS_FIX=3 # Fixed with DGPS
uint16 STATUS_WAAS_FIX=5 # Fixed with WAAS
uint16 status

uint16 SOURCE_NONE=0 # No information is available
uint16 SOURCE_GPS=1 # Using standard GPS location [only valid for position_source]
uint16 SOURCE_POINTS=2 # Motion/orientation fix is derived from successive points
uint16 SOURCE_DOPPLER=4 # Motion is derived using the Doppler effect
uint16 SOURCE_ALTIMETER=8 # Using an altimeter
uint16 SOURCE_MAGNETIC=16 # Using magnetic sensors
uint16 SOURCE_GYRO=32 # Using gyroscopes
uint16 SOURCE_ACCEL=64 # Using accelerometers

uint16 motion_source # Source for speed, climb and track
uint16 orientation_source # Source for device orientation
uint16 position_source # Source for position


================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.secs: seconds (stamp_secs) since epoch
# * stamp.nsecs: nanoseconds since stamp_secs
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

"""
  # Pseudo-constants
  STATUS_NO_FIX = 0
  STATUS_FIX = 1
  STATUS_DGPS_FIX = 3
  STATUS_WAAS_FIX = 5
  SOURCE_NONE = 0
  SOURCE_GPS = 1
  SOURCE_POINTS = 2
  SOURCE_DOPPLER = 4
  SOURCE_ALTIMETER = 8
  SOURCE_MAGNETIC = 16
  SOURCE_GYRO = 32
  SOURCE_ACCEL = 64

  __slots__ = ['header','satellites_used','satellite_used_prn','satellites_visible','satellite_visible_prn','satellite_visible_z','satellite_visible_azimuth','satellite_visible_snr','status','motion_source','orientation_source','position_source']
  _slot_types = ['Header','uint16','int32[]','uint16','int32[]','int32[]','int32[]','int32[]','uint16','uint16','uint16','uint16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       header,satellites_used,satellite_used_prn,satellites_visible,satellite_visible_prn,satellite_visible_z,satellite_visible_azimuth,satellite_visible_snr,status,motion_source,orientation_source,position_source
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(GPSStatus, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg._Header.Header()
      if self.satellites_used is None:
        self.satellites_used = 0
      if self.satellite_used_prn is None:
        self.satellite_used_prn = []
      if self.satellites_visible is None:
        self.satellites_visible = 0
      if self.satellite_visible_prn is None:
        self.satellite_visible_prn = []
      if self.satellite_visible_z is None:
        self.satellite_visible_z = []
      if self.satellite_visible_azimuth is None:
        self.satellite_visible_azimuth = []
      if self.satellite_visible_snr is None:
        self.satellite_visible_snr = []
      if self.status is None:
        self.status = 0
      if self.motion_source is None:
        self.motion_source = 0
      if self.orientation_source is None:
        self.orientation_source = 0
      if self.position_source is None:
        self.position_source = 0
    else:
      self.header = std_msgs.msg._Header.Header()
      self.satellites_used = 0
      self.satellite_used_prn = []
      self.satellites_visible = 0
      self.satellite_visible_prn = []
      self.satellite_visible_z = []
      self.satellite_visible_azimuth = []
      self.satellite_visible_snr = []
      self.status = 0
      self.motion_source = 0
      self.orientation_source = 0
      self.position_source = 0

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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_struct_H.pack(self.satellites_used))
      length = len(self.satellite_used_prn)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.satellite_used_prn))
      buff.write(_struct_H.pack(self.satellites_visible))
      length = len(self.satellite_visible_prn)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.satellite_visible_prn))
      length = len(self.satellite_visible_z)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.satellite_visible_z))
      length = len(self.satellite_visible_azimuth)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.satellite_visible_azimuth))
      length = len(self.satellite_visible_snr)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.satellite_visible_snr))
      _x = self
      buff.write(_struct_4H.pack(_x.status, _x.motion_source, _x.orientation_source, _x.position_source))
    except struct.error, se: self._check_types(se)
    except TypeError, te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    @param str: byte array of serialized message
    @type  str: str
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg._Header.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.header.frame_id = str[start:end]
      start = end
      end += 2
      (self.satellites_used,) = _struct_H.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.satellite_used_prn = struct.unpack(pattern, str[start:end])
      start = end
      end += 2
      (self.satellites_visible,) = _struct_H.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.satellite_visible_prn = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.satellite_visible_z = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.satellite_visible_azimuth = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.satellite_visible_snr = struct.unpack(pattern, str[start:end])
      _x = self
      start = end
      end += 8
      (_x.status, _x.motion_source, _x.orientation_source, _x.position_source,) = _struct_4H.unpack(str[start:end])
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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_struct_H.pack(self.satellites_used))
      length = len(self.satellite_used_prn)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.satellite_used_prn.tostring())
      buff.write(_struct_H.pack(self.satellites_visible))
      length = len(self.satellite_visible_prn)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.satellite_visible_prn.tostring())
      length = len(self.satellite_visible_z)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.satellite_visible_z.tostring())
      length = len(self.satellite_visible_azimuth)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.satellite_visible_azimuth.tostring())
      length = len(self.satellite_visible_snr)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.satellite_visible_snr.tostring())
      _x = self
      buff.write(_struct_4H.pack(_x.status, _x.motion_source, _x.orientation_source, _x.position_source))
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
      if self.header is None:
        self.header = std_msgs.msg._Header.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.header.frame_id = str[start:end]
      start = end
      end += 2
      (self.satellites_used,) = _struct_H.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.satellite_used_prn = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 2
      (self.satellites_visible,) = _struct_H.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.satellite_visible_prn = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.satellite_visible_z = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.satellite_visible_azimuth = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.satellite_visible_snr = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      _x = self
      start = end
      end += 8
      (_x.status, _x.motion_source, _x.orientation_source, _x.position_source,) = _struct_4H.unpack(str[start:end])
      return self
    except struct.error, e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_H = struct.Struct("<H")
_struct_3I = struct.Struct("<3I")
_struct_4H = struct.Struct("<4H")