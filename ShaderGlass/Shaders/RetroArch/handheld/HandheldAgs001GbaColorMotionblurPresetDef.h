/*
ShaderGlass preset handheld / ags001-gba-color-motionblur imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/handheld/ags001-gba-color-motionblur.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldAgs001GbaColorMotionblurPresetDef : public PresetDef
{
public:
	HandheldAgs001GbaColorMotionblurPresetDef() : PresetDef{}
	{
		Name = "ags001-gba-color-motionblur";
		Category = "handheld";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MotionblurShadersResponseTimeShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersMgbaAgs001ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "4.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersColorGbaColorShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersMgbaAgs001LightShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}