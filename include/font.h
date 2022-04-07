#ifndef FONT_H
#define FONT_H

// bytes are rows top-to-bottom
// bits are columns right-to-left
unsigned char font[256][8] = {
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { 0x00, 0x0a, 0x0a, 0x00, 0x11, 0x0e, 0x00, 0x00 },
    { 0x3e, 0x6b, 0x6b, 0x7f, 0x5d, 0x63, 0x3e, 0x00 },
    { 0x00, 0x0a, 0x1f, 0x1f, 0x1f, 0x0e, 0x04, 0x00 },
    { 0x00, 0x04, 0x0e, 0x1f, 0x1f, 0x0e, 0x04, 0x00 },
    { 0x04, 0x0e, 0x04, 0x1f, 0x1f, 0x04, 0x0e, 0x00 },
    { 0x00, 0x04, 0x0e, 0x1f, 0x1f, 0x04, 0x0e, 0x00 },
    { 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00 },
    { 0x1c, 0x18, 0x17, 0x05, 0x07, 0x02, 0x07, 0x02 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { 0x00, 0x1c, 0x18, 0x16, 0x09, 0x09, 0x06, 0x00 },
    { 0x0e, 0x11, 0x11, 0x11, 0x0e, 0x04, 0x0e, 0x04 },
    { 0x0c, 0x1c, 0x14, 0x04, 0x04, 0x07, 0x07, 0x00 },
    { 0x70, 0x4c, 0x44, 0x44, 0x74, 0x77, 0x07, 0x00 },
    { 0x89, 0x42, 0x18, 0xbc, 0x3d, 0x18, 0x42, 0x91 },
    { 0x00, 0x03, 0x0f, 0x3f, 0x0f, 0x03, 0x00, 0x00 },
    { 0x00, 0x30, 0x3c, 0x3f, 0x3c, 0x30, 0x00, 0x00 },
    { 0x04, 0x0e, 0x1f, 0x04, 0x04, 0x1f, 0x0e, 0x04 },
    { 0x12, 0x12, 0x12, 0x12, 0x12, 0x00, 0x12, 0x00 },
    { 0x1e, 0x15, 0x15, 0x16, 0x14, 0x14, 0x14, 0x00 },
    { 0x1e, 0x03, 0x0d, 0x11, 0x16, 0x18, 0x0f, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x1e, 0x00 },
    { 0x04, 0x0e, 0x1f, 0x04, 0x1f, 0x0e, 0x04, 0x1f },
    { 0x04, 0x0e, 0x1f, 0x04, 0x04, 0x04, 0x04, 0x00 },
    { 0x04, 0x04, 0x04, 0x04, 0x1f, 0x0e, 0x04, 0x00 },
    { 0x00, 0x10, 0x30, 0x7f, 0x30, 0x10, 0x00, 0x00 },
    { 0x00, 0x04, 0x06, 0x7f, 0x06, 0x04, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x1f, 0x00 },
    { 0x00, 0x24, 0x66, 0xff, 0x66, 0x24, 0x00, 0x00 },
    { 0x00, 0x04, 0x04, 0x0e, 0x0e, 0x1f, 0x1f, 0x00 },
    { 0x00, 0x1f, 0x1f, 0x0e, 0x0e, 0x04, 0x04, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00 },
    { 0x0a, 0x0a, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { 0x0a, 0x0a, 0x1f, 0x0a, 0x1f, 0x0a, 0x0a, 0x00 },
    { 0x04, 0x1e, 0x01, 0x0e, 0x10, 0x0f, 0x04, 0x00 },
    { 0x11, 0x09, 0x08, 0x04, 0x02, 0x12, 0x11, 0x00 },
    { 0x04, 0x0a, 0x04, 0x16, 0x0d, 0x09, 0x16, 0x00 },
    { 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { 0x0c, 0x02, 0x01, 0x01, 0x01, 0x02, 0x0c, 0x00 },
    { 0x03, 0x04, 0x08, 0x08, 0x08, 0x04, 0x03, 0x00 },
    { 0x00, 0x00, 0x09, 0x06, 0x09, 0x00, 0x00, 0x00 },
    { 0x00, 0x04, 0x04, 0x1f, 0x04, 0x04, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01 },
    { 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00 },
    { 0x10, 0x08, 0x08, 0x04, 0x02, 0x02, 0x01, 0x00 },
    { 0x0e, 0x11, 0x19, 0x15, 0x13, 0x11, 0x0e, 0x00 },
    { 0x04, 0x06, 0x04, 0x04, 0x04, 0x04, 0x1f, 0x00 },
    { 0x0e, 0x11, 0x10, 0x0c, 0x02, 0x11, 0x1f, 0x00 },
    { 0x0e, 0x11, 0x10, 0x0c, 0x10, 0x11, 0x0e, 0x00 },
    { 0x18, 0x14, 0x12, 0x11, 0x1f, 0x10, 0x10, 0x00 },
    { 0x1f, 0x01, 0x0f, 0x10, 0x10, 0x11, 0x0e, 0x00 },
    { 0x0c, 0x02, 0x01, 0x0f, 0x11, 0x11, 0x0e, 0x00 },
    { 0x1f, 0x11, 0x10, 0x08, 0x04, 0x04, 0x04, 0x00 },
    { 0x0e, 0x11, 0x11, 0x0e, 0x11, 0x11, 0x0e, 0x00 },
    { 0x0e, 0x11, 0x11, 0x1e, 0x10, 0x08, 0x06, 0x00 },
    { 0x00, 0x02, 0x02, 0x00, 0x00, 0x02, 0x02, 0x00 },
    { 0x00, 0x02, 0x02, 0x00, 0x00, 0x02, 0x02, 0x01 },
    { 0x08, 0x04, 0x02, 0x01, 0x02, 0x04, 0x08, 0x00 },
    { 0x00, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0x00, 0x00 },
    { 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x01, 0x00 },
    { 0x0e, 0x11, 0x10, 0x08, 0x04, 0x00, 0x04, 0x00 },
    { 0x1e, 0x21, 0x2d, 0x2d, 0x3d, 0x01, 0x1e, 0x00 },
    { 0x0e, 0x11, 0x1f, 0x11, 0x11, 0x11, 0x11, 0x00 },
    { 0x0f, 0x11, 0x0f, 0x11, 0x11, 0x11, 0x0f, 0x00 },
    { 0x0e, 0x11, 0x01, 0x01, 0x01, 0x11, 0x0e, 0x00 },
    { 0x0f, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0f, 0x00 },
    { 0x1f, 0x01, 0x07, 0x01, 0x01, 0x01, 0x1f, 0x00 },
    { 0x1f, 0x01, 0x07, 0x01, 0x01, 0x01, 0x01, 0x00 },
    { 0x1e, 0x01, 0x19, 0x11, 0x11, 0x11, 0x0e, 0x00 },
    { 0x11, 0x11, 0x1f, 0x11, 0x11, 0x11, 0x11, 0x00 },
    { 0x07, 0x02, 0x02, 0x02, 0x02, 0x02, 0x07, 0x00 },
    { 0x10, 0x10, 0x10, 0x10, 0x10, 0x11, 0x0e, 0x00 },
    { 0x11, 0x09, 0x07, 0x09, 0x11, 0x11, 0x11, 0x00 },
    { 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1f, 0x00 },
    { 0x11, 0x1b, 0x15, 0x11, 0x11, 0x11, 0x11, 0x00 },
    { 0x11, 0x13, 0x15, 0x19, 0x11, 0x11, 0x11, 0x00 },
    { 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00 },
    { 0x0f, 0x11, 0x0f, 0x01, 0x01, 0x01, 0x01, 0x00 },
    { 0x0e, 0x11, 0x11, 0x11, 0x11, 0x09, 0x16, 0x00 },
    { 0x0f, 0x11, 0x0f, 0x11, 0x11, 0x11, 0x11, 0x00 },
    { 0x1e, 0x01, 0x0e, 0x10, 0x10, 0x11, 0x0e, 0x00 },
    { 0x1f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00 },
    { 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00 },
    { 0x11, 0x11, 0x11, 0x11, 0x0a, 0x0a, 0x04, 0x00 },
    { 0x11, 0x11, 0x11, 0x11, 0x15, 0x1b, 0x11, 0x00 },
    { 0x11, 0x0a, 0x04, 0x0a, 0x11, 0x11, 0x11, 0x00 },
    { 0x11, 0x0a, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00 },
    { 0x1f, 0x10, 0x08, 0x04, 0x02, 0x01, 0x1f, 0x00 },
    { 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x00 },
    { 0x01, 0x02, 0x02, 0x04, 0x08, 0x08, 0x10, 0x00 },
    { 0x07, 0x04, 0x04, 0x04, 0x04, 0x04, 0x07, 0x00 },
    { 0x04, 0x0a, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f },
    { 0x01, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0x0e, 0x10, 0x1e, 0x11, 0x1e, 0x00 },
    { 0x01, 0x01, 0x0d, 0x13, 0x11, 0x11, 0x0f, 0x00 },
    { 0x00, 0x00, 0x0e, 0x11, 0x01, 0x11, 0x0e, 0x00 },
    { 0x10, 0x10, 0x16, 0x19, 0x11, 0x11, 0x1e, 0x00 },
    { 0x00, 0x00, 0x0e, 0x11, 0x1f, 0x01, 0x1e, 0x00 },
    { 0x0c, 0x02, 0x0f, 0x02, 0x02, 0x02, 0x02, 0x00 },
    { 0x00, 0x00, 0x1e, 0x11, 0x11, 0x1e, 0x10, 0x0f },
    { 0x01, 0x01, 0x0d, 0x13, 0x11, 0x11, 0x11, 0x00 },
    { 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00 },
    { 0x10, 0x00, 0x10, 0x10, 0x10, 0x11, 0x11, 0x0e },
    { 0x01, 0x01, 0x09, 0x05, 0x03, 0x05, 0x09, 0x00 },
    { 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x00 },
    { 0x00, 0x00, 0x0b, 0x15, 0x15, 0x11, 0x11, 0x00 },
    { 0x00, 0x00, 0x0f, 0x11, 0x11, 0x11, 0x11, 0x00 },
    { 0x00, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e, 0x00 },
    { 0x00, 0x00, 0x0d, 0x13, 0x11, 0x0f, 0x01, 0x01 },
    { 0x00, 0x00, 0x16, 0x19, 0x11, 0x1e, 0x10, 0x10 },
    { 0x00, 0x00, 0x0d, 0x13, 0x01, 0x01, 0x01, 0x00 },
    { 0x00, 0x00, 0x1e, 0x01, 0x0e, 0x10, 0x0f, 0x00 },
    { 0x02, 0x02, 0x07, 0x02, 0x02, 0x02, 0x04, 0x00 },
    { 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x1e, 0x00 },
    { 0x00, 0x00, 0x11, 0x11, 0x11, 0x0a, 0x04, 0x00 },
    { 0x00, 0x00, 0x11, 0x11, 0x15, 0x15, 0x1e, 0x00 },
    { 0x00, 0x00, 0x11, 0x0a, 0x04, 0x0a, 0x11, 0x00 },
    { 0x00, 0x00, 0x11, 0x11, 0x11, 0x1e, 0x10, 0x0f },
    { 0x00, 0x00, 0x1f, 0x08, 0x04, 0x02, 0x1f, 0x00 },
    { 0x0c, 0x02, 0x02, 0x01, 0x02, 0x02, 0x0c, 0x00 },
    { 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00 },
    { 0x03, 0x04, 0x04, 0x08, 0x04, 0x04, 0x03, 0x00 },
    { 0x26, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0x04, 0x0a, 0x11, 0x11, 0x1f, 0x00 },
    { 0x0e, 0x11, 0x01, 0x01, 0x11, 0x0e, 0x10, 0x0c },
    { 0x0a, 0x00, 0x11, 0x11, 0x11, 0x11, 0x1e, 0x00 },
    { 0x18, 0x00, 0x0e, 0x11, 0x1f, 0x01, 0x1e, 0x00 },
    { 0x0e, 0x11, 0x0e, 0x10, 0x1e, 0x11, 0x1e, 0x00 },
    { 0x0a, 0x00, 0x0e, 0x10, 0x1e, 0x11, 0x1e, 0x00 },
    { 0x03, 0x00, 0x0e, 0x10, 0x1e, 0x11, 0x1e, 0x00 },
    { 0x04, 0x00, 0x0e, 0x10, 0x1e, 0x11, 0x1e, 0x00 },
    { 0x00, 0x0e, 0x11, 0x01, 0x11, 0x0e, 0x10, 0x0c },
    { 0x0e, 0x11, 0x0e, 0x11, 0x1f, 0x01, 0x1e, 0x00 },
    { 0x0a, 0x00, 0x0e, 0x11, 0x1f, 0x01, 0x1e, 0x00 },
    { 0x03, 0x00, 0x0e, 0x11, 0x1f, 0x01, 0x1e, 0x00 },
    { 0x05, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00 },
    { 0x0e, 0x11, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00 },
    { 0x03, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00 },
    { 0x11, 0x0e, 0x11, 0x1f, 0x11, 0x11, 0x11, 0x00 },
    { 0x04, 0x00, 0x0e, 0x11, 0x1f, 0x11, 0x11, 0x00 },
    { 0x18, 0x00, 0x1f, 0x01, 0x07, 0x01, 0x1f, 0x00 },
    { 0x00, 0x00, 0x36, 0x48, 0x7e, 0x09, 0x7e, 0x00 },
    { 0x7e, 0x09, 0x3f, 0x09, 0x09, 0x09, 0x79, 0x00 },
    { 0x0e, 0x11, 0x0e, 0x11, 0x11, 0x11, 0x0e, 0x00 },
    { 0x0a, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e, 0x00 },
    { 0x03, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e, 0x00 },
    { 0x0e, 0x11, 0x00, 0x11, 0x11, 0x11, 0x1e, 0x00 },
    { 0x03, 0x00, 0x11, 0x11, 0x11, 0x11, 0x1e, 0x00 },
    { 0x0a, 0x00, 0x11, 0x11, 0x11, 0x1e, 0x10, 0x0f },
    { 0x11, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00 },
    { 0x11, 0x00, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00 },
    { 0x00, 0x00, 0x0e, 0x19, 0x15, 0x13, 0x0e, 0x04 },
    { 0x0c, 0x12, 0x02, 0x0f, 0x02, 0x02, 0x1f, 0x00 },
    { 0x11, 0x0a, 0x04, 0x1f, 0x04, 0x1f, 0x04, 0x00 },
    { 0x20, 0x48, 0x52, 0x53, 0x53, 0x52, 0x48, 0x20 },
    { 0x18, 0x24, 0x5a, 0x5a, 0x5a, 0x24, 0x18, 0x00 },
    { 0x18, 0x00, 0x0e, 0x10, 0x1e, 0x11, 0x1e, 0x00 },
    { 0x03, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00 },
    { 0x18, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e, 0x00 },
    { 0x18, 0x00, 0x11, 0x11, 0x11, 0x11, 0x1e, 0x00 },
    { 0x1f, 0x00, 0x0f, 0x11, 0x11, 0x11, 0x11, 0x00 },
    { 0x1f, 0x00, 0x11, 0x13, 0x15, 0x19, 0x11, 0x00 },
    { 0x0e, 0x10, 0x1f, 0x1e, 0x00, 0x1f, 0x00, 0x00 },
    { 0x0e, 0x11, 0x11, 0x0e, 0x00, 0x1f, 0x00, 0x00 },
    { 0x04, 0x00, 0x04, 0x02, 0x01, 0x11, 0x0e, 0x00 },
    { 0x1c, 0x22, 0x5d, 0x45, 0x5d, 0x22, 0x1c, 0x00 },
    { 0x1c, 0x2a, 0x55, 0x4d, 0x55, 0x22, 0x1c, 0x00 },
    { 0x11, 0x09, 0x08, 0x24, 0x42, 0x22, 0x71, 0x00 },
    { 0x11, 0x09, 0x08, 0x04, 0x52, 0x72, 0x41, 0x00 },
    { 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00 },
    { 0x00, 0x14, 0x0a, 0x05, 0x0a, 0x14, 0x00, 0x00 },
    { 0x00, 0x05, 0x0a, 0x14, 0x0a, 0x05, 0x00, 0x00 },
    { 0x44, 0x11, 0x44, 0x11, 0x44, 0x11, 0x44, 0x11 },
    { 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55 },
    { 0xdb, 0xee, 0xdb, 0x77, 0xdb, 0xee, 0xdb, 0x77 },
    { 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },
    { 0x18, 0x18, 0x18, 0x18, 0x1f, 0x18, 0x18, 0x18 },
    { 0x18, 0x18, 0x1f, 0x18, 0x1f, 0x18, 0x18, 0x18 },
    { 0x6c, 0x6c, 0x6c, 0x6c, 0x6f, 0x6c, 0x6c, 0x6c },
    { 0x00, 0x00, 0x00, 0x00, 0x7f, 0x6c, 0x6c, 0x6c },
    { 0x00, 0x00, 0x1f, 0x18, 0x1f, 0x18, 0x18, 0x18 },
    { 0x6c, 0x6c, 0x6f, 0x60, 0x6f, 0x6c, 0x6c, 0x6c },
    { 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c },
    { 0x00, 0x00, 0x7f, 0x60, 0x6f, 0x6c, 0x6c, 0x6c },
    { 0x6c, 0x6c, 0x6f, 0x60, 0x7f, 0x00, 0x00, 0x00 },
    { 0x6c, 0x6c, 0x6c, 0x6c, 0x7f, 0x00, 0x00, 0x00 },
    { 0x18, 0x18, 0x1f, 0x18, 0x1f, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x1f, 0x18, 0x18, 0x18 },
    { 0x18, 0x18, 0x18, 0x18, 0xf8, 0x00, 0x00, 0x00 },
    { 0x18, 0x18, 0x18, 0x18, 0xff, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0xff, 0x18, 0x18, 0x18 },
    { 0x18, 0x18, 0x18, 0x18, 0xf8, 0x18, 0x18, 0x18 },
    { 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00 },
    { 0x18, 0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18 },
    { 0x18, 0x18, 0xf8, 0x18, 0xf8, 0x18, 0x18, 0x18 },
    { 0x6c, 0x6c, 0x6c, 0x6c, 0xec, 0x6c, 0x6c, 0x6c },
    { 0x6c, 0x6c, 0xec, 0x0c, 0xfc, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0xfc, 0x0c, 0xec, 0x6c, 0x6c, 0x6c },
    { 0x6c, 0x6c, 0xef, 0x00, 0xff, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0xff, 0x00, 0xef, 0x6c, 0x6c, 0x6c },
    { 0x6c, 0x6c, 0xec, 0x0c, 0xec, 0x6c, 0x6c, 0x6c },
    { 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00 },
    { 0x6c, 0x6c, 0xef, 0x00, 0xef, 0x6c, 0x6c, 0x6c },
    { 0x18, 0x18, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00 },
    { 0x6c, 0x6c, 0x6c, 0x6c, 0xff, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0xff, 0x00, 0xff, 0x18, 0x18, 0x18 },
    { 0x00, 0x00, 0x00, 0x00, 0xff, 0x6c, 0x6c, 0x6c },
    { 0x6c, 0x6c, 0x6c, 0x6c, 0xfc, 0x00, 0x00, 0x00 },
    { 0x18, 0x18, 0xf8, 0x18, 0xf8, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0xf8, 0x18, 0xf8, 0x18, 0x18, 0x18 },
    { 0x00, 0x00, 0x00, 0x00, 0xfc, 0x6c, 0x6c, 0x6c },
    { 0x6c, 0x6c, 0x6c, 0x6c, 0xff, 0x6c, 0x6c, 0x6c },
    { 0x18, 0x18, 0xff, 0x18, 0xff, 0x18, 0x18, 0x18 },
    { 0x18, 0x18, 0x18, 0x18, 0x1f, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0xf8, 0x18, 0x18, 0x18 },
    { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff },
    { 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff },
    { 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f },
    { 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0 },
    { 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 },
    { 0x00, 0x00, 0x16, 0x09, 0x09, 0x09, 0x16, 0x00 },
    { 0x06, 0x09, 0x05, 0x09, 0x11, 0x11, 0x0f, 0x01 },
    { 0x1f, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00 },
    { 0x00, 0x00, 0x1f, 0x0a, 0x0a, 0x0a, 0x0a, 0x00 },
    { 0x1f, 0x01, 0x02, 0x04, 0x02, 0x01, 0x1f, 0x00 },
    { 0x00, 0x00, 0x3e, 0x11, 0x11, 0x11, 0x0e, 0x00 },
    { 0x00, 0x11, 0x11, 0x11, 0x11, 0x0f, 0x01, 0x00 },
    { 0x00, 0x00, 0x1f, 0x04, 0x04, 0x04, 0x08, 0x00 },
    { 0x04, 0x0e, 0x15, 0x15, 0x15, 0x0e, 0x04, 0x00 },
    { 0x0e, 0x11, 0x11, 0x1f, 0x11, 0x11, 0x0e, 0x00 },
    { 0x0e, 0x11, 0x11, 0x11, 0x11, 0x0a, 0x1b, 0x00 },
    { 0x0c, 0x02, 0x04, 0x0a, 0x11, 0x11, 0x0e, 0x00 },
    { 0x00, 0x00, 0x36, 0x49, 0x49, 0x36, 0x00, 0x00 },
    { 0x00, 0x08, 0x15, 0x15, 0x15, 0x0e, 0x04, 0x00 },
    { 0x00, 0x00, 0x1e, 0x01, 0x06, 0x01, 0x1e, 0x00 },
    { 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00 },
    { 0x00, 0x3f, 0x00, 0x3f, 0x00, 0x3f, 0x00, 0x00 },
    { 0x04, 0x04, 0x1f, 0x04, 0x04, 0x00, 0x1f, 0x00 },
    { 0x02, 0x04, 0x08, 0x04, 0x02, 0x00, 0x1f, 0x00 },
    { 0x08, 0x04, 0x02, 0x04, 0x08, 0x00, 0x1f, 0x00 },
    { 0x30, 0x48, 0x48, 0x08, 0x08, 0x08, 0x08, 0x08 },
    { 0x08, 0x08, 0x08, 0x08, 0x08, 0x09, 0x09, 0x06 },
    { 0x00, 0x04, 0x00, 0x1f, 0x00, 0x04, 0x00, 0x00 },
    { 0x00, 0x26, 0x19, 0x00, 0x26, 0x19, 0x00, 0x00 },
    { 0x06, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00 },
    { 0x08, 0x1c, 0x7f, 0x7f, 0x3e, 0x36, 0x22, 0x00 },
    { 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00 },
    { 0x38, 0x08, 0x08, 0x08, 0x09, 0x0a, 0x0c, 0x00 },
    { 0x00, 0x07, 0x09, 0x09, 0x09, 0x00, 0x00, 0x00 },
    { 0x06, 0x09, 0x04, 0x02, 0x0f, 0x00, 0x00, 0x00 },
    { 0x00, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
};

#endif