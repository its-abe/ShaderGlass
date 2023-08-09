/*
ShaderGlass shader xbr-shaders\xbr-lv1-standalone imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/6f921ee4815a7894a33855974285b04545a4fa42/xbr/shaders/xbr-lv1-standalone.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Hyllian's xBR-lv1 Shader

Copyright (C) 2011-2022 Hyllian - sergiogdb@gmail.com

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to permit
persons to whom the Software is furnished to do so, subject to the
following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.

Incorporates some of the ideas from SABR shader. Thanks to Joshua Street.

// Uncomment just one of the three params below to choose the corner detection
//#define CORNER_A
//#define CORNER_B
// Return if A components are less than or equal B ones.
// Return if A components are less than B ones.
// Return logically inverted vector components. BEWARE: Only works with 0.0 or 1.0 components.
// Compare two vectors and return their components are different.
// Calculate color distance between two vectors of four pixels
// Tests if color components are under a threshold. In this case they are considered 'equal'.
// Determine if two vector components are NOT equal based on a threshold.
// Calculate weighted distance among pixels in some directions.
//    A1 B1 C1
// A0  A  B  C C4
// D0  D  E  F F4
// G0  G  H  I I4
//    G5 H5 I5
// These inequations define the line below which interpolation occurs.

*/

#pragma once

namespace RetroArchXbrShadersXbrLv1StandaloneShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,82,250,
20,143,50,207,168,140,
70,179,185,26,210,21,
14,244,1,0,0,0,
240,9,0,0,5,0,
0,0,52,0,0,0,
104,3,0,0,180,3,
0,0,204,4,0,0,
84,9,0,0,82,68,
69,70,44,3,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
4,3,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
124,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,128,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,85,66,
79,0,80,117,115,104,
0,171,171,171,124,0,
0,0,1,0,0,0,
184,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,128,0,
0,0,6,0,0,0,
24,1,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,224,0,
0,0,0,0,0,0,
64,0,0,0,2,0,
0,0,244,0,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,103,108,111,98,
97,108,95,77,86,80,
0,102,108,111,97,116,
52,120,52,0,2,0,
3,0,4,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
235,0,0,0,8,2,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,36,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,72,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
36,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
92,2,0,0,32,0,
0,0,16,0,0,0,
2,0,0,0,36,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,110,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,136,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,172,2,0,0,
52,0,0,0,4,0,
0,0,0,0,0,0,
204,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
240,2,0,0,56,0,
0,0,4,0,0,0,
0,0,0,0,204,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,97,
114,97,109,115,95,83,
111,117,114,99,101,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,26,2,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,112,97,
114,97,109,115,95,79,
117,116,112,117,116,83,
105,122,101,0,112,97,
114,97,109,115,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,128,2,0,0,
112,97,114,97,109,115,
95,88,66,82,95,69,
81,95,84,72,82,69,
83,72,79,76,68,0,
102,108,111,97,116,0,
171,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,196,2,
0,0,112,97,114,97,
109,115,95,88,66,82,
95,66,76,69,78,68,
73,78,71,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,73,83,71,78,
68,0,0,0,2,0,
0,0,8,0,0,0,
56,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,15,15,0,0,
56,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,3,3,0,0,
84,69,88,67,79,79,
82,68,0,171,171,171,
79,83,71,78,16,1,
0,0,10,0,0,0,
8,0,0,0,248,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,12,0,0,248,0,
0,0,8,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
4,11,0,0,248,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
15,0,0,0,248,0,
0,0,2,0,0,0,
0,0,0,0,3,0,
0,0,2,0,0,0,
15,0,0,0,248,0,
0,0,3,0,0,0,
0,0,0,0,3,0,
0,0,3,0,0,0,
15,0,0,0,248,0,
0,0,4,0,0,0,
0,0,0,0,3,0,
0,0,4,0,0,0,
15,0,0,0,248,0,
0,0,5,0,0,0,
0,0,0,0,3,0,
0,0,5,0,0,0,
15,0,0,0,248,0,
0,0,6,0,0,0,
0,0,0,0,3,0,
0,0,6,0,0,0,
15,0,0,0,248,0,
0,0,7,0,0,0,
0,0,0,0,3,0,
0,0,7,0,0,0,
15,0,0,0,1,1,
0,0,0,0,0,0,
1,0,0,0,3,0,
0,0,8,0,0,0,
15,0,0,0,84,69,
88,67,79,79,82,68,
0,83,86,95,80,111,
115,105,116,105,111,110,
0,171,171,171,83,72,
69,88,128,4,0,0,
80,0,1,0,32,1,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
4,0,0,0,89,0,
0,4,70,142,32,0,
1,0,0,0,3,0,
0,0,95,0,0,3,
242,16,16,0,0,0,
0,0,95,0,0,3,
50,16,16,0,1,0,
0,0,101,0,0,3,
50,32,16,0,0,0,
0,0,101,0,0,3,
66,32,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,1,0,
0,0,101,0,0,3,
242,32,16,0,2,0,
0,0,101,0,0,3,
242,32,16,0,3,0,
0,0,101,0,0,3,
242,32,16,0,4,0,
0,0,101,0,0,3,
242,32,16,0,5,0,
0,0,101,0,0,3,
242,32,16,0,6,0,
0,0,101,0,0,3,
242,32,16,0,7,0,
0,0,103,0,0,4,
242,32,16,0,8,0,
0,0,1,0,0,0,
104,0,0,2,1,0,
0,0,15,0,0,9,
66,32,16,0,0,0,
0,0,6,128,32,0,
1,0,0,0,0,0,
0,0,166,138,32,0,
1,0,0,0,2,0,
0,0,56,0,0,10,
50,32,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,2,64,
0,0,71,3,128,63,
71,3,128,63,0,0,
0,0,0,0,0,0,
56,0,0,11,210,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,191,0,0,0,0,
0,0,128,63,0,0,
0,192,166,142,32,0,
1,0,0,0,0,0,
0,0,54,0,0,5,
34,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,50,0,
0,12,242,32,16,0,
1,0,0,0,6,20,
16,0,1,0,0,0,
2,64,0,0,71,3,
128,63,71,3,128,63,
71,3,128,63,71,3,
128,63,70,14,16,0,
0,0,0,0,56,0,
0,11,210,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,191,
0,0,0,0,0,0,
128,63,0,0,128,191,
166,142,32,0,1,0,
0,0,0,0,0,0,
54,0,0,5,34,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,50,0,0,12,
242,32,16,0,2,0,
0,0,6,20,16,0,
1,0,0,0,2,64,
0,0,71,3,128,63,
71,3,128,63,71,3,
128,63,71,3,128,63,
70,14,16,0,0,0,
0,0,50,0,0,12,
242,32,16,0,3,0,
0,0,6,20,16,0,
1,0,0,0,2,64,
0,0,71,3,128,63,
71,3,128,63,71,3,
128,63,71,3,128,63,
70,6,16,0,0,0,
0,0,56,0,0,11,
210,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,191,0,0,
0,0,0,0,128,63,
0,0,128,63,166,142,
32,0,1,0,0,0,
0,0,0,0,54,0,
0,5,34,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
50,0,0,12,242,32,
16,0,4,0,0,0,
6,20,16,0,1,0,
0,0,2,64,0,0,
71,3,128,63,71,3,
128,63,71,3,128,63,
71,3,128,63,70,14,
16,0,0,0,0,0,
56,0,0,11,210,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,191,0,0,0,0,
0,0,128,63,0,0,
0,64,166,142,32,0,
1,0,0,0,0,0,
0,0,54,0,0,5,
34,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,50,0,
0,12,242,32,16,0,
5,0,0,0,6,20,
16,0,1,0,0,0,
2,64,0,0,71,3,
128,63,71,3,128,63,
71,3,128,63,71,3,
128,63,70,14,16,0,
0,0,0,0,56,0,
0,11,178,0,16,0,
0,0,0,0,2,64,
0,0,0,0,0,192,
0,0,128,191,0,0,
0,0,0,0,128,63,
230,142,32,0,1,0,
0,0,0,0,0,0,
54,0,0,5,66,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,50,0,0,12,
242,32,16,0,6,0,
0,0,70,21,16,0,
1,0,0,0,2,64,
0,0,71,3,128,63,
71,3,128,63,71,3,
128,63,71,3,128,63,
70,14,16,0,0,0,
0,0,56,0,0,11,
178,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
128,191,0,0,0,0,
0,0,128,63,230,142,
32,0,1,0,0,0,
0,0,0,0,54,0,
0,5,66,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
50,0,0,12,242,32,
16,0,7,0,0,0,
70,21,16,0,1,0,
0,0,2,64,0,0,
71,3,128,63,71,3,
128,63,71,3,128,63,
71,3,128,63,70,14,
16,0,0,0,0,0,
56,0,0,8,242,0,
16,0,0,0,0,0,
86,21,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,1,0,
0,0,50,0,0,10,
242,0,16,0,0,0,
0,0,6,16,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
50,0,0,10,242,0,
16,0,0,0,0,0,
166,26,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,2,0,
0,0,70,14,16,0,
0,0,0,0,50,0,
0,10,242,32,16,0,
8,0,0,0,246,31,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,3,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,26,0,0,0,
1,0,0,0,0,0,
0,0,12,0,0,0,
19,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
6,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,204,88,
133,92,37,249,201,240,
69,59,88,150,10,213,
129,123,1,0,0,0,
40,37,0,0,5,0,
0,0,52,0,0,0,
32,3,0,0,20,4,
0,0,72,4,0,0,
140,36,0,0,82,68,
69,70,228,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
188,2,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
156,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,172,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,179,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,0,0,0,0,
95,83,111,117,114,99,
101,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,80,
117,115,104,0,179,0,
0,0,6,0,0,0,
208,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,192,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,220,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,0,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
220,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
20,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,220,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,38,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,64,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,100,2,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
132,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
168,2,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,132,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,97,
114,97,109,115,95,83,
111,117,114,99,101,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,210,1,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,112,97,
114,97,109,115,95,79,
117,116,112,117,116,83,
105,122,101,0,112,97,
114,97,109,115,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,56,2,0,0,
112,97,114,97,109,115,
95,88,66,82,95,69,
81,95,84,72,82,69,
83,72,79,76,68,0,
102,108,111,97,116,0,
171,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,124,2,
0,0,112,97,114,97,
109,115,95,88,66,82,
95,66,76,69,78,68,
73,78,71,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,73,83,71,78,
236,0,0,0,9,0,
0,0,8,0,0,0,
224,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
224,0,0,0,8,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,4,4,0,0,
224,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,15,15,0,0,
224,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,15,15,0,0,
224,0,0,0,3,0,
0,0,0,0,0,0,
3,0,0,0,3,0,
0,0,15,15,0,0,
224,0,0,0,4,0,
0,0,0,0,0,0,
3,0,0,0,4,0,
0,0,15,15,0,0,
224,0,0,0,5,0,
0,0,0,0,0,0,
3,0,0,0,5,0,
0,0,15,15,0,0,
224,0,0,0,6,0,
0,0,0,0,0,0,
3,0,0,0,6,0,
0,0,15,15,0,0,
224,0,0,0,7,0,
0,0,0,0,0,0,
3,0,0,0,7,0,
0,0,15,15,0,0,
84,69,88,67,79,79,
82,68,0,171,171,171,
79,83,71,78,44,0,
0,0,1,0,0,0,
8,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
15,0,0,0,83,86,
95,84,97,114,103,101,
116,0,171,171,83,72,
69,88,60,32,0,0,
80,0,0,0,15,8,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,1,0,0,0,
4,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,98,16,0,3,
66,16,16,0,0,0,
0,0,98,16,0,3,
242,16,16,0,1,0,
0,0,98,16,0,3,
242,16,16,0,2,0,
0,0,98,16,0,3,
242,16,16,0,3,0,
0,0,98,16,0,3,
242,16,16,0,4,0,
0,0,98,16,0,3,
242,16,16,0,5,0,
0,0,98,16,0,3,
242,16,16,0,6,0,
0,0,98,16,0,3,
242,16,16,0,7,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
24,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,0,0,0,0,
230,26,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,1,0,
0,0,230,26,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,2,0,
0,0,70,2,16,128,
65,0,0,0,0,0,
0,0,70,2,16,0,
1,0,0,0,16,0,
0,11,18,0,16,0,
2,0,0,0,70,2,
16,128,129,0,0,0,
2,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,3,0,
0,0,198,16,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
4,0,0,0,214,21,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
5,0,0,0,70,2,
16,128,65,0,0,0,
3,0,0,0,70,2,
16,0,4,0,0,0,
16,0,0,11,34,0,
16,0,2,0,0,0,
70,2,16,128,129,0,
0,0,5,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,198,16,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,6,0,0,0,
198,16,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,7,0,0,0,
70,2,16,128,65,0,
0,0,5,0,0,0,
70,2,16,0,6,0,
0,0,16,0,0,11,
66,0,16,0,2,0,
0,0,70,2,16,128,
129,0,0,0,7,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,7,0,0,0,
230,26,16,0,4,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,8,0,
0,0,214,21,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,9,0,
0,0,70,2,16,128,
65,0,0,0,7,0,
0,0,70,2,16,0,
8,0,0,0,16,0,
0,11,130,0,16,0,
2,0,0,0,70,2,
16,128,129,0,0,0,
9,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
29,0,0,8,242,0,
16,0,2,0,0,0,
86,133,32,0,1,0,
0,0,3,0,0,0,
70,14,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,9,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,128,65,0,0,0,
4,0,0,0,16,0,
0,11,18,0,16,0,
9,0,0,0,70,2,
16,128,129,0,0,0,
9,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
0,0,0,8,114,0,
16,0,10,0,0,0,
70,2,16,0,4,0,
0,0,70,2,16,128,
65,0,0,0,6,0,
0,0,16,0,0,11,
34,0,16,0,9,0,
0,0,70,2,16,128,
129,0,0,0,10,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,0,0,
0,8,114,0,16,0,
10,0,0,0,70,2,
16,0,6,0,0,0,
70,2,16,128,65,0,
0,0,8,0,0,0,
16,0,0,11,66,0,
16,0,9,0,0,0,
70,2,16,128,129,0,
0,0,10,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,0,0,0,8,
114,0,16,0,10,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,70,2,16,0,
8,0,0,0,16,0,
0,11,130,0,16,0,
9,0,0,0,70,2,
16,128,129,0,0,0,
10,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
29,0,0,8,242,0,
16,0,10,0,0,0,
86,133,32,0,1,0,
0,0,3,0,0,0,
70,14,16,0,9,0,
0,0,60,0,0,7,
242,0,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,70,14,
16,0,10,0,0,0,
55,0,0,15,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,8,114,0,
16,0,10,0,0,0,
70,2,16,128,65,0,
0,0,5,0,0,0,
70,2,16,0,8,0,
0,0,16,0,0,11,
18,0,16,0,10,0,
0,0,70,2,16,128,
129,0,0,0,10,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,0,0,
0,8,114,0,16,0,
11,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,7,0,0,0,
16,0,0,11,34,0,
16,0,10,0,0,0,
70,2,16,128,129,0,
0,0,11,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,0,0,0,8,
114,0,16,0,11,0,
0,0,70,2,16,128,
65,0,0,0,0,0,
0,0,70,2,16,0,
4,0,0,0,16,0,
0,11,66,0,16,0,
10,0,0,0,70,2,
16,128,129,0,0,0,
11,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
0,0,0,8,114,0,
16,0,11,0,0,0,
70,2,16,128,65,0,
0,0,3,0,0,0,
70,2,16,0,6,0,
0,0,16,0,0,11,
130,0,16,0,10,0,
0,0,70,2,16,128,
129,0,0,0,11,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,29,0,
0,8,242,0,16,0,
10,0,0,0,86,133,
32,0,1,0,0,0,
3,0,0,0,70,14,
16,0,10,0,0,0,
0,0,0,8,114,0,
16,0,11,0,0,0,
70,2,16,128,65,0,
0,0,6,0,0,0,
70,2,16,0,8,0,
0,0,16,0,0,11,
18,0,16,0,12,0,
0,0,70,2,16,128,
129,0,0,0,11,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,0,0,
0,8,114,0,16,0,
13,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,8,0,0,0,
16,0,0,11,34,0,
16,0,12,0,0,0,
70,2,16,128,129,0,
0,0,13,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,0,0,0,8,
114,0,16,0,14,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,70,2,16,0,
4,0,0,0,16,0,
0,11,66,0,16,0,
12,0,0,0,70,2,
16,128,129,0,0,0,
14,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
0,0,0,8,114,0,
16,0,15,0,0,0,
70,2,16,128,65,0,
0,0,4,0,0,0,
70,2,16,0,6,0,
0,0,16,0,0,11,
130,0,16,0,12,0,
0,0,70,2,16,128,
129,0,0,0,15,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,29,0,
0,8,242,0,16,0,
16,0,0,0,86,133,
32,0,1,0,0,0,
3,0,0,0,70,14,
16,0,12,0,0,0,
60,0,0,7,242,0,
16,0,10,0,0,0,
70,14,16,0,10,0,
0,0,70,14,16,0,
16,0,0,0,55,0,
0,15,242,0,16,0,
10,0,0,0,70,14,
16,0,10,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,7,242,0,16,0,
2,0,0,0,70,14,
16,0,2,0,0,0,
70,14,16,0,10,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
10,0,0,0,198,16,
16,0,7,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
10,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,10,0,0,0,
16,0,0,11,18,0,
16,0,10,0,0,0,
70,2,16,128,129,0,
0,0,10,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
16,0,0,0,230,26,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
16,0,0,0,70,2,
16,0,4,0,0,0,
70,2,16,128,65,0,
0,0,16,0,0,0,
16,0,0,11,34,0,
16,0,10,0,0,0,
70,2,16,128,129,0,
0,0,16,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
16,0,0,0,70,16,
16,0,6,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
16,0,0,0,70,2,
16,0,6,0,0,0,
70,2,16,128,65,0,
0,0,16,0,0,0,
16,0,0,11,66,0,
16,0,10,0,0,0,
70,2,16,128,129,0,
0,0,16,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
16,0,0,0,198,16,
16,0,5,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
16,0,0,0,70,2,
16,0,8,0,0,0,
70,2,16,128,65,0,
0,0,16,0,0,0,
16,0,0,11,130,0,
16,0,10,0,0,0,
70,2,16,128,129,0,
0,0,16,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,29,0,0,8,
242,0,16,0,16,0,
0,0,86,133,32,0,
1,0,0,0,3,0,
0,0,70,14,16,0,
10,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,17,0,0,0,
134,16,16,0,7,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,18,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,128,
65,0,0,0,17,0,
0,0,16,0,0,11,
34,0,16,0,18,0,
0,0,70,2,16,128,
129,0,0,0,18,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,19,0,0,0,
214,21,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,20,0,0,0,
70,2,16,0,4,0,
0,0,70,2,16,128,
65,0,0,0,19,0,
0,0,16,0,0,11,
66,0,16,0,18,0,
0,0,70,2,16,128,
129,0,0,0,20,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,20,0,0,0,
134,16,16,0,6,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,21,0,0,0,
70,2,16,0,6,0,
0,0,70,2,16,128,
65,0,0,0,20,0,
0,0,16,0,0,11,
130,0,16,0,18,0,
0,0,70,2,16,128,
129,0,0,0,21,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,21,0,0,0,
214,21,16,0,5,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,22,0,0,0,
70,2,16,0,8,0,
0,0,70,2,16,128,
65,0,0,0,21,0,
0,0,16,0,0,11,
18,0,16,0,18,0,
0,0,70,2,16,128,
129,0,0,0,22,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,29,0,
0,8,242,0,16,0,
18,0,0,0,86,133,
32,0,1,0,0,0,
3,0,0,0,70,14,
16,0,18,0,0,0,
60,0,0,7,242,0,
16,0,16,0,0,0,
70,14,16,0,16,0,
0,0,150,3,16,0,
18,0,0,0,55,0,
0,15,242,0,16,0,
16,0,0,0,70,14,
16,0,16,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,22,0,0,0,
230,26,16,0,5,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,22,0,0,0,
70,2,16,0,8,0,
0,0,70,2,16,128,
65,0,0,0,22,0,
0,0,16,0,0,11,
18,0,16,0,22,0,
0,0,70,2,16,128,
129,0,0,0,22,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,23,0,0,0,
70,16,16,0,7,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,23,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,128,
65,0,0,0,23,0,
0,0,16,0,0,11,
34,0,16,0,22,0,
0,0,70,2,16,128,
129,0,0,0,23,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,23,0,0,0,
198,16,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,23,0,0,0,
70,2,16,0,4,0,
0,0,70,2,16,128,
65,0,0,0,23,0,
0,0,16,0,0,11,
66,0,16,0,22,0,
0,0,70,2,16,128,
129,0,0,0,23,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,23,0,0,0,
198,16,16,0,6,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,23,0,0,0,
70,2,16,0,6,0,
0,0,70,2,16,128,
65,0,0,0,23,0,
0,0,16,0,0,11,
130,0,16,0,22,0,
0,0,70,2,16,128,
129,0,0,0,23,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,29,0,
0,8,242,0,16,0,
23,0,0,0,86,133,
32,0,1,0,0,0,
3,0,0,0,70,14,
16,0,22,0,0,0,
0,0,0,7,242,0,
16,0,12,0,0,0,
70,14,16,0,12,0,
0,0,70,14,16,0,
22,0,0,0,0,0,
0,7,242,0,16,0,
10,0,0,0,70,14,
16,0,10,0,0,0,
70,14,16,0,12,0,
0,0,0,0,0,7,
242,0,16,0,10,0,
0,0,70,14,16,0,
9,0,0,0,70,14,
16,0,10,0,0,0,
60,0,0,7,242,0,
16,0,12,0,0,0,
70,14,16,0,18,0,
0,0,70,14,16,0,
23,0,0,0,55,0,
0,15,242,0,16,0,
12,0,0,0,70,14,
16,0,12,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,7,242,0,16,0,
12,0,0,0,70,14,
16,0,12,0,0,0,
70,14,16,0,16,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
16,0,0,0,214,21,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
18,0,0,0,70,2,
16,128,65,0,0,0,
7,0,0,0,70,2,
16,0,16,0,0,0,
16,0,0,11,18,0,
16,0,18,0,0,0,
70,2,16,128,129,0,
0,0,18,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,0,0,0,8,
114,0,16,0,22,0,
0,0,70,2,16,128,
65,0,0,0,0,0,
0,0,70,2,16,0,
16,0,0,0,16,0,
0,11,34,0,16,0,
18,0,0,0,70,2,
16,128,129,0,0,0,
22,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
0,0,0,8,114,0,
16,0,22,0,0,0,
70,2,16,128,65,0,
0,0,3,0,0,0,
70,2,16,0,16,0,
0,0,16,0,0,11,
66,0,16,0,18,0,
0,0,70,2,16,128,
129,0,0,0,22,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,0,0,
0,8,114,0,16,0,
22,0,0,0,70,2,
16,128,65,0,0,0,
5,0,0,0,70,2,
16,0,16,0,0,0,
16,0,0,11,130,0,
16,0,18,0,0,0,
70,2,16,128,129,0,
0,0,22,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,29,0,0,8,
242,0,16,0,22,0,
0,0,86,133,32,0,
1,0,0,0,3,0,
0,0,150,3,16,0,
18,0,0,0,1,0,
0,10,242,0,16,0,
22,0,0,0,70,14,
16,0,22,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,50,0,0,9,
242,0,16,0,2,0,
0,0,54,9,16,0,
22,0,0,0,70,14,
16,0,12,0,0,0,
70,14,16,0,2,0,
0,0,0,0,0,7,
242,0,16,0,2,0,
0,0,230,4,16,0,
22,0,0,0,70,14,
16,0,2,0,0,0,
0,0,0,7,242,0,
16,0,2,0,0,0,
70,14,16,0,22,0,
0,0,70,14,16,0,
2,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,71,0,0,128,67,
0,0,128,63,0,0,
0,0,16,0,0,10,
130,0,16,0,1,0,
0,0,70,2,16,0,
16,0,0,0,2,64,
0,0,0,0,128,71,
0,0,128,67,0,0,
128,63,0,0,0,0,
57,0,0,7,18,0,
16,0,12,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,70,2,
16,0,4,0,0,0,
2,64,0,0,0,0,
128,71,0,0,128,67,
0,0,128,63,0,0,
0,0,57,0,0,7,
34,0,16,0,12,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
70,2,16,0,6,0,
0,0,2,64,0,0,
0,0,128,71,0,0,
128,67,0,0,128,63,
0,0,0,0,57,0,
0,7,66,0,16,0,
12,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,16,0,0,10,
130,0,16,0,0,0,
0,0,70,2,16,0,
8,0,0,0,2,64,
0,0,0,0,128,71,
0,0,128,67,0,0,
128,63,0,0,0,0,
57,0,0,7,130,0,
16,0,12,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,1,0,
0,10,242,0,16,0,
12,0,0,0,70,14,
16,0,12,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,56,0,0,7,
242,0,16,0,12,0,
0,0,54,9,16,0,
12,0,0,0,70,14,
16,0,12,0,0,0,
56,0,0,7,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,70,14,16,0,
12,0,0,0,51,0,
0,10,242,0,16,0,
2,0,0,0,70,14,
16,0,2,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,8,
114,0,16,0,22,0,
0,0,70,2,16,0,
7,0,0,0,70,2,
16,128,65,0,0,0,
17,0,0,0,0,0,
0,8,114,0,16,0,
7,0,0,0,70,2,
16,0,7,0,0,0,
70,2,16,128,65,0,
0,0,21,0,0,0,
0,0,0,8,114,0,
16,0,21,0,0,0,
70,2,16,0,5,0,
0,0,70,2,16,128,
65,0,0,0,21,0,
0,0,0,0,0,8,
114,0,16,0,5,0,
0,0,70,2,16,0,
5,0,0,0,70,2,
16,128,65,0,0,0,
20,0,0,0,0,0,
0,8,114,0,16,0,
20,0,0,0,70,2,
16,0,3,0,0,0,
70,2,16,128,65,0,
0,0,20,0,0,0,
0,0,0,8,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,128,
65,0,0,0,19,0,
0,0,0,0,0,8,
114,0,16,0,19,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,128,65,0,0,0,
19,0,0,0,0,0,
0,8,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,128,65,0,
0,0,17,0,0,0,
16,0,0,11,34,0,
16,0,0,0,0,0,
70,2,16,128,129,0,
0,0,0,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,16,0,0,11,
34,0,16,0,17,0,
0,0,70,2,16,128,
129,0,0,0,19,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,16,0,
0,11,66,0,16,0,
0,0,0,0,70,2,
16,128,129,0,0,0,
3,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
16,0,0,11,66,0,
16,0,17,0,0,0,
70,2,16,128,129,0,
0,0,20,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,16,0,0,11,
130,0,16,0,0,0,
0,0,70,2,16,128,
129,0,0,0,5,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,16,0,
0,11,130,0,16,0,
17,0,0,0,70,2,
16,128,129,0,0,0,
21,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
16,0,0,11,18,0,
16,0,0,0,0,0,
70,2,16,128,129,0,
0,0,7,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,16,0,0,11,
18,0,16,0,17,0,
0,0,70,2,16,128,
129,0,0,0,22,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,0,0,
0,7,242,0,16,0,
3,0,0,0,54,3,
16,0,18,0,0,0,
150,9,16,0,18,0,
0,0,50,0,0,12,
242,0,16,0,5,0,
0,0,70,14,16,0,
18,0,0,0,2,64,
0,0,0,0,128,64,
0,0,128,64,0,0,
128,64,0,0,128,64,
70,14,16,0,10,0,
0,0,0,0,0,7,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,70,14,
16,0,3,0,0,0,
0,0,0,7,242,0,
16,0,0,0,0,0,
70,14,16,0,17,0,
0,0,70,14,16,0,
0,0,0,0,50,0,
0,12,242,0,16,0,
0,0,0,0,54,9,
16,0,9,0,0,0,
2,64,0,0,0,0,
128,64,0,0,128,64,
0,0,128,64,0,0,
128,64,70,14,16,0,
0,0,0,0,49,0,
0,7,242,0,16,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
70,14,16,0,5,0,
0,0,29,0,0,7,
242,0,16,0,0,0,
0,0,70,14,16,0,
5,0,0,0,70,14,
16,0,0,0,0,0,
1,0,0,10,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,56,0,
0,7,242,0,16,0,
0,0,0,0,70,14,
16,0,12,0,0,0,
70,14,16,0,0,0,
0,0,1,0,0,10,
242,0,16,0,3,0,
0,0,70,14,16,0,
3,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
56,0,0,7,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,70,14,16,0,
3,0,0,0,50,0,
0,13,242,0,16,0,
3,0,0,0,150,9,
16,128,65,0,0,0,
0,0,0,0,54,3,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,56,0,0,7,
242,0,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,70,14,
16,0,3,0,0,0,
56,0,0,8,242,0,
16,0,3,0,0,0,
86,16,16,0,0,0,
0,0,86,128,32,0,
1,0,0,0,0,0,
0,0,26,0,0,5,
242,0,16,0,3,0,
0,0,70,14,16,0,
3,0,0,0,56,0,
0,10,242,0,16,0,
3,0,0,0,70,14,
16,0,3,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,191,
0,0,128,63,0,0,
128,191,0,0,0,7,
242,0,16,0,3,0,
0,0,166,15,16,0,
3,0,0,0,70,1,
16,0,3,0,0,0,
0,0,0,10,242,0,
16,0,5,0,0,0,
70,14,16,0,3,0,
0,0,2,64,0,0,
0,0,192,191,0,0,
0,191,0,0,0,63,
0,0,0,191,14,0,
0,7,242,0,16,0,
5,0,0,0,70,14,
16,0,5,0,0,0,
166,26,16,0,0,0,
0,0,0,32,0,10,
242,0,16,0,5,0,
0,0,70,14,16,0,
5,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
49,0,0,10,242,0,
16,0,7,0,0,0,
2,64,0,0,0,0,
192,63,0,0,0,63,
0,0,0,191,0,0,
0,63,70,14,16,0,
3,0,0,0,1,0,
0,10,242,0,16,0,
7,0,0,0,70,14,
16,0,7,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,24,0,0,8,
130,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,42,128,
32,0,1,0,0,0,
3,0,0,0,55,0,
0,9,242,0,16,0,
5,0,0,0,246,15,
16,0,1,0,0,0,
70,14,16,0,5,0,
0,0,70,14,16,0,
7,0,0,0,56,0,
0,7,242,0,16,0,
2,0,0,0,70,14,
16,0,2,0,0,0,
70,14,16,0,5,0,
0,0,0,0,0,10,
242,0,16,0,5,0,
0,0,70,14,16,0,
3,0,0,0,2,64,
0,0,0,0,224,191,
0,0,64,191,0,0,
128,62,0,0,64,191,
49,0,0,10,242,0,
16,0,3,0,0,0,
2,64,0,0,0,0,
224,63,0,0,64,63,
0,0,128,190,0,0,
64,63,70,14,16,0,
3,0,0,0,1,0,
0,10,242,0,16,0,
3,0,0,0,70,14,
16,0,3,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,14,0,0,7,
242,0,16,0,5,0,
0,0,70,14,16,0,
5,0,0,0,166,26,
16,0,0,0,0,0,
0,32,0,10,242,0,
16,0,5,0,0,0,
70,14,16,0,5,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,63,55,0,
0,9,242,0,16,0,
3,0,0,0,246,15,
16,0,1,0,0,0,
70,14,16,0,5,0,
0,0,70,14,16,0,
3,0,0,0,56,0,
0,7,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
70,14,16,0,3,0,
0,0,52,0,0,7,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,70,14,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,2,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
70,2,16,0,16,0,
0,0,16,0,0,11,
34,0,16,0,2,0,
0,0,70,2,16,128,
129,0,0,0,2,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,0,0,
0,8,114,0,16,0,
3,0,0,0,70,2,
16,128,65,0,0,0,
4,0,0,0,70,2,
16,0,16,0,0,0,
16,0,0,11,66,0,
16,0,2,0,0,0,
70,2,16,128,129,0,
0,0,3,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,0,0,0,8,
114,0,16,0,3,0,
0,0,70,2,16,128,
65,0,0,0,6,0,
0,0,70,2,16,0,
16,0,0,0,16,0,
0,11,130,0,16,0,
2,0,0,0,70,2,
16,128,129,0,0,0,
3,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
0,0,0,8,114,0,
16,0,3,0,0,0,
70,2,16,128,65,0,
0,0,8,0,0,0,
70,2,16,0,16,0,
0,0,16,0,0,11,
18,0,16,0,2,0,
0,0,70,2,16,128,
129,0,0,0,3,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,29,0,
0,7,242,0,16,0,
2,0,0,0,70,14,
16,0,2,0,0,0,
150,3,16,0,2,0,
0,0,1,0,0,10,
242,0,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
50,0,0,9,114,0,
16,0,3,0,0,0,
246,15,16,0,2,0,
0,0,70,2,16,0,
11,0,0,0,70,2,
16,0,6,0,0,0,
0,0,0,8,114,0,
16,0,3,0,0,0,
70,2,16,128,65,0,
0,0,16,0,0,0,
70,2,16,0,3,0,
0,0,50,0,0,9,
114,0,16,0,3,0,
0,0,246,15,16,0,
0,0,0,0,70,2,
16,0,3,0,0,0,
70,2,16,0,16,0,
0,0,0,0,0,8,
114,0,16,0,5,0,
0,0,70,2,16,128,
65,0,0,0,3,0,
0,0,70,2,16,0,
16,0,0,0,16,0,
0,11,130,0,16,0,
0,0,0,0,70,2,
16,128,129,0,0,0,
5,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
50,0,0,9,114,0,
16,0,1,0,0,0,
86,5,16,0,2,0,
0,0,70,2,16,0,
14,0,0,0,70,2,
16,0,1,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,16,0,0,0,
70,2,16,0,1,0,
0,0,50,0,0,9,
114,0,16,0,1,0,
0,0,86,5,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,16,0,
0,0,0,0,0,8,
114,0,16,0,5,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,70,2,16,0,
16,0,0,0,16,0,
0,11,34,0,16,0,
0,0,0,0,70,2,
16,128,129,0,0,0,
5,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
29,0,0,7,34,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,0,0,0,8,
114,0,16,0,3,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,70,2,16,0,
3,0,0,0,50,0,
0,9,114,0,16,0,
1,0,0,0,86,5,
16,0,0,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
1,0,0,0,0,0,
0,8,114,0,16,0,
3,0,0,0,70,2,
16,128,65,0,0,0,
1,0,0,0,70,2,
16,0,16,0,0,0,
16,0,0,11,34,0,
16,0,0,0,0,0,
70,2,16,128,129,0,
0,0,3,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,50,0,0,9,
226,0,16,0,2,0,
0,0,166,10,16,0,
2,0,0,0,6,9,
16,0,15,0,0,0,
6,9,16,0,4,0,
0,0,50,0,0,9,
114,0,16,0,3,0,
0,0,6,0,16,0,
2,0,0,0,70,2,
16,0,13,0,0,0,
70,2,16,0,8,0,
0,0,0,0,0,8,
114,0,16,0,3,0,
0,0,70,2,16,128,
65,0,0,0,16,0,
0,0,70,2,16,0,
3,0,0,0,50,0,
0,9,114,0,16,0,
3,0,0,0,6,0,
16,0,0,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
16,0,0,0,0,0,
0,8,114,0,16,0,
2,0,0,0,70,2,
16,128,65,0,0,0,
16,0,0,0,150,7,
16,0,2,0,0,0,
50,0,0,9,210,0,
16,0,0,0,0,0,
166,10,16,0,0,0,
0,0,6,9,16,0,
2,0,0,0,6,9,
16,0,16,0,0,0,
0,0,0,8,114,0,
16,0,2,0,0,0,
134,3,16,128,65,0,
0,0,0,0,0,0,
70,2,16,0,16,0,
0,0,0,0,0,8,
210,0,16,0,0,0,
0,0,6,9,16,128,
65,0,0,0,3,0,
0,0,6,14,16,0,
0,0,0,0,16,0,
0,11,130,0,16,0,
1,0,0,0,70,2,
16,128,129,0,0,0,
2,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
0,0,0,8,114,0,
16,0,2,0,0,0,
70,2,16,128,65,0,
0,0,3,0,0,0,
70,2,16,0,16,0,
0,0,16,0,0,11,
18,0,16,0,2,0,
0,0,70,2,16,128,
129,0,0,0,2,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,29,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
10,0,16,0,2,0,
0,0,1,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,1,64,
0,0,0,0,128,63,
50,0,0,9,210,0,
16,0,0,0,0,0,
246,15,16,0,1,0,
0,0,6,14,16,0,
0,0,0,0,6,9,
16,0,3,0,0,0,
0,0,0,8,114,0,
16,0,2,0,0,0,
134,3,16,128,65,0,
0,0,0,0,0,0,
70,2,16,0,16,0,
0,0,16,0,0,11,
130,0,16,0,1,0,
0,0,70,2,16,128,
129,0,0,0,2,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,29,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,1,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
0,0,0,8,114,0,
16,0,1,0,0,0,
134,3,16,128,65,0,
0,0,0,0,0,0,
70,2,16,0,1,0,
0,0,50,0,0,9,
114,32,16,0,0,0,
0,0,86,5,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
134,3,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,220,0,
0,0,24,0,0,0,
0,0,0,0,10,0,
0,0,177,0,0,0,
0,0,0,0,14,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
21,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
6,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0
};

}

namespace RetroArch
{
class XbrShadersXbrLv1StandaloneShaderDef : public ShaderDef
{
public:
	XbrShadersXbrLv1StandaloneShaderDef() : ShaderDef{}
	{
		Name = "xbr-lv1-standalone";
		VertexByteCode = RetroArchXbrShadersXbrLv1StandaloneShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchXbrShadersXbrLv1StandaloneShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchXbrShadersXbrLv1StandaloneShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchXbrShadersXbrLv1StandaloneShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("XBR_EQ_THRESHOLD", -1, 52, 4, 0.000000f, 1.000000f, 0.320000f, 0.010000f, "COLOR DISTINCTION THRESHOLD"));
		Params.push_back(ShaderParam("XBR_BLENDING", -1, 56, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "BLENDING [ NOBLEND | AA ]"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Samplers.push_back(ShaderSampler("Source", 2));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}