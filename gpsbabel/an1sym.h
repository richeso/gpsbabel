/*









                       THIS FILE IS AUTOMATICALLY GENERATED


                       Please change make-an1sym.pl and
                       regenerate it rather than changing
                       this file directly.























*/

/*
    Read DeLorme drawing files (.an1) - supplemental (included by an1.c)

    Copyright (C) 2005 Ron Parker and Robert Lipe.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111 USA

 */

struct defguid {
  GUID guid;
  const char *name;
} default_guids[] = {
  { {0xb610bc70,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Hiker"
  },
  { {0xb610bc71,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Canoe"
  },
  { {0xb610bc72,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Kayak"
  },
  { {0xb610bc73,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Bike"
  },
  { {0xb610bc74,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Four wheeler"
  },
  { {0xb610bc75,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Jeep"
  },
  { {0xb610bc76,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Snowmobile"
  },
  { {0xb610bc78,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Rec Vehicle"
  },
  { {0xb610bc79,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Fire"
  },
  { {0xb610bc7a,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Fishing"
  },
  { {0xb610bc7b,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Tree"
  },
  { {0xb610bc7c,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Pine Tree"
  },
  { {0xb610bc7d,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Birch"
  },
  { {0xb610bc7e,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Deer"
  },
  { {0xb610bc7f,{0x377e, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Moose"
  },
  { {0x99d8c163,{0x7622, 0x11d5, 0xe8ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Mud"
  },
  { {0x012dfac2,{0xade8, 0x11d5, 0x0fb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Tractor"
  },
  { {0x012dfac3,{0xade8, 0x11d5, 0x0fb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Combine Harvester"
  },
  { {0x012dfac7,{0xade8, 0x11d5, 0x0fb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Front-End Loader"
  },
  { {0xfd163780,{0xb10a, 0x11d5, 0x11b3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Power Shovel"
  },
  { {0xfd163781,{0xb10a, 0x11d5, 0x11b3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Road Grader"
  },
  { {0xfd163784,{0xb10a, 0x11d5, 0x11b3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Road Roller"
  },
  { {0xfd163787,{0xb10a, 0x11d5, 0x11b3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Dump Truck"
  },
  { {0x5673d712,{0xb28d, 0x11d5, 0x13b3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Skid-Steer Loader"
  },
  { {0xb86045ac,{0x390f, 0x420f, 0x91a7}, {0x76, 0x2f, 0x48, 0xea, 0xe2, 0xd7}},
    "Highway Sign"
  },
  { {0x1e129e95,{0x13b6, 0x48d8, 0x3fa3}, {0x9c, 0xc8, 0x20, 0x8e, 0x1d, 0x9d}},
    "Orange Cone"
  },
  { {0xadee7d54,{0xf7c9, 0x4ab6, 0xfb93}, {0x99, 0xc3, 0xbc, 0x9d, 0x15, 0x47}},
    "Barricade"
  },
  { {0xa170000f,{0x8bd8, 0x4574, 0x58ac}, {0x55, 0x41, 0x67, 0xef, 0x64, 0x62}},
    "Flagger"
  },
  { {0xa425f90e,{0x6ab6, 0x4ca9, 0x8997}, {0xbf, 0xca, 0xe0, 0xc2, 0x2b, 0x53}},
    "Construction Sign"
  },
  { {0x0805b240,{0x6b26, 0x4300, 0xebb1}, {0xea, 0x9b, 0xcf, 0x68, 0xc6, 0x18}},
    "Construction Flasher"
  },
  { {0x56721a6c,{0x8e77, 0x4b62, 0x09aa}, {0xce, 0xdc, 0x69, 0x4a, 0x16, 0x05}},
    "Transit"
  },
  { {0x623e1ee9,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Arrow Left"
  },
  { {0x623e1eea,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Arrow Right"
  },
  { {0x623e1eeb,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Arrow Up"
  },
  { {0x623e1eec,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Arrow Down"
  },
  { {0x623e1eed,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Arrow Up Left"
  },
  { {0x623e1eee,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Arrow Up Right"
  },
  { {0x623e1eef,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Arrow Down Left"
  },
  { {0x623e1ef0,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Arrow Down Right"
  },
  { {0x83f91421,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Arrow Left"
  },
  { {0x83f91422,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Arrow Right"
  },
  { {0x83f91423,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Arrow Up"
  },
  { {0x83f91424,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Arrow Down"
  },
  { {0x83f91425,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Arrow Up Left"
  },
  { {0x83f91426,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Arrow Up Right"
  },
  { {0x83f91427,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Arrow Down Left"
  },
  { {0x83f91428,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Arrow Down Right"
  },
  { {0x83f91429,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Large Arrow Left"
  },
  { {0x83f9142a,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Large Arrow Right"
  },
  { {0x83f9142b,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Large Arrow Up"
  },
  { {0x83f9142c,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Large Arrow Down"
  },
  { {0x83f9142d,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Large Arrow Down Right"
  },
  { {0x83f9142e,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Large Arrow Down Left"
  },
  { {0x83f9142f,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Large Arrow Up Left"
  },
  { {0x83f91430,{0x3772, 0x11d6, 0xaeb3}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Large Arrow Up Right"
  },
  { {0x8ff0aad1,{0xc53d, 0x4998, 0x7ebd}, {0x06, 0x60, 0x25, 0x6c, 0x4f, 0x6d}},
    "Accommodation"
  },
  { {0xaf7bf199,{0x6a8b, 0x49fe, 0xae92}, {0xa3, 0x09, 0x7b, 0xb8, 0x81, 0x6a}},
    "Australia"
  },
  { {0x6bbcc9d1,{0x6a19, 0x4c7b, 0xc6a2}, {0x3e, 0x17, 0x02, 0xd6, 0xee, 0x3a}},
    "Blue Dome Cross"
  },
  { {0xfff920fe,{0xd780, 0x49d4, 0x1bad}, {0x55, 0x2e, 0xc7, 0xdf, 0xa2, 0xaa}},
    "Green Dome Cross"
  },
  { {0x57e75924,{0xd6fa, 0x4666, 0x84bf}, {0x5b, 0x76, 0xa1, 0xd0, 0x14, 0x5f}},
    "Business"
  },
  { {0xb09ef4a7,{0x95e4, 0x4e5e, 0x5e84}, {0xbe, 0x2b, 0x86, 0xdd, 0x50, 0x65}},
    "Airplane"
  },
  { {0xf2833c22,{0x3592, 0x4a8a, 0x5693}, {0xee, 0x6c, 0x83, 0xb6, 0x3c, 0x19}},
    "Amusement Recreation"
  },
  { {0x6f0317d6,{0x7fa3, 0x4dcc, 0x6187}, {0x7e, 0xca, 0xcb, 0x65, 0x49, 0x12}},
    "Green Square"
  },
  { {0x18a6d3c0,{0x45cb, 0x4d19, 0xf5b9}, {0xc7, 0x9c, 0xbf, 0x8f, 0x6d, 0x46}},
    "Red Triangle"
  },
  { {0x86e68ea7,{0xb9ab, 0x4bc8, 0xa1bf}, {0xc1, 0x22, 0x13, 0x97, 0x95, 0xe8}},
    "Red Triangle and Green Square"
  },
  { {0x6afd74bf,{0x0ea5, 0x4680, 0xcd88}, {0x15, 0x87, 0x2f, 0x6c, 0xd2, 0xd8}},
    "City 4"
  },
  { {0x49dfeb74,{0xbb09, 0x4df1, 0x5687}, {0xd8, 0xa0, 0xff, 0x36, 0x89, 0x3d}},
    "White Square"
  },
  { {0x3eed62c6,{0xdab9, 0x42b0, 0xe4a3}, {0xd2, 0xf1, 0x7d, 0x54, 0xbf, 0x77}},
    "White Triangle"
  },
  { {0x6b521940,{0x4492, 0x4c48, 0x58a0}, {0xfc, 0xd1, 0x1f, 0x5e, 0x0c, 0xea}},
    "Red Black Diamond Flag"
  },
  { {0xbb8ebaa3,{0xac59, 0x4411, 0x9c94}, {0x30, 0xd4, 0xe1, 0x21, 0x25, 0x46}},
    "Yellow Diamond Flag"
  },
  { {0x8e118862,{0xf6aa, 0x4b34, 0x2b82}, {0x8f, 0x3b, 0x5a, 0x2b, 0x59, 0xeb}},
    "Small Pink Square"
  },
  { {0xd0ef64c2,{0xe319, 0x4876, 0x1b85}, {0x0e, 0x90, 0x50, 0x89, 0xb7, 0xc5}},
    "Store"
  },
  { {0xa22b08fb,{0x6193, 0x4f5c, 0xdaa4}, {0xfa, 0xdf, 0xa7, 0x6e, 0x23, 0xe1}},
    "Camping"
  },
  { {0x27f57c69,{0x575b, 0x4b56, 0x288c}, {0xe8, 0xe1, 0xc7, 0x05, 0x1f, 0x1f}},
    "Green Diamond Flag"
  },
  { {0xe07abb38,{0x219f, 0x4b52, 0x868b}, {0x45, 0x0f, 0xbc, 0xc1, 0x4f, 0x6a}},
    "Red Diamond Flag"
  },
  { {0x3a124ac9,{0x3973, 0x4e27, 0x4b82}, {0xa6, 0x3a, 0x94, 0x5c, 0xf8, 0xb3}},
    "Red Green Diamond Flag"
  },
  { {0x64ed669b,{0x0db8, 0x4ec9, 0xd181}, {0x98, 0x50, 0xb3, 0x8b, 0x2f, 0x2e}},
    "White Globe"
  },
  { {0x3cb10adc,{0xb090, 0x4960, 0x9f8a}, {0xec, 0xaf, 0x6c, 0xd7, 0xaa, 0x8b}},
    "Yellow Globe"
  },
  { {0x2779347d,{0x17d4, 0x4021, 0xa6a8}, {0x51, 0x9a, 0xb6, 0xf8, 0x21, 0xff}},
    ""
  },
  { {0x3ad63f7b,{0x4339, 0x427d, 0x5797}, {0xce, 0xa9, 0x96, 0x33, 0x8b, 0x3c}},
    "Black Cross"
  },
  { {0x3e89481e,{0x35ff, 0x48b6, 0xc7ae}, {0xb0, 0x75, 0xf6, 0x43, 0xc4, 0xc7}},
    "Church"
  },
  { {0x68622c10,{0x79b6, 0x466d, 0xa8a3}, {0x27, 0xc6, 0x25, 0x34, 0xfa, 0xa9}},
    "Small Dark Green Square"
  },
  { {0x42c6a873,{0x2d0c, 0x46e7, 0x9989}, {0xdd, 0x86, 0x01, 0x6e, 0xa4, 0xc9}},
    "Small Black Square"
  },
  { {0x50e3b06e,{0xbe81, 0x4b2c, 0x1f92}, {0x80, 0xa5, 0x72, 0x9b, 0x33, 0x05}},
    "Danger"
  },
  { {0x369d0b22,{0xed07, 0x421f, 0x8780}, {0x33, 0x0e, 0xbd, 0x27, 0x4f, 0x3c}},
    "Construction Business"
  },
  { {0x10603b6c,{0xb02e, 0x49ee, 0x60b9}, {0xed, 0x7e, 0x31, 0x16, 0x27, 0x89}},
    "Airport"
  },
  { {0x8328aab7,{0xfe04, 0x46dc, 0x7bbf}, {0x29, 0x34, 0x30, 0xd3, 0x4d, 0xeb}},
    "City 5"
  },
  { {0x96411287,{0xda33, 0x40e3, 0xaa9c}, {0x75, 0x83, 0x78, 0x2d, 0xa6, 0xf3}},
    "USA"
  },
  { {0xb2f98627,{0x1211, 0x40e8, 0xb287}, {0x6d, 0x66, 0xfd, 0x15, 0x1e, 0xd4}},
    "Diver Down"
  },
  { {0x3fce26d0,{0xfec6, 0x4f8b, 0x55a2}, {0x89, 0x3a, 0x8e, 0x59, 0x08, 0x0a}},
    "Light Yellow Square"
  },
  { {0xb4b68597,{0x1aed, 0x4918, 0xd492}, {0x1f, 0xd1, 0x5e, 0xf2, 0x55, 0xc1}},
    "Education Technology"
  },
  { {0x35d2e6a8,{0xda88, 0x4edb, 0x4b80}, {0x2b, 0x1b, 0xcf, 0xc0, 0xd4, 0x6d}},
    "Computer"
  },
  { {0x4ddc4e96,{0x8d19, 0x4079, 0x4488}, {0xc0, 0x8f, 0x0f, 0x8e, 0xb5, 0xd7}},
    "Amusement Recreation Red"
  },
  { {0x79f58929,{0x46c6, 0x4337, 0xc0b1}, {0xf0, 0x09, 0x55, 0xbb, 0x1f, 0xc3}},
    "Telephone Red"
  },
  { {0x0083b377,{0xfb80, 0x4a83, 0x3593}, {0x56, 0xe5, 0xfe, 0xc4, 0xcd, 0x43}},
    "Exit"
  },
  { {0x0c232891,{0xab4d, 0x440e, 0x7083}, {0x05, 0x63, 0x3a, 0xf5, 0x66, 0x11}},
    "Exit with Services"
  },
  { {0xaf63e7c2,{0x03fa, 0x418e, 0xc68b}, {0x02, 0xb8, 0xf5, 0x61, 0xb6, 0x61}},
    "Pizza"
  },
  { {0xd419c693,{0x39e6, 0x43db, 0xa1b8}, {0x7f, 0xcc, 0x2c, 0xb8, 0x51, 0x4a}},
    "Financial Services"
  },
  { {0x70740a81,{0xe4ca, 0x4ac2, 0xa498}, {0x21, 0xc8, 0x5b, 0xc0, 0xb7, 0xae}},
    "City 3"
  },
  { {0x9a582ff6,{0x34c4, 0x41c6, 0xf0a3}, {0x99, 0x69, 0x9d, 0xbe, 0x2e, 0x08}},
    "Food Store"
  },
  { {0x3cd31689,{0x2f8f, 0x4fb0, 0xcb88}, {0x34, 0x84, 0xfc, 0x8b, 0x03, 0xe4}},
    ""
  },
  { {0x952557a6,{0xe29e, 0x4512, 0x1184}, {0x1a, 0x3c, 0x9c, 0xd4, 0x83, 0x7d}},
    ""
  },
  { {0x03dc278c,{0xe8ff, 0x46ac, 0x3daa}, {0x9f, 0xe9, 0x1e, 0xcf, 0x10, 0x35}},
    "Driving Range"
  },
  { {0xacd28bab,{0x0ec0, 0x4393, 0xaf8b}, {0xbb, 0x5e, 0x74, 0xb3, 0x87, 0x12}},
    "Golf Municipal"
  },
  { {0x984e7139,{0xeab8, 0x49f6, 0x55a0}, {0x8d, 0x51, 0xe6, 0xdd, 0xcc, 0xf4}},
    "Golf Private"
  },
  { {0xec5828ab,{0x2a9d, 0x48f8, 0xd79b}, {0xc9, 0xc3, 0x30, 0x8e, 0xe4, 0xea}},
    "Golf Public"
  },
  { {0xb0120d99,{0x683a, 0x4ecc, 0x129a}, {0x29, 0x94, 0x1f, 0x04, 0xae, 0x10}},
    "Golf Resort"
  },
  { {0x2ce7685a,{0x6eaf, 0x4061, 0x29a5}, {0x87, 0x5e, 0xfa, 0x41, 0x75, 0x1a}},
    "Golf Semi Private"
  },
  { {0x10397049,{0x9fc9, 0x4380, 0x5680}, {0x81, 0xd9, 0xe7, 0x43, 0x1f, 0x11}},
    "Medical Service"
  },
  { {0x2fc28df6,{0xe806, 0x436e, 0xe0b9}, {0x46, 0x1d, 0xeb, 0xad, 0x56, 0x60}},
    "Home Furnishings"
  },
  { {0x910313db,{0xafce, 0x4019, 0x1aa4}, {0xe6, 0x2c, 0xe6, 0xd1, 0xfd, 0xf7}},
    "Industrial"
  },
  { {0x9e442c6e,{0xe12a, 0x4407, 0xd68a}, {0x1c, 0x5e, 0x19, 0xe7, 0xfe, 0x01}},
    ""
  },
  { {0x37e2fe4a,{0xcd71, 0x413f, 0x0cad}, {0x81, 0xc5, 0x2c, 0xf4, 0x78, 0x79}},
    ""
  },
  { {0x3c756e09,{0xb2dc, 0x48a6, 0x04a9}, {0x20, 0xb7, 0xc9, 0x9d, 0x14, 0x51}},
    ""
  },
  { {0xa1245b1c,{0x156a, 0x48fc, 0x6f96}, {0xa5, 0xa3, 0x22, 0x54, 0x13, 0x97}},
    "Manufacturing"
  },
  { {0x5bddbd7a,{0xf3cb, 0x454c, 0x06af}, {0x46, 0x1a, 0x68, 0xea, 0x60, 0x1a}},
    "Note"
  },
  { {0xcb6777e1,{0xe0e0, 0x45ce, 0x309f}, {0x8d, 0x61, 0x7a, 0xd9, 0x89, 0xf5}},
    "City"
  },
  { {0xbc168c08,{0x2b7f, 0x44be, 0x3883}, {0x81, 0x31, 0x4a, 0x09, 0xf5, 0x78}},
    "Air Base"
  },
  { {0xa8857b0f,{0xfc3b, 0x4cd1, 0x9e91}, {0xf5, 0x3b, 0x21, 0xa8, 0x3b, 0xb9}},
    "Battlefield"
  },
  { {0x06db55c1,{0xf687, 0x4840, 0x7c80}, {0x95, 0x58, 0x77, 0x8e, 0x5a, 0xdd}},
    "Mining"
  },
  { {0xcc61b277,{0xa48c, 0x445a, 0xd9b9}, {0xe5, 0x91, 0x36, 0x18, 0x4e, 0x09}},
    "Mountain"
  },
  { {0xfde13186,{0xb6cb, 0x4374, 0xc880}, {0x56, 0x99, 0xeb, 0x51, 0x68, 0x87}},
    "Capital"
  },
  { {0xb14d90d1,{0xd943, 0x40ff, 0x9fb7}, {0x9b, 0x92, 0xd1, 0x23, 0xca, 0xef}},
    "Route"
  },
  { {0x7eabc63f,{0x05d0, 0x4465, 0xb1b0}, {0x61, 0x2a, 0xf7, 0x4d, 0x0f, 0x4e}},
    "Overnight"
  },
  { {0xac39d8b9,{0xfcdc, 0x4b50, 0x9ca6}, {0xea, 0x6c, 0x4b, 0xb5, 0x96, 0x0f}},
    "Route End Active"
  },
  { {0xe1b9d86b,{0x95e6, 0x4bd8, 0xd880}, {0x7b, 0x6c, 0xc6, 0xd2, 0x00, 0x34}},
    "Route End Inactive"
  },
  { {0x98712315,{0x7e1e, 0x4024, 0x8392}, {0xe3, 0xb8, 0x5a, 0x51, 0x45, 0xb4}},
    "Fuel Stop"
  },
  { {0xe5ea5b38,{0x7b80, 0x4b42, 0x0aba}, {0x3d, 0x38, 0xf0, 0xe1, 0x17, 0x9a}},
    "Route Start Active"
  },
  { {0x18fd0d49,{0x0a29, 0x433a, 0xd584}, {0xe5, 0xb7, 0x5b, 0xe8, 0x25, 0xbc}},
    "Route Start Inactive"
  },
  { {0x2f52144b,{0x903e, 0x4dd9, 0x79af}, {0xe1, 0x66, 0x9b, 0xfc, 0xa9, 0xc1}},
    "Route Stop Active"
  },
  { {0xfaf8d826,{0xd27d, 0x4316, 0x0e92}, {0xce, 0x8d, 0x85, 0x93, 0x4c, 0xf5}},
    "Route Stop Inactive"
  },
  { {0xff44cae2,{0x707c, 0x4a1c, 0x43af}, {0x8b, 0xb6, 0xb1, 0x19, 0x9c, 0xf2}},
    "Route Via"
  },
  { {0x5a50d59b,{0xc15b, 0x49c4, 0x9faa}, {0xc4, 0x1c, 0x4f, 0xe2, 0x95, 0x2a}},
    "Radiation Green"
  },
  { {0x19556023,{0xb1e5, 0x4c9c, 0x49ba}, {0x08, 0x52, 0xa1, 0x24, 0x3d, 0x9f}},
    "Radiation Red"
  },
  { {0xa54be251,{0x6688, 0x49fb, 0x60b3}, {0x89, 0x56, 0x37, 0x68, 0xc5, 0xb0}},
    "Electricity"
  },
  { {0xd793ff0c,{0xfbe0, 0x4383, 0x3183}, {0xcf, 0x4f, 0x04, 0xb7, 0xee, 0x0a}},
    "Personal Furnishings"
  },
  { {0x00f90733,{0x7ab5, 0x42cf, 0x468c}, {0xbf, 0x91, 0x27, 0xd3, 0xa8, 0x9c}},
    "Personal Services"
  },
  { {0xea677f24,{0xbbe8, 0x4238, 0xee9c}, {0x6c, 0x0a, 0xec, 0x0e, 0x34, 0xf4}},
    "Telephone Black"
  },
  { {0x2d8a05b5,{0x8baf, 0x4f28, 0xf58b}, {0xfb, 0x7f, 0x37, 0x34, 0x28, 0xa7}},
    "Government Light"
  },
  { {0x40c64dfc,{0xc2d0, 0x4b0e, 0x6582}, {0x3f, 0x26, 0x9c, 0xcb, 0x6f, 0x1d}},
    "Airport Red Square"
  },
  { {0xf27adb5d,{0x3629, 0x44c7, 0x95a2}, {0x25, 0x2c, 0x95, 0x24, 0x98, 0x2f}},
    "Propeller Aircraft"
  },
  { {0x5a718e13,{0x3547, 0x42c5, 0x6d9d}, {0xb2, 0x82, 0xa5, 0x53, 0xbd, 0x3a}},
    "Jet Aircraft"
  },
  { {0x0a471039,{0x2dfe, 0x447e, 0x54be}, {0xa3, 0x93, 0xae, 0x9a, 0xdd, 0xac}},
    "Government"
  },
  { {0x4a59da2f,{0xe1c3, 0x42c3, 0x6ca1}, {0x06, 0xb9, 0x14, 0x1b, 0x89, 0x99}},
    "USA Regional"
  },
  { {0xf16500a9,{0xa845, 0x4293, 0xae89}, {0x5c, 0x29, 0xbb, 0x0d, 0x06, 0xf7}},
    "House 2"
  },
  { {0x7b05524d,{0xcb5a, 0x456f, 0x96b3}, {0x03, 0x61, 0x24, 0x54, 0x6a, 0x54}},
    "Picnic"
  },
  { {0xb88ad7a1,{0xb94d, 0x42e8, 0x2b9d}, {0xf5, 0x4c, 0x2b, 0xff, 0x57, 0xdc}},
    "Restaurant"
  },
  { {0xdc48a20a,{0x54a2, 0x4c61, 0x1fbe}, {0x02, 0x74, 0x5b, 0xe9, 0x18, 0x99}},
    "Store 2"
  },
  { {0x6b5ab040,{0x96df, 0x46ae, 0xacb8}, {0xe4, 0x47, 0x66, 0x3f, 0xec, 0x9b}},
    ""
  },
  { {0x153b2cff,{0x6232, 0x4294, 0xd59a}, {0xc5, 0xa0, 0x7b, 0xe0, 0x16, 0xeb}},
    "Blue Star"
  },
  { {0xf276f6b3,{0x586a, 0x4bf8, 0x2f82}, {0xf2, 0x69, 0xe3, 0x76, 0x7e, 0xd5}},
    ""
  },
  { {0x91d242c8,{0x0986, 0x4fad, 0x8286}, {0xec, 0x79, 0x79, 0xcd, 0xab, 0x02}},
    "Running"
  },
  { {0x8b0078db,{0x6ee0, 0x4caa, 0xd3b5}, {0xfe, 0xe1, 0xc2, 0xbf, 0x94, 0x7d}},
    "Transportation"
  },
  { {0x0599f6c9,{0x478e, 0x4f63, 0x78a5}, {0xed, 0x31, 0xb5, 0xae, 0xda, 0x89}},
    "Fishing 2"
  },
  { {0x7389128c,{0x0e78, 0x4d5d, 0x4189}, {0xb8, 0xf3, 0xb5, 0xbd, 0x70, 0xb1}},
    "Automotive"
  },
  { {0x0362b593,{0x3df6, 0x48ed, 0xc489}, {0x85, 0x13, 0xc1, 0xc0, 0xb9, 0x0d}},
    "Cloudy"
  },
  { {0xf0717a94,{0xd048, 0x4770, 0x9bab}, {0x80, 0x09, 0xbd, 0x4b, 0x1e, 0x75}},
    "Partly Cloudy"
  },
  { {0x14486bbc,{0xae6b, 0x44ea, 0xd6b9}, {0xbf, 0x9a, 0x39, 0x7a, 0x51, 0x6c}},
    "Mostly Cloudy"
  },
  { {0x7a258c70,{0xabec, 0x4cff, 0x4983}, {0x84, 0xdc, 0x2f, 0x2e, 0xff, 0x28}},
    "Hurricane"
  },
  { {0xeff260d4,{0x46d5, 0x4fb5, 0xc79c}, {0x5e, 0x06, 0xc8, 0xab, 0x7a, 0x2b}},
    "Lightning"
  },
  { {0xc3d70220,{0x5154, 0x4766, 0xf0af}, {0xdf, 0x86, 0x74, 0x40, 0x5f, 0x8c}},
    "Rain"
  },
  { {0xf2dfbc91,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Blue Flag"
  },
  { {0xf2dfbc92,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Dark Blue Flag"
  },
  { {0xf2dfbc93,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Brown Flag"
  },
  { {0xf2dfbc94,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Yellow Flag"
  },
  { {0xf2dfbc95,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Red Flag 2"
  },
  { {0xf2dfbc96,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Dark Red Flag"
  },
  { {0xf2dfbc97,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Dark Green Flag"
  },
  { {0xf2dfbc98,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Green Flag"
  },
  { {0xf2dfbc99,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Blue-Green Flag"
  },
  { {0xf2dfbc9a,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Light Blue Flag"
  },
  { {0x623e1ee1,{0xaf27, 0x100f, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Dark Blue Map Pin"
  },
  { {0xf2dfbc9d,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Blue Map Pin"
  },
  { {0xf2dfbc9e,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Yellow Map Pin"
  },
  { {0xf2dfbc9f,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Brown Map Pin"
  },
  { {0xf2dfbca0,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Red Map Pin"
  },
  { {0xf2dfbca1,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Dark Red Map Pin"
  },
  { {0xf2dfbca2,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Green Map Pin"
  },
  { {0xf2dfbca3,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Dark Green Map Pin"
  },
  { {0xf2dfbca4,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Gray Map Pin"
  },
  { {0xf2dfbca5,{0x7ae6, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Dark Gray Map Pin"
  },
  { {0xd1703de0,{0x5c45, 0x11d5, 0xb8ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Green Dot"
  },
  { {0xd1703de1,{0x5c45, 0x11d5, 0xb8ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Dark Green Dot"
  },
  { {0xd1703de2,{0x5c45, 0x11d5, 0xb8ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Blue Dot"
  },
  { {0xd1703de3,{0x5c45, 0x11d5, 0xb8ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Dark Blue Dot"
  },
  { {0xd1703de5,{0x5c45, 0x11d5, 0xb8ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Red Dot"
  },
  { {0x45c088e0,{0x672d, 0x11d5, 0xcbae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Dark Red Dot"
  },
  { {0x45c088e1,{0x672d, 0x11d5, 0xcbae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Yellow Dot"
  },
  { {0x45c088e2,{0x672d, 0x11d5, 0xcbae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Brown Dot"
  },
  { {0x45c088e3,{0x672d, 0x11d5, 0xcbae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Light Blue Dot"
  },
  { {0xbde3a8a1,{0x7aeb, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Blue-Green Dot"
  },
  { {0xbde3a8a2,{0x7aeb, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Green Dot"
  },
  { {0xbde3a8a3,{0x7aeb, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Dark Green Dot"
  },
  { {0xbde3a8a4,{0x7aeb, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Blue Dot"
  },
  { {0xbde3a8a5,{0x7aeb, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Dark Blue Dot"
  },
  { {0xbde3a8a6,{0x7aeb, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Red Dot"
  },
  { {0xbde3a8a7,{0x7aeb, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Dark Red Dot"
  },
  { {0xbde3a8a8,{0x7aeb, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Yellow Dot"
  },
  { {0xbde3a8a9,{0x7aeb, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Brown Dot"
  },
  { {0xbde3a8aa,{0x7aeb, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Light Blue Dot"
  },
  { {0xbde3a8ab,{0x7aeb, 0x11d5, 0xf3ae}, {0x00, 0x01, 0x02, 0x31, 0x5f, 0xfd}},
    "Small Blue-Green Dot"
  },
  { {0x623e1ee0,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Red Flag"
  },
  { {0x623e1ee1,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Map Pin"
  },
  { {0x623e1ee2,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Yellow Square"
  },
  { {0x623e1ee3,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Red X"
  },
  { {0x623e1ee4,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Blue Circle"
  },
  { {0x623e1ee5,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "House"
  },
  { {0x623e1ee7,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Triangle"
  },
  { {0x623e1ee8,{0xaf27, 0x11d3, 0x29bc}, {0x00, 0x50, 0x04, 0x02, 0xf5, 0x32}},
    "Green Star"
  },
  { {0x9d277805,{0xe2f8, 0x4f43, 0x3f97}, {0x35, 0x0d, 0x40, 0xae, 0x5c, 0xd3}},
    "Geocache"
  },
  { {0xcb8aad04,{0xcc2d, 0x47f2, 0x428a}, {0x80, 0xf7, 0xd6, 0x68, 0xed, 0x32}},
    "Geocache Found"
  },
  { {0x7341c1f4,{0xdecd, 0x4d35, 0x45a5}, {0x52, 0x25, 0x5e, 0xbf, 0xe6, 0x51}},
    "Tent"
  },
  { {0x835b84e2,{0xf10c, 0x45cb, 0x958f}, {0x18, 0x3a, 0xc2, 0x2a, 0xe5, 0x28}},
    "Tipup Up"
  },
  { {0xce06fc92,{0xbb0c, 0x4ec1, 0xda93}, {0x64, 0x4a, 0x60, 0xbe, 0x40, 0x90}},
    "Topup Down"
  },
};

int FindIconByName(const char *name, GUID *guid)
{
  int i = 0;
  for (i = 0; i < (sizeof(default_guids)/sizeof(struct defguid)); i++) {
    if (!case_ignore_strcmp(name, default_guids[i].name)) {
      memcpy(guid, &(default_guids[i].guid), sizeof(GUID));
      return 1;
    }
  }
  return 0;
}

int FindIconByGuid(GUID *guid, char **name)
{
  int i = 0;
  for (i = 0; i < (sizeof(default_guids)/sizeof(struct defguid)); i++) {
    if (!memcmp(guid, &default_guids[i].guid, sizeof(GUID))) {
      *name = default_guids[i].name;
      return 1;
    }
  }
  return 0;
}
