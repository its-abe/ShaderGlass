/*
ShaderGlass shader eagle-shaders\2xsai imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/6f921ee4815a7894a33855974285b04545a4fa42/eagle/shaders/2xsai.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

 Default Vertex shader 
// Calculating texel coordinates
// Reading the texels
                2xSaI code                  
  Copied from the Dosbox source code        
  Copyright (C) 2002-2007  The DOSBox Team  
  License: GNU-GPL                          
  Adapted by guest(r) on 20.4 and 9.5. 2007 
// Distributing the final products

*/

#pragma once

namespace RetroArchEagleShaders2xsaiShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,7,90,
244,202,208,136,239,143,
61,205,42,234,171,96,
146,251,1,0,0,0,
160,3,0,0,5,0,
0,0,52,0,0,0,
60,1,0,0,136,1,
0,0,224,1,0,0,
4,3,0,0,82,68,
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
83,72,69,88,28,1,
0,0,80,0,1,0,
71,0,0,0,106,8,
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
56,0,0,10,50,32,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,2,64,0,0,
71,3,128,63,71,3,
128,63,0,0,0,0,
0,0,0,0,56,0,
0,8,242,0,16,0,
0,0,0,0,86,21,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,1,0,0,0,
50,0,0,10,242,0,
16,0,0,0,0,0,
6,16,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,0,0,
0,0,70,14,16,0,
0,0,0,0,50,0,
0,10,242,0,16,0,
0,0,0,0,166,26,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,2,0,0,0,
70,14,16,0,0,0,
0,0,50,0,0,10,
242,32,16,0,1,0,
0,0,246,31,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
6,0,0,0,1,0,
0,0,0,0,0,0,
4,0,0,0,5,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
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
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,36,98,
202,213,131,66,73,181,
166,132,72,144,52,221,
21,125,1,0,0,0,
16,24,0,0,5,0,
0,0,52,0,0,0,
20,2,0,0,96,2,
0,0,148,2,0,0,
116,23,0,0,82,68,
69,70,216,1,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
174,1,0,0,82,68,
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
0,0,3,0,0,0,
208,0,0,0,48,0,
0,0,0,0,0,0,
0,0,0,0,72,1,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,100,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,136,1,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
100,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
156,1,0,0,32,0,
0,0,16,0,0,0,
2,0,0,0,100,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,97,
114,97,109,115,95,79,
117,116,112,117,116,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,90,1,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,112,97,
114,97,109,115,95,83,
111,117,114,99,101,83,
105,122,101,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,171,171,73,83,
71,78,68,0,0,0,
2,0,0,0,8,0,
0,0,56,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,3,
0,0,56,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,12,0,
0,0,84,69,88,67,
79,79,82,68,0,171,
171,171,79,83,71,78,
44,0,0,0,1,0,
0,0,8,0,0,0,
32,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,15,0,0,0,
83,86,95,84,97,114,
103,101,116,0,171,171,
83,72,69,88,216,20,
0,0,80,0,0,0,
54,5,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,3,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,15,0,0,0,
56,0,0,8,50,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,128,32,0,
1,0,0,0,2,0,
0,0,26,0,0,5,
194,0,16,0,0,0,
0,0,86,1,16,0,
0,0,0,0,29,0,
0,10,50,0,16,0,
1,0,0,0,182,15,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,0,0,0,
0,0,49,0,0,10,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,63,0,0,0,63,
1,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,56,0,
0,11,242,0,16,0,
2,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,191,0,0,
128,191,0,0,128,63,
230,142,32,0,1,0,
0,0,2,0,0,0,
55,0,0,9,194,0,
16,0,1,0,0,0,
166,10,16,0,1,0,
0,0,6,4,16,0,
2,0,0,0,166,14,
16,0,2,0,0,0,
65,0,0,5,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,14,0,0,8,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,70,128,
32,0,1,0,0,0,
2,0,0,0,50,0,
0,13,50,0,16,0,
2,0,0,0,230,138,
32,0,1,0,0,0,
2,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,0,0,0,0,0,
70,0,16,0,0,0,
0,0,0,0,0,8,
194,0,16,0,2,0,
0,0,6,4,16,0,
2,0,0,0,166,142,
32,0,1,0,0,0,
2,0,0,0,50,0,
0,12,50,0,16,0,
0,0,0,0,230,10,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,0,0,0,
0,0,70,0,16,0,
0,0,0,0,0,0,
0,8,50,0,16,0,
3,0,0,0,230,10,
16,128,65,0,0,0,
1,0,0,0,70,0,
16,0,0,0,0,0,
0,0,0,8,194,0,
16,0,3,0,0,0,
6,4,16,0,3,0,
0,0,166,142,32,0,
1,0,0,0,2,0,
0,0,0,0,0,8,
50,0,16,0,4,0,
0,0,70,0,16,0,
0,0,0,0,230,138,
32,0,1,0,0,0,
2,0,0,0,0,0,
0,8,194,0,16,0,
4,0,0,0,166,14,
16,128,65,0,0,0,
1,0,0,0,6,4,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,230,10,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
6,0,0,0,70,0,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,7,0,0,0,
70,0,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,8,0,
0,0,230,10,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,7,
50,0,16,0,0,0,
0,0,230,10,16,0,
1,0,0,0,70,0,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,9,0,
0,0,70,0,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
10,0,0,0,70,0,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,11,0,0,0,
230,10,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,7,50,0,
16,0,0,0,0,0,
230,10,16,0,1,0,
0,0,70,0,16,0,
4,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,12,0,0,0,
70,0,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
16,0,0,10,18,0,
16,0,0,0,0,0,
70,2,16,0,5,0,
0,0,2,64,0,0,
0,0,128,71,0,0,
128,67,0,0,128,63,
0,0,0,0,16,0,
0,10,34,0,16,0,
0,0,0,0,70,2,
16,0,6,0,0,0,
2,64,0,0,0,0,
128,71,0,0,128,67,
0,0,128,63,0,0,
0,0,16,0,0,10,
66,0,16,0,4,0,
0,0,70,2,16,0,
7,0,0,0,2,64,
0,0,0,0,128,71,
0,0,128,67,0,0,
128,63,0,0,0,0,
16,0,0,10,130,0,
16,0,4,0,0,0,
70,2,16,0,8,0,
0,0,2,64,0,0,
0,0,128,71,0,0,
128,67,0,0,128,63,
0,0,0,0,16,0,
0,10,18,0,16,0,
5,0,0,0,70,2,
16,0,9,0,0,0,
2,64,0,0,0,0,
128,71,0,0,128,67,
0,0,128,63,0,0,
0,0,16,0,0,10,
34,0,16,0,5,0,
0,0,70,2,16,0,
10,0,0,0,2,64,
0,0,0,0,128,71,
0,0,128,67,0,0,
128,63,0,0,0,0,
16,0,0,10,66,0,
16,0,5,0,0,0,
70,2,16,0,11,0,
0,0,2,64,0,0,
0,0,128,71,0,0,
128,67,0,0,128,63,
0,0,0,0,16,0,
0,10,130,0,16,0,
5,0,0,0,70,2,
16,0,12,0,0,0,
2,64,0,0,0,0,
128,71,0,0,128,67,
0,0,128,63,0,0,
0,0,24,0,0,7,
18,0,16,0,6,0,
0,0,42,0,16,0,
4,0,0,0,42,0,
16,0,5,0,0,0,
31,0,4,3,10,0,
16,0,6,0,0,0,
0,0,0,8,50,0,
16,0,4,0,0,0,
70,0,16,0,4,0,
0,0,230,138,32,0,
1,0,0,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
6,0,0,0,70,0,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,18,0,16,0,
4,0,0,0,70,2,
16,0,6,0,0,0,
2,64,0,0,0,0,
128,71,0,0,128,67,
0,0,128,63,0,0,
0,0,57,0,0,7,
34,0,16,0,4,0,
0,0,58,0,16,0,
4,0,0,0,26,0,
16,0,5,0,0,0,
31,0,4,3,26,0,
16,0,4,0,0,0,
24,0,0,7,34,0,
16,0,4,0,0,0,
26,0,16,0,0,0,
0,0,42,0,16,0,
4,0,0,0,24,0,
0,7,18,0,16,0,
6,0,0,0,10,0,
16,0,4,0,0,0,
26,0,16,0,5,0,
0,0,1,0,0,7,
34,0,16,0,4,0,
0,0,26,0,16,0,
4,0,0,0,10,0,
16,0,6,0,0,0,
24,0,0,7,18,0,
16,0,6,0,0,0,
58,0,16,0,4,0,
0,0,42,0,16,0,
4,0,0,0,24,0,
0,7,34,0,16,0,
6,0,0,0,42,0,
16,0,4,0,0,0,
10,0,16,0,5,0,
0,0,1,0,0,7,
18,0,16,0,6,0,
0,0,26,0,16,0,
6,0,0,0,10,0,
16,0,6,0,0,0,
57,0,0,7,34,0,
16,0,6,0,0,0,
26,0,16,0,0,0,
0,0,26,0,16,0,
5,0,0,0,1,0,
0,7,18,0,16,0,
6,0,0,0,26,0,
16,0,6,0,0,0,
10,0,16,0,6,0,
0,0,24,0,0,7,
34,0,16,0,6,0,
0,0,58,0,16,0,
5,0,0,0,26,0,
16,0,5,0,0,0,
1,0,0,7,18,0,
16,0,6,0,0,0,
26,0,16,0,6,0,
0,0,10,0,16,0,
6,0,0,0,55,0,
0,9,34,0,16,0,
4,0,0,0,26,0,
16,0,4,0,0,0,
26,0,16,0,4,0,
0,0,10,0,16,0,
6,0,0,0,0,0,
0,7,114,0,16,0,
6,0,0,0,70,2,
16,0,7,0,0,0,
70,2,16,0,10,0,
0,0,56,0,0,10,
114,0,16,0,6,0,
0,0,70,2,16,0,
6,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,0,
55,0,0,9,114,0,
16,0,6,0,0,0,
86,5,16,0,4,0,
0,0,70,2,16,0,
7,0,0,0,70,2,
16,0,6,0,0,0,
54,0,0,5,114,0,
16,0,9,0,0,0,
70,2,16,0,7,0,
0,0,18,0,0,1,
24,0,0,7,34,0,
16,0,4,0,0,0,
58,0,16,0,4,0,
0,0,42,0,16,0,
4,0,0,0,31,0,
4,3,26,0,16,0,
4,0,0,0,54,0,
0,5,114,0,16,0,
6,0,0,0,70,2,
16,0,7,0,0,0,
54,0,0,5,114,0,
16,0,9,0,0,0,
70,2,16,0,7,0,
0,0,18,0,0,1,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,12,0,
0,0,70,0,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
50,0,16,0,3,0,
0,0,230,10,16,128,
65,0,0,0,1,0,
0,0,230,10,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,13,0,0,0,
70,0,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,50,0,
16,0,3,0,0,0,
230,10,16,0,3,0,
0,0,230,138,32,0,
1,0,0,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,0,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,7,194,0,16,0,
1,0,0,0,166,14,
16,0,1,0,0,0,
166,14,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
14,0,0,0,230,10,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,66,0,16,0,
1,0,0,0,70,2,
16,0,12,0,0,0,
2,64,0,0,0,0,
128,71,0,0,128,67,
0,0,128,63,0,0,
0,0,16,0,0,10,
130,0,16,0,1,0,
0,0,70,2,16,0,
14,0,0,0,2,64,
0,0,0,0,128,71,
0,0,128,67,0,0,
128,63,0,0,0,0,
16,0,0,10,66,0,
16,0,2,0,0,0,
70,2,16,0,13,0,
0,0,2,64,0,0,
0,0,128,71,0,0,
128,67,0,0,128,63,
0,0,0,0,16,0,
0,10,130,0,16,0,
2,0,0,0,70,2,
16,0,3,0,0,0,
2,64,0,0,0,0,
128,71,0,0,128,67,
0,0,128,63,0,0,
0,0,0,0,0,8,
18,0,16,0,3,0,
0,0,26,0,16,128,
65,0,0,0,0,0,
0,0,42,0,16,0,
4,0,0,0,0,0,
0,8,34,0,16,0,
3,0,0,0,42,0,
16,128,65,0,0,0,
1,0,0,0,42,0,
16,0,4,0,0,0,
0,0,0,9,18,0,
16,0,3,0,0,0,
26,0,16,128,129,0,
0,0,3,0,0,0,
10,0,16,128,129,0,
0,0,3,0,0,0,
49,0,0,7,18,0,
16,0,3,0,0,0,
1,64,0,0,0,0,
0,0,10,0,16,0,
3,0,0,0,0,0,
0,8,34,0,16,0,
3,0,0,0,26,0,
16,128,65,0,0,0,
0,0,0,0,58,0,
16,0,4,0,0,0,
0,0,0,8,66,0,
16,0,1,0,0,0,
42,0,16,128,65,0,
0,0,1,0,0,0,
58,0,16,0,4,0,
0,0,0,0,0,9,
66,0,16,0,1,0,
0,0,42,0,16,128,
129,0,0,0,1,0,
0,0,26,0,16,128,
129,0,0,0,3,0,
0,0,49,0,0,7,
66,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
30,0,0,8,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,10,0,16,128,
65,0,0,0,3,0,
0,0,43,0,0,5,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,0,0,
0,8,18,0,16,0,
3,0,0,0,42,0,
16,128,65,0,0,0,
2,0,0,0,58,0,
16,0,4,0,0,0,
0,0,0,8,34,0,
16,0,3,0,0,0,
10,0,16,128,65,0,
0,0,0,0,0,0,
58,0,16,0,4,0,
0,0,0,0,0,9,
18,0,16,0,3,0,
0,0,26,0,16,128,
129,0,0,0,3,0,
0,0,10,0,16,128,
129,0,0,0,3,0,
0,0,49,0,0,7,
18,0,16,0,3,0,
0,0,1,64,0,0,
0,0,0,0,10,0,
16,0,3,0,0,0,
0,0,0,8,66,0,
16,0,2,0,0,0,
42,0,16,128,65,0,
0,0,2,0,0,0,
42,0,16,0,4,0,
0,0,0,0,0,8,
34,0,16,0,3,0,
0,0,10,0,16,128,
65,0,0,0,0,0,
0,0,42,0,16,0,
4,0,0,0,0,0,
0,9,66,0,16,0,
2,0,0,0,42,0,
16,128,129,0,0,0,
2,0,0,0,26,0,
16,128,129,0,0,0,
3,0,0,0,49,0,
0,7,66,0,16,0,
2,0,0,0,1,64,
0,0,0,0,0,0,
42,0,16,0,2,0,
0,0,30,0,0,8,
66,0,16,0,2,0,
0,0,42,0,16,0,
2,0,0,0,10,0,
16,128,65,0,0,0,
3,0,0,0,43,0,
0,5,66,0,16,0,
2,0,0,0,42,0,
16,0,2,0,0,0,
0,0,0,8,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,42,0,16,128,
65,0,0,0,2,0,
0,0,0,0,0,8,
66,0,16,0,2,0,
0,0,58,0,16,0,
4,0,0,0,10,0,
16,128,65,0,0,0,
5,0,0,0,0,0,
0,8,18,0,16,0,
3,0,0,0,58,0,
16,128,65,0,0,0,
1,0,0,0,58,0,
16,0,4,0,0,0,
0,0,0,9,66,0,
16,0,2,0,0,0,
42,0,16,128,129,0,
0,0,2,0,0,0,
10,0,16,128,129,0,
0,0,3,0,0,0,
49,0,0,7,66,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,0,42,0,16,0,
2,0,0,0,0,0,
0,8,18,0,16,0,
3,0,0,0,42,0,
16,0,4,0,0,0,
10,0,16,128,65,0,
0,0,5,0,0,0,
0,0,0,8,130,0,
16,0,1,0,0,0,
58,0,16,128,65,0,
0,0,1,0,0,0,
42,0,16,0,4,0,
0,0,0,0,0,9,
130,0,16,0,1,0,
0,0,58,0,16,128,
129,0,0,0,1,0,
0,0,10,0,16,128,
129,0,0,0,3,0,
0,0,49,0,0,7,
130,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
30,0,0,8,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,42,0,16,128,
65,0,0,0,2,0,
0,0,43,0,0,5,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,0,0,
0,8,66,0,16,0,
1,0,0,0,58,0,
16,128,65,0,0,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
0,0,0,8,130,0,
16,0,1,0,0,0,
58,0,16,128,65,0,
0,0,2,0,0,0,
42,0,16,0,4,0,
0,0,0,0,0,8,
66,0,16,0,2,0,
0,0,10,0,16,128,
65,0,0,0,4,0,
0,0,42,0,16,0,
4,0,0,0,0,0,
0,9,130,0,16,0,
1,0,0,0,58,0,
16,128,129,0,0,0,
1,0,0,0,42,0,
16,128,129,0,0,0,
2,0,0,0,49,0,
0,7,130,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,0,
58,0,16,0,1,0,
0,0,0,0,0,8,
66,0,16,0,2,0,
0,0,58,0,16,128,
65,0,0,0,2,0,
0,0,58,0,16,0,
4,0,0,0,0,0,
0,8,130,0,16,0,
2,0,0,0,10,0,
16,128,65,0,0,0,
4,0,0,0,58,0,
16,0,4,0,0,0,
0,0,0,9,66,0,
16,0,2,0,0,0,
58,0,16,128,129,0,
0,0,2,0,0,0,
42,0,16,128,129,0,
0,0,2,0,0,0,
49,0,0,7,66,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,0,42,0,16,0,
2,0,0,0,30,0,
0,8,130,0,16,0,
1,0,0,0,58,0,
16,128,65,0,0,0,
1,0,0,0,42,0,
16,0,2,0,0,0,
43,0,0,5,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,0,0,0,7,
66,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
49,0,0,7,130,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,0,42,0,16,0,
1,0,0,0,49,0,
0,7,66,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,0,0,0,0,7,
114,0,16,0,3,0,
0,0,70,2,16,0,
7,0,0,0,70,2,
16,0,8,0,0,0,
0,0,0,7,114,0,
16,0,3,0,0,0,
70,2,16,0,10,0,
0,0,70,2,16,0,
3,0,0,0,0,0,
0,7,114,0,16,0,
3,0,0,0,70,2,
16,0,11,0,0,0,
70,2,16,0,3,0,
0,0,56,0,0,10,
114,0,16,0,3,0,
0,0,70,2,16,0,
3,0,0,0,2,64,
0,0,0,0,128,62,
0,0,128,62,0,0,
128,62,0,0,0,0,
55,0,0,9,114,0,
16,0,3,0,0,0,
166,10,16,0,1,0,
0,0,70,2,16,0,
8,0,0,0,70,2,
16,0,3,0,0,0,
55,0,0,9,114,0,
16,0,9,0,0,0,
246,15,16,0,1,0,
0,0,70,2,16,0,
7,0,0,0,70,2,
16,0,3,0,0,0,
0,0,0,7,114,0,
16,0,3,0,0,0,
70,2,16,0,7,0,
0,0,70,2,16,0,
10,0,0,0,56,0,
0,10,114,0,16,0,
6,0,0,0,70,2,
16,0,3,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,0,21,0,0,1,
21,0,0,1,18,0,
0,1,0,0,0,9,
194,0,16,0,1,0,
0,0,6,4,16,0,
2,0,0,0,166,142,
32,128,65,0,0,0,
1,0,0,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,230,10,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,66,0,16,0,
1,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,0,0,
128,71,0,0,128,67,
0,0,128,63,0,0,
0,0,24,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
4,0,0,0,26,0,
16,0,5,0,0,0,
24,0,0,7,50,0,
16,0,2,0,0,0,
134,0,16,0,5,0,
0,0,86,5,16,0,
5,0,0,0,24,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
42,0,16,0,4,0,
0,0,1,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,10,0,
16,0,2,0,0,0,
24,0,0,7,18,0,
16,0,2,0,0,0,
26,0,16,0,0,0,
0,0,26,0,16,0,
5,0,0,0,1,0,
0,7,18,0,16,0,
2,0,0,0,26,0,
16,0,2,0,0,0,
10,0,16,0,2,0,
0,0,57,0,0,7,
34,0,16,0,2,0,
0,0,42,0,16,0,
4,0,0,0,10,0,
16,0,5,0,0,0,
1,0,0,7,18,0,
16,0,2,0,0,0,
26,0,16,0,2,0,
0,0,10,0,16,0,
2,0,0,0,24,0,
0,7,66,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
42,0,16,0,4,0,
0,0,1,0,0,7,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,10,0,
16,0,2,0,0,0,
55,0,0,9,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
0,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,7,0,
0,0,70,2,16,0,
10,0,0,0,56,0,
0,10,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,0,55,0,0,9,
114,0,16,0,3,0,
0,0,6,0,16,0,
0,0,0,0,70,2,
16,0,10,0,0,0,
70,2,16,0,2,0,
0,0,0,0,0,7,
114,0,16,0,12,0,
0,0,70,2,16,0,
7,0,0,0,70,2,
16,0,8,0,0,0,
0,0,0,7,114,0,
16,0,12,0,0,0,
70,2,16,0,10,0,
0,0,70,2,16,0,
12,0,0,0,0,0,
0,7,114,0,16,0,
11,0,0,0,70,2,
16,0,11,0,0,0,
70,2,16,0,12,0,
0,0,56,0,0,10,
114,0,16,0,11,0,
0,0,70,2,16,0,
11,0,0,0,2,64,
0,0,0,0,128,62,
0,0,128,62,0,0,
128,62,0,0,0,0,
24,0,0,7,18,0,
16,0,0,0,0,0,
58,0,16,0,4,0,
0,0,42,0,16,0,
4,0,0,0,24,0,
0,7,130,0,16,0,
2,0,0,0,42,0,
16,0,4,0,0,0,
10,0,16,0,5,0,
0,0,1,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,58,0,
16,0,2,0,0,0,
57,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,26,0,16,0,
5,0,0,0,1,0,
0,7,18,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,24,0,0,7,
34,0,16,0,0,0,
0,0,58,0,16,0,
5,0,0,0,26,0,
16,0,5,0,0,0,
1,0,0,7,18,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,55,0,
0,9,114,0,16,0,
2,0,0,0,166,10,
16,0,1,0,0,0,
70,2,16,0,10,0,
0,0,70,2,16,0,
2,0,0,0,55,0,
0,9,114,0,16,0,
2,0,0,0,6,0,
16,0,0,0,0,0,
70,2,16,0,7,0,
0,0,70,2,16,0,
2,0,0,0,55,0,
0,9,114,0,16,0,
6,0,0,0,246,15,
16,0,1,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
2,0,0,0,55,0,
0,9,114,0,16,0,
9,0,0,0,246,15,
16,0,1,0,0,0,
70,2,16,0,8,0,
0,0,70,2,16,0,
11,0,0,0,21,0,
0,1,1,0,0,7,
18,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,0,0,7,34,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,55,0,
0,9,226,0,16,0,
0,0,0,0,86,5,
16,0,0,0,0,0,
6,9,16,0,7,0,
0,0,6,9,16,0,
6,0,0,0,55,0,
0,9,114,32,16,0,
0,0,0,0,6,0,
16,0,0,0,0,0,
70,2,16,0,9,0,
0,0,150,7,16,0,
0,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
62,0,0,1,83,84,
65,84,148,0,0,0,
168,0,0,0,15,0,
0,0,0,0,0,0,
2,0,0,0,105,0,
0,0,4,0,0,0,
14,0,0,0,4,0,
0,0,3,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,14,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,4,0,
0,0,13,0,0,0,
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
0,0,0,0
};

}

namespace RetroArch
{
class EagleShaders2xsaiShaderDef : public ShaderDef
{
public:
	EagleShaders2xsaiShaderDef() : ShaderDef{}
	{
		Name = "2xsai";
		VertexByteCode = RetroArchEagleShaders2xsaiShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchEagleShaders2xsaiShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchEagleShaders2xsaiShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchEagleShaders2xsaiShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
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