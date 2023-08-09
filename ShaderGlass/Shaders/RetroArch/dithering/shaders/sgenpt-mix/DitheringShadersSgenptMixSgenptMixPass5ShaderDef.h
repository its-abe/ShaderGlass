/*
ShaderGlass shader dithering-shaders-sgenpt-mix\sgenpt-mix-pass5 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/6f921ee4815a7894a33855974285b04545a4fa42/dithering/shaders/sgenpt-mix/sgenpt-mix-pass5.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Sgenpt-Mix - pass5

2011-2022 Hyllian - sergiogdb@gmail.com

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.


// Reading the texels.
//              U3
//              U2
//          UL   U  UR
//  L3  L2   L   C   R   R2  R3
//          DL   D  DR
//              D2
//              D3

*/

#pragma once

namespace RetroArchDitheringShadersSgenptMixSgenptMixPass5ShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,110,239,
1,38,44,138,120,137,
121,214,212,137,93,170,
129,5,1,0,0,0,
140,3,0,0,5,0,
0,0,52,0,0,0,
60,1,0,0,136,1,
0,0,224,1,0,0,
240,2,0,0,82,68,
69,70,0,1,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
216,0,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
92,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,85,66,79,0,
92,0,0,0,1,0,
0,0,120,0,0,0,
64,0,0,0,0,0,
0,0,0,0,0,0,
160,0,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,180,0,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,103,108,
111,98,97,108,95,77,
86,80,0,102,108,111,
97,116,52,120,52,0,
2,0,3,0,4,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,171,0,0,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,73,83,
71,78,68,0,0,0,
2,0,0,0,8,0,
0,0,56,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,15,15,
0,0,56,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,3,3,
0,0,84,69,88,67,
79,79,82,68,0,171,
171,171,79,83,71,78,
80,0,0,0,2,0,
0,0,8,0,0,0,
56,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,12,0,0,
65,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,1,0,
0,0,15,0,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
83,72,69,88,8,1,
0,0,80,0,1,0,
66,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,4,0,0,0,
95,0,0,3,242,16,
16,0,0,0,0,0,
95,0,0,3,50,16,
16,0,1,0,0,0,
101,0,0,3,50,32,
16,0,0,0,0,0,
103,0,0,4,242,32,
16,0,1,0,0,0,
1,0,0,0,104,0,
0,2,1,0,0,0,
54,0,0,5,50,32,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,56,0,0,8,
242,0,16,0,0,0,
0,0,86,21,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
1,0,0,0,50,0,
0,10,242,0,16,0,
0,0,0,0,6,16,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,0,0,0,0,
70,14,16,0,0,0,
0,0,50,0,0,10,
242,0,16,0,0,0,
0,0,166,26,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
2,0,0,0,70,14,
16,0,0,0,0,0,
50,0,0,10,242,32,
16,0,1,0,0,0,
246,31,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,3,0,
0,0,70,14,16,0,
0,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,6,0,
0,0,1,0,0,0,
0,0,0,0,4,0,
0,0,4,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
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
0,0,0,0,0,0,
0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,224,41,
98,213,185,85,145,232,
109,70,234,15,143,66,
38,62,1,0,0,0,
136,16,0,0,5,0,
0,0,52,0,0,0,
248,3,0,0,44,4,
0,0,96,4,0,0,
236,15,0,0,82,68,
69,70,188,3,0,0,
1,0,0,0,24,1,
0,0,5,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
148,3,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
220,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,236,0,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
1,0,0,0,255,0,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
2,0,0,0,1,0,
0,0,13,0,0,0,
6,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,3,0,0,0,
1,0,0,0,13,0,
0,0,16,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,95,67,66,95,
79,117,116,112,117,116,
95,115,97,109,112,108,
101,114,0,83,111,117,
114,99,101,0,67,66,
95,79,117,116,112,117,
116,0,80,117,115,104,
0,171,171,171,16,1,
0,0,8,0,0,0,
48,1,0,0,80,0,
0,0,0,0,0,0,
0,0,0,0,112,2,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,140,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,176,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
140,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
196,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,140,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,214,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,240,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,20,3,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
52,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
88,3,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,52,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,110,3,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,52,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,132,3,0,0,
64,0,0,0,4,0,
0,0,2,0,0,0,
52,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
112,97,114,97,109,115,
95,83,111,117,114,99,
101,83,105,122,101,0,
102,108,111,97,116,52,
0,171,171,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
130,2,0,0,112,97,
114,97,109,115,95,79,
114,105,103,105,110,97,
108,83,105,122,101,0,
112,97,114,97,109,115,
95,79,117,116,112,117,
116,83,105,122,101,0,
112,97,114,97,109,115,
95,70,114,97,109,101,
67,111,117,110,116,0,
100,119,111,114,100,0,
171,171,0,0,19,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,232,2,
0,0,112,97,114,97,
109,115,95,86,76,95,
77,73,84,73,71,95,
78,69,73,71,72,66,
82,83,0,102,108,111,
97,116,0,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
45,3,0,0,112,97,
114,97,109,115,95,86,
76,95,77,73,84,73,
71,95,76,73,78,69,
83,0,112,97,114,97,
109,115,95,86,76,95,
65,68,74,85,83,84,
95,86,73,69,87,0,
112,97,114,97,109,115,
95,85,115,101,71,97,
109,109,97,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,73,83,71,78,
44,0,0,0,1,0,
0,0,8,0,0,0,
32,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
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
69,88,132,11,0,0,
80,0,0,0,225,2,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,1,0,0,0,
5,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,90,0,
0,3,0,96,16,0,
3,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,88,24,0,4,
0,112,16,0,3,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,3,0,
0,0,50,0,0,14,
242,0,16,0,0,0,
0,0,230,142,32,128,
65,0,0,0,1,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,0,0,
0,0,0,0,0,0,
128,63,70,20,16,0,
0,0,0,0,50,0,
0,14,50,0,16,0,
1,0,0,0,230,138,
32,128,65,0,0,0,
1,0,0,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
128,63,0,0,0,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
18,0,16,0,1,0,
0,0,70,0,16,0,
1,0,0,0,54,121,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,34,0,16,0,
1,0,0,0,70,0,
16,0,0,0,0,0,
198,121,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,56,0,
0,7,66,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,66,0,16,0,
0,0,0,0,230,10,
16,0,0,0,0,0,
70,123,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,50,0,
0,13,50,0,16,0,
0,0,0,0,230,138,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,128,63,0,0,
0,0,0,0,0,0,
70,0,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,18,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
54,121,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,50,0,
0,13,242,0,16,0,
2,0,0,0,230,142,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,0,0,0,0,
0,0,0,0,128,63,
70,20,16,0,0,0,
0,0,50,0,0,14,
162,0,16,0,0,0,
0,0,166,142,32,128,
65,0,0,0,1,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,63,6,4,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,34,0,
16,0,0,0,0,0,
214,5,16,0,0,0,
0,0,198,121,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
56,0,0,7,130,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,56,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,56,0,0,7,
34,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
18,0,16,0,1,0,
0,0,70,0,16,0,
2,0,0,0,54,121,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,56,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
50,0,0,9,130,0,
16,0,0,0,0,0,
42,0,16,0,1,0,
0,0,42,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
29,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
95,112,137,48,50,0,
0,13,194,0,16,0,
1,0,0,0,166,142,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,128,63,
6,4,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,18,0,16,0,
2,0,0,0,230,10,
16,0,2,0,0,0,
54,121,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,66,0,
16,0,1,0,0,0,
230,10,16,0,1,0,
0,0,70,123,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
56,0,0,7,130,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,56,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
42,0,16,0,1,0,
0,0,29,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,95,112,137,48,
50,0,0,9,130,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,10,0,16,0,
2,0,0,0,58,0,
16,0,0,0,0,0,
56,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,10,0,16,0,
2,0,0,0,29,0,
0,7,66,0,16,0,
1,0,0,0,10,0,
16,0,2,0,0,0,
1,64,0,0,95,112,
137,48,50,0,0,9,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,29,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,95,112,137,48,
32,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,29,0,
0,7,130,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
1,64,0,0,95,112,
137,48,1,0,0,10,
226,0,16,0,0,0,
0,0,86,14,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
29,0,0,7,130,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
95,112,137,48,1,0,
0,10,194,0,16,0,
1,0,0,0,166,14,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,128,63,0,0,
128,63,0,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,0,0,
0,7,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
166,10,16,0,1,0,
0,0,0,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
49,0,0,8,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,26,128,32,0,
1,0,0,0,3,0,
0,0,1,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
50,0,0,14,242,0,
16,0,2,0,0,0,
230,142,32,128,65,0,
0,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,0,0,0,
64,64,0,0,0,0,
70,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,34,0,16,0,
0,0,0,0,230,10,
16,0,2,0,0,0,
198,121,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,130,0,
16,0,0,0,0,0,
70,0,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
56,0,0,7,34,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,56,0,
0,7,162,0,16,0,
0,0,0,0,86,5,
16,0,1,0,0,0,
86,13,16,0,0,0,
0,0,56,0,0,7,
130,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
56,0,0,7,34,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,29,0,
0,10,162,0,16,0,
0,0,0,0,86,13,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,95,112,137,48,
0,0,0,0,95,112,
137,48,1,0,0,10,
162,0,16,0,0,0,
0,0,86,13,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,128,63,0,0,
0,0,0,0,128,63,
0,0,0,7,34,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,50,0,
0,13,242,0,16,0,
2,0,0,0,230,142,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,0,0,0,
64,64,0,0,0,0,
70,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,130,0,16,0,
0,0,0,0,70,0,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,66,0,
16,0,1,0,0,0,
230,10,16,0,2,0,
0,0,70,123,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
56,0,0,7,34,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,56,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,56,0,0,7,
130,0,16,0,0,0,
0,0,42,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
29,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
95,112,137,48,1,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,29,0,0,7,
18,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,1,64,
0,0,95,112,137,48,
1,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,0,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,0,0,0,7,
34,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
56,0,0,7,34,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,49,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,24,0,0,8,
66,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,42,128,
32,0,1,0,0,0,
3,0,0,0,1,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,60,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
226,0,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,54,121,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,55,0,
0,9,114,0,16,0,
0,0,0,0,6,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,150,7,16,0,
0,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,16,0,0,10,
18,0,16,0,1,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
0,0,0,8,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,128,
65,0,0,0,1,0,
0,0,0,0,0,9,
114,0,16,0,1,0,
0,0,70,2,16,128,
65,0,0,0,0,0,
0,0,246,15,16,128,
129,0,0,0,0,0,
0,0,50,0,0,10,
114,0,16,0,0,0,
0,0,246,143,32,0,
1,0,0,0,3,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
47,0,0,5,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,0,0,0,8,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,10,128,
32,0,1,0,0,0,
4,0,0,0,14,0,
0,10,130,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
58,0,16,0,0,0,
0,0,56,0,0,7,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,246,15,
16,0,0,0,0,0,
25,0,0,5,114,32,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,82,0,
0,0,3,0,0,0,
0,0,0,0,2,0,
0,0,56,0,0,0,
1,0,0,0,8,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
14,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,0,0,
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
class DitheringShadersSgenptMixSgenptMixPass5ShaderDef : public ShaderDef
{
public:
	DitheringShadersSgenptMixSgenptMixPass5ShaderDef() : ShaderDef{}
	{
		Name = "sgenpt-mix-pass5";
		VertexByteCode = RetroArchDitheringShadersSgenptMixSgenptMixPass5ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchDitheringShadersSgenptMixSgenptMixPass5ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchDitheringShadersSgenptMixSgenptMixPass5ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchDitheringShadersSgenptMixSgenptMixPass5ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("VL_MITIG_NEIGHBRS", -1, 52, 4, 0.000000f, 4.000000f, 1.000000f, 1.000000f, "        VL - Mitigate Errors (neighbors)"));
		Params.push_back(ShaderParam("VL_MITIG_LINES", -1, 56, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "        VL - Mitigate Errors (regions)"));
		Params.push_back(ShaderParam("VL_ADJUST_VIEW", -1, 60, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "        VL - Adjust View"));
		Params.push_back(ShaderParam("UseGamma", -1, 64, 4, 0.000000f, 1.000000f, 1.000000f, 0.100000f, "    Gamma Slider"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Samplers.push_back(ShaderSampler("Source", 2));
		Samplers.push_back(ShaderSampler("CB_Output", 3));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}