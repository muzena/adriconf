Advanced DRI Configurator
=========================

The adriconf (**A**dvanced **DRI** **CONF**igurator) is a tool to set options and configure applications using the standard drirc file used by the Mesa drivers.

Features
--------

The main features of the tool include:

- Automatic removal of invalid options (Options that the driver doesn't support at all)
- Options that have the same value as the system wide options or driver default will be ignored
- System-Wide Applications with empty options (all options are the same as system-wide config or driver default) will be removed automatically


TODOs
-----

Some things that still need to be done:

- Properly support a system without X (wayland systems?) Currently the glX functions mandate a Xlib display object. There must be another way to get the driver options
- Properly deal with PRIME setups (how do we get more information from the driver? hardware ids?)
- Some code cleanups. I'm not very experienced with C++ yet (Maybe split the GUI class, as it is very big and not very readable)
- Tests? Implementing testing for the software would be very nice
- Remove Boost dependency? (Currently boost.locale is used to get the ISO-639 language id, to properly parse Mesa3d translations)

Author
------

This tool is written and maintained by Jean Lorenz Hertel.

License
-------

The tool is licensed under GPLv3 or superior.