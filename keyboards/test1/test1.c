#include "quantum.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {  0,  1,  2,  3,  4 },
  {  5,  6,  7,  8,  9 },
  { 10, 11, 12, 13, 14 },
  { 15, 16, 17, 18, 19 },
  { 20, 21, 22, 23, 24 }
}, {
  // LED Index to Physical Position
  {   0,   0 }, {  56,  0 }, { 112,   0 }, { 168,   0 }, { 224,   0 },
  {   0,  16 }, {  56, 16 }, { 112,  16 }, { 168,  16 }, { 224,  16 },
  {   0,  32 }, {  56, 32 }, { 112,  32 }, { 168,  32 }, { 224,  32 },
  {   0,  48 }, {  56, 48 }, { 112,  48 }, { 168,  48 }, { 224,  48 },
  {   0,  64 }, {  56, 64 }, { 112,  64 }, { 168,  64 }, { 224,  64 }
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 
  4, 4, 4, 4, 4, 
  4, 4, 4, 4, 4, 
  4, 4, 4, 4, 4, 
  4, 4, 4, 4, 4
} };