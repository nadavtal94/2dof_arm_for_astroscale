# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tow_dof_motion:srv/Setfloat64.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Setfloat64_Request(type):
    """Metaclass of message 'Setfloat64_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tow_dof_motion')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tow_dof_motion.srv.Setfloat64_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__setfloat64__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__setfloat64__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__setfloat64__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__setfloat64__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__setfloat64__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Setfloat64_Request(metaclass=Metaclass_Setfloat64_Request):
    """Message class 'Setfloat64_Request'."""

    __slots__ = [
        '_data',
    ]

    _fields_and_field_types = {
        'data': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data = kwargs.get('data', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'data' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'data' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._data = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Setfloat64_Response(type):
    """Metaclass of message 'Setfloat64_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tow_dof_motion')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tow_dof_motion.srv.Setfloat64_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__setfloat64__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__setfloat64__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__setfloat64__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__setfloat64__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__setfloat64__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Setfloat64_Response(metaclass=Metaclass_Setfloat64_Response):
    """Message class 'Setfloat64_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_Setfloat64(type):
    """Metaclass of service 'Setfloat64'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tow_dof_motion')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tow_dof_motion.srv.Setfloat64')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__setfloat64

            from tow_dof_motion.srv import _setfloat64
            if _setfloat64.Metaclass_Setfloat64_Request._TYPE_SUPPORT is None:
                _setfloat64.Metaclass_Setfloat64_Request.__import_type_support__()
            if _setfloat64.Metaclass_Setfloat64_Response._TYPE_SUPPORT is None:
                _setfloat64.Metaclass_Setfloat64_Response.__import_type_support__()


class Setfloat64(metaclass=Metaclass_Setfloat64):
    from tow_dof_motion.srv._setfloat64 import Setfloat64_Request as Request
    from tow_dof_motion.srv._setfloat64 import Setfloat64_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
