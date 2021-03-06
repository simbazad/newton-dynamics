/*
Copyright 2018 Ioannis Makris

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

// This file was generated by glatter.py script.



#ifdef GLATTER_GLU
#if defined(__glu_h__)
#ifndef gluBeginCurve_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluBeginCurve, (nurb), (GLUnurbs* nurb))
GLATTER_INLINE_OR_NOT void glatter_gluBeginCurve_debug(GLUnurbs* nurb, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluBeginCurve, "(%p)", (void*)nurb)
    glatter_gluBeginCurve(nurb);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluBeginCurve_defined
#endif
#ifndef gluBeginPolygon_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluBeginPolygon, (tess), (GLUtesselator* tess))
GLATTER_INLINE_OR_NOT void glatter_gluBeginPolygon_debug(GLUtesselator* tess, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluBeginPolygon, "(%p)", (void*)tess)
    glatter_gluBeginPolygon(tess);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluBeginPolygon_defined
#endif
#ifndef gluBeginSurface_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluBeginSurface, (nurb), (GLUnurbs* nurb))
GLATTER_INLINE_OR_NOT void glatter_gluBeginSurface_debug(GLUnurbs* nurb, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluBeginSurface, "(%p)", (void*)nurb)
    glatter_gluBeginSurface(nurb);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluBeginSurface_defined
#endif
#ifndef gluBeginTrim_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluBeginTrim, (nurb), (GLUnurbs* nurb))
GLATTER_INLINE_OR_NOT void glatter_gluBeginTrim_debug(GLUnurbs* nurb, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluBeginTrim, "(%p)", (void*)nurb)
    glatter_gluBeginTrim(nurb);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluBeginTrim_defined
#endif
GLATTER_FBLOCK(return, GLU, GLAPI, GLint, GLAPIENTRY, gluBuild1DMipmapLevels, (target, internalFormat, width, format, type, level, base, max, data), (GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data))
GLATTER_INLINE_OR_NOT GLint glatter_gluBuild1DMipmapLevels_debug(GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluBuild1DMipmapLevels, "(%s, %d, %d, %s, %s, %d, %d, %d, %p)", enum_to_string_GL(target), (int)internalFormat, (int)width, enum_to_string_GL(format), enum_to_string_GL(type), (int)level, (int)base, (int)max, (void*)data)
    GLint rval = glatter_gluBuild1DMipmapLevels(target, internalFormat, width, format, type, level, base, max, data);
    GLATTER_RBLOCK("%d\n", (int)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluBuild1DMipmapLevels_defined
#ifndef gluBuild1DMipmaps_defined
GLATTER_FBLOCK(return, GLU, GLAPI, GLint, GLAPIENTRY, gluBuild1DMipmaps, (target, internalFormat, width, format, type, data), (GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, const void *data))
GLATTER_INLINE_OR_NOT GLint glatter_gluBuild1DMipmaps_debug(GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, const void *data, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluBuild1DMipmaps, "(%s, %d, %d, %s, %s, %p)", enum_to_string_GL(target), (int)internalFormat, (int)width, enum_to_string_GL(format), enum_to_string_GL(type), (void*)data)
    GLint rval = glatter_gluBuild1DMipmaps(target, internalFormat, width, format, type, data);
    GLATTER_RBLOCK("%d\n", (int)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluBuild1DMipmaps_defined
#endif
GLATTER_FBLOCK(return, GLU, GLAPI, GLint, GLAPIENTRY, gluBuild2DMipmapLevels, (target, internalFormat, width, height, format, type, level, base, max, data), (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data))
GLATTER_INLINE_OR_NOT GLint glatter_gluBuild2DMipmapLevels_debug(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluBuild2DMipmapLevels, "(%s, %d, %d, %d, %s, %s, %d, %d, %d, %p)", enum_to_string_GL(target), (int)internalFormat, (int)width, (int)height, enum_to_string_GL(format), enum_to_string_GL(type), (int)level, (int)base, (int)max, (void*)data)
    GLint rval = glatter_gluBuild2DMipmapLevels(target, internalFormat, width, height, format, type, level, base, max, data);
    GLATTER_RBLOCK("%d\n", (int)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluBuild2DMipmapLevels_defined
#ifndef gluBuild2DMipmaps_defined
GLATTER_FBLOCK(return, GLU, GLAPI, GLint, GLAPIENTRY, gluBuild2DMipmaps, (target, internalFormat, width, height, format, type, data), (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *data))
GLATTER_INLINE_OR_NOT GLint glatter_gluBuild2DMipmaps_debug(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *data, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluBuild2DMipmaps, "(%s, %d, %d, %d, %s, %s, %p)", enum_to_string_GL(target), (int)internalFormat, (int)width, (int)height, enum_to_string_GL(format), enum_to_string_GL(type), (void*)data)
    GLint rval = glatter_gluBuild2DMipmaps(target, internalFormat, width, height, format, type, data);
    GLATTER_RBLOCK("%d\n", (int)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluBuild2DMipmaps_defined
#endif
GLATTER_FBLOCK(return, GLU, GLAPI, GLint, GLAPIENTRY, gluBuild3DMipmapLevels, (target, internalFormat, width, height, depth, format, type, level, base, max, data), (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data))
GLATTER_INLINE_OR_NOT GLint glatter_gluBuild3DMipmapLevels_debug(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluBuild3DMipmapLevels, "(%s, %d, %d, %d, %d, %s, %s, %d, %d, %d, %p)", enum_to_string_GL(target), (int)internalFormat, (int)width, (int)height, (int)depth, enum_to_string_GL(format), enum_to_string_GL(type), (int)level, (int)base, (int)max, (void*)data)
    GLint rval = glatter_gluBuild3DMipmapLevels(target, internalFormat, width, height, depth, format, type, level, base, max, data);
    GLATTER_RBLOCK("%d\n", (int)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluBuild3DMipmapLevels_defined
GLATTER_FBLOCK(return, GLU, GLAPI, GLint, GLAPIENTRY, gluBuild3DMipmaps, (target, internalFormat, width, height, depth, format, type, data), (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data))
GLATTER_INLINE_OR_NOT GLint glatter_gluBuild3DMipmaps_debug(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluBuild3DMipmaps, "(%s, %d, %d, %d, %d, %s, %s, %p)", enum_to_string_GL(target), (int)internalFormat, (int)width, (int)height, (int)depth, enum_to_string_GL(format), enum_to_string_GL(type), (void*)data)
    GLint rval = glatter_gluBuild3DMipmaps(target, internalFormat, width, height, depth, format, type, data);
    GLATTER_RBLOCK("%d\n", (int)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluBuild3DMipmaps_defined
GLATTER_FBLOCK(return, GLU, GLAPI, GLboolean, GLAPIENTRY, gluCheckExtension, (extName, extString), (const GLubyte *extName, const GLubyte *extString))
GLATTER_INLINE_OR_NOT GLboolean glatter_gluCheckExtension_debug(const GLubyte *extName, const GLubyte *extString, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluCheckExtension, "(%p, %p)", (void*)extName, (void*)extString)
    GLboolean rval = glatter_gluCheckExtension(extName, extString);
    GLATTER_RBLOCK("%u\n", (unsigned char)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluCheckExtension_defined
#ifndef gluCylinder_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluCylinder, (quad, base, top, height, slices, stacks), (GLUquadric* quad, GLdouble base, GLdouble top, GLdouble height, GLint slices, GLint stacks))
GLATTER_INLINE_OR_NOT void glatter_gluCylinder_debug(GLUquadric* quad, GLdouble base, GLdouble top, GLdouble height, GLint slices, GLint stacks, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluCylinder, "(%p, %f, %f, %f, %d, %d)", (void*)quad, (double)base, (double)top, (double)height, (int)slices, (int)stacks)
    glatter_gluCylinder(quad, base, top, height, slices, stacks);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluCylinder_defined
#endif
#ifndef gluDeleteNurbsRenderer_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluDeleteNurbsRenderer, (nurb), (GLUnurbs* nurb))
GLATTER_INLINE_OR_NOT void glatter_gluDeleteNurbsRenderer_debug(GLUnurbs* nurb, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluDeleteNurbsRenderer, "(%p)", (void*)nurb)
    glatter_gluDeleteNurbsRenderer(nurb);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluDeleteNurbsRenderer_defined
#endif
#ifndef gluDeleteQuadric_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluDeleteQuadric, (quad), (GLUquadric* quad))
GLATTER_INLINE_OR_NOT void glatter_gluDeleteQuadric_debug(GLUquadric* quad, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluDeleteQuadric, "(%p)", (void*)quad)
    glatter_gluDeleteQuadric(quad);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluDeleteQuadric_defined
#endif
#ifndef gluDeleteTess_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluDeleteTess, (tess), (GLUtesselator* tess))
GLATTER_INLINE_OR_NOT void glatter_gluDeleteTess_debug(GLUtesselator* tess, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluDeleteTess, "(%p)", (void*)tess)
    glatter_gluDeleteTess(tess);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluDeleteTess_defined
#endif
#ifndef gluDisk_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluDisk, (quad, inner, outer, slices, loops), (GLUquadric* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops))
GLATTER_INLINE_OR_NOT void glatter_gluDisk_debug(GLUquadric* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluDisk, "(%p, %f, %f, %d, %d)", (void*)quad, (double)inner, (double)outer, (int)slices, (int)loops)
    glatter_gluDisk(quad, inner, outer, slices, loops);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluDisk_defined
#endif
#ifndef gluEndCurve_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluEndCurve, (nurb), (GLUnurbs* nurb))
GLATTER_INLINE_OR_NOT void glatter_gluEndCurve_debug(GLUnurbs* nurb, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluEndCurve, "(%p)", (void*)nurb)
    glatter_gluEndCurve(nurb);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluEndCurve_defined
#endif
#ifndef gluEndPolygon_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluEndPolygon, (tess), (GLUtesselator* tess))
GLATTER_INLINE_OR_NOT void glatter_gluEndPolygon_debug(GLUtesselator* tess, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluEndPolygon, "(%p)", (void*)tess)
    glatter_gluEndPolygon(tess);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluEndPolygon_defined
#endif
#ifndef gluEndSurface_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluEndSurface, (nurb), (GLUnurbs* nurb))
GLATTER_INLINE_OR_NOT void glatter_gluEndSurface_debug(GLUnurbs* nurb, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluEndSurface, "(%p)", (void*)nurb)
    glatter_gluEndSurface(nurb);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluEndSurface_defined
#endif
#ifndef gluEndTrim_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluEndTrim, (nurb), (GLUnurbs* nurb))
GLATTER_INLINE_OR_NOT void glatter_gluEndTrim_debug(GLUnurbs* nurb, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluEndTrim, "(%p)", (void*)nurb)
    glatter_gluEndTrim(nurb);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluEndTrim_defined
#endif
#ifndef gluErrorString_defined
GLATTER_FBLOCK(return, GLU, GLAPI, const GLubyte *, GLAPIENTRY, gluErrorString, (error), (GLenum error))
GLATTER_INLINE_OR_NOT const GLubyte * glatter_gluErrorString_debug(GLenum error, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluErrorString, "(%s)", enum_to_string_GL(error))
    const GLubyte * rval = glatter_gluErrorString(error);
    GLATTER_RBLOCK("%p\n", (void*)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluErrorString_defined
#endif
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluGetNurbsProperty, (nurb, property, data), (GLUnurbs* nurb, GLenum property, GLfloat* data))
GLATTER_INLINE_OR_NOT void glatter_gluGetNurbsProperty_debug(GLUnurbs* nurb, GLenum property, GLfloat* data, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluGetNurbsProperty, "(%p, %s, %p)", (void*)nurb, enum_to_string_GL(property), (void*)data)
    glatter_gluGetNurbsProperty(nurb, property, data);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluGetNurbsProperty_defined
#ifndef gluGetString_defined
GLATTER_FBLOCK(return, GLU, GLAPI, const GLubyte *, GLAPIENTRY, gluGetString, (name), (GLenum name))
GLATTER_INLINE_OR_NOT const GLubyte * glatter_gluGetString_debug(GLenum name, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluGetString, "(%s)", enum_to_string_GL(name))
    const GLubyte * rval = glatter_gluGetString(name);
    GLATTER_RBLOCK("%p\n", (void*)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluGetString_defined
#endif
#ifndef gluGetTessProperty_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluGetTessProperty, (tess, which, data), (GLUtesselator* tess, GLenum which, GLdouble* data))
GLATTER_INLINE_OR_NOT void glatter_gluGetTessProperty_debug(GLUtesselator* tess, GLenum which, GLdouble* data, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluGetTessProperty, "(%p, %s, %p)", (void*)tess, enum_to_string_GL(which), (void*)data)
    glatter_gluGetTessProperty(tess, which, data);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluGetTessProperty_defined
#endif
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluLoadSamplingMatrices, (nurb, model, perspective, view), (GLUnurbs* nurb, const GLfloat *model, const GLfloat *perspective, const GLint *view))
GLATTER_INLINE_OR_NOT void glatter_gluLoadSamplingMatrices_debug(GLUnurbs* nurb, const GLfloat *model, const GLfloat *perspective, const GLint *view, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluLoadSamplingMatrices, "(%p, %p, %p, %p)", (void*)nurb, (void*)model, (void*)perspective, (void*)view)
    glatter_gluLoadSamplingMatrices(nurb, model, perspective, view);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluLoadSamplingMatrices_defined
#ifndef gluLookAt_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluLookAt, (eyeX, eyeY, eyeZ, centerX, centerY, centerZ, upX, upY, upZ), (GLdouble eyeX, GLdouble eyeY, GLdouble eyeZ, GLdouble centerX, GLdouble centerY, GLdouble centerZ, GLdouble upX, GLdouble upY, GLdouble upZ))
GLATTER_INLINE_OR_NOT void glatter_gluLookAt_debug(GLdouble eyeX, GLdouble eyeY, GLdouble eyeZ, GLdouble centerX, GLdouble centerY, GLdouble centerZ, GLdouble upX, GLdouble upY, GLdouble upZ, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluLookAt, "(%f, %f, %f, %f, %f, %f, %f, %f, %f)", (double)eyeX, (double)eyeY, (double)eyeZ, (double)centerX, (double)centerY, (double)centerZ, (double)upX, (double)upY, (double)upZ)
    glatter_gluLookAt(eyeX, eyeY, eyeZ, centerX, centerY, centerZ, upX, upY, upZ);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluLookAt_defined
#endif
#ifndef gluNewNurbsRenderer_defined
GLATTER_FBLOCK(return, GLU, GLAPI, GLUnurbs*, GLAPIENTRY, gluNewNurbsRenderer, (), (void))
GLATTER_INLINE_OR_NOT GLUnurbs* glatter_gluNewNurbsRenderer_debug(const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluNewNurbsRenderer, "()")
    GLUnurbs* rval = glatter_gluNewNurbsRenderer();
    GLATTER_RBLOCK("%p\n", (void*)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluNewNurbsRenderer_defined
#endif
#ifndef gluNewQuadric_defined
GLATTER_FBLOCK(return, GLU, GLAPI, GLUquadric*, GLAPIENTRY, gluNewQuadric, (), (void))
GLATTER_INLINE_OR_NOT GLUquadric* glatter_gluNewQuadric_debug(const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluNewQuadric, "()")
    GLUquadric* rval = glatter_gluNewQuadric();
    GLATTER_RBLOCK("%p\n", (void*)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluNewQuadric_defined
#endif
#ifndef gluNewTess_defined
GLATTER_FBLOCK(return, GLU, GLAPI, GLUtesselator*, GLAPIENTRY, gluNewTess, (), (void))
GLATTER_INLINE_OR_NOT GLUtesselator* glatter_gluNewTess_debug(const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluNewTess, "()")
    GLUtesselator* rval = glatter_gluNewTess();
    GLATTER_RBLOCK("%p\n", (void*)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluNewTess_defined
#endif
#ifndef gluNextContour_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluNextContour, (tess, type), (GLUtesselator* tess, GLenum type))
GLATTER_INLINE_OR_NOT void glatter_gluNextContour_debug(GLUtesselator* tess, GLenum type, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluNextContour, "(%p, %s)", (void*)tess, enum_to_string_GL(type))
    glatter_gluNextContour(tess, type);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluNextContour_defined
#endif
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluNurbsCallback, (nurb, which, CallBackFunc), (GLUnurbs* nurb, GLenum which, _GLUfuncptr CallBackFunc))
GLATTER_INLINE_OR_NOT void glatter_gluNurbsCallback_debug(GLUnurbs* nurb, GLenum which, _GLUfuncptr CallBackFunc, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluNurbsCallback, "(%p, %s, %s)", (void*)nurb, enum_to_string_GL(which), GET_PRS(CallBackFunc))
    glatter_gluNurbsCallback(nurb, which, CallBackFunc);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluNurbsCallback_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluNurbsCallbackData, (nurb, userData), (GLUnurbs* nurb, GLvoid* userData))
GLATTER_INLINE_OR_NOT void glatter_gluNurbsCallbackData_debug(GLUnurbs* nurb, GLvoid* userData, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluNurbsCallbackData, "(%p, %p)", (void*)nurb, (void*)userData)
    glatter_gluNurbsCallbackData(nurb, userData);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluNurbsCallbackData_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluNurbsCallbackDataEXT, (nurb, userData), (GLUnurbs* nurb, GLvoid* userData))
GLATTER_INLINE_OR_NOT void glatter_gluNurbsCallbackDataEXT_debug(GLUnurbs* nurb, GLvoid* userData, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluNurbsCallbackDataEXT, "(%p, %p)", (void*)nurb, (void*)userData)
    glatter_gluNurbsCallbackDataEXT(nurb, userData);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluNurbsCallbackDataEXT_defined
#ifndef gluNurbsCurve_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluNurbsCurve, (nurb, knotCount, knots, stride, control, order, type), (GLUnurbs* nurb, GLint knotCount, GLfloat *knots, GLint stride, GLfloat *control, GLint order, GLenum type))
GLATTER_INLINE_OR_NOT void glatter_gluNurbsCurve_debug(GLUnurbs* nurb, GLint knotCount, GLfloat *knots, GLint stride, GLfloat *control, GLint order, GLenum type, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluNurbsCurve, "(%p, %d, %p, %d, %p, %d, %s)", (void*)nurb, (int)knotCount, (void*)knots, (int)stride, (void*)control, (int)order, enum_to_string_GL(type))
    glatter_gluNurbsCurve(nurb, knotCount, knots, stride, control, order, type);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluNurbsCurve_defined
#endif
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluNurbsProperty, (nurb, property, value), (GLUnurbs* nurb, GLenum property, GLfloat value))
GLATTER_INLINE_OR_NOT void glatter_gluNurbsProperty_debug(GLUnurbs* nurb, GLenum property, GLfloat value, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluNurbsProperty, "(%p, %s, %f)", (void*)nurb, enum_to_string_GL(property), (float)value)
    glatter_gluNurbsProperty(nurb, property, value);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluNurbsProperty_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluNurbsSurface, (nurb, sKnotCount, sKnots, tKnotCount, tKnots, sStride, tStride, control, sOrder, tOrder, type), (GLUnurbs* nurb, GLint sKnotCount, GLfloat* sKnots, GLint tKnotCount, GLfloat* tKnots, GLint sStride, GLint tStride, GLfloat* control, GLint sOrder, GLint tOrder, GLenum type))
GLATTER_INLINE_OR_NOT void glatter_gluNurbsSurface_debug(GLUnurbs* nurb, GLint sKnotCount, GLfloat* sKnots, GLint tKnotCount, GLfloat* tKnots, GLint sStride, GLint tStride, GLfloat* control, GLint sOrder, GLint tOrder, GLenum type, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluNurbsSurface, "(%p, %d, %p, %d, %p, %d, %d, %p, %d, %d, %s)", (void*)nurb, (int)sKnotCount, (void*)sKnots, (int)tKnotCount, (void*)tKnots, (int)sStride, (int)tStride, (void*)control, (int)sOrder, (int)tOrder, enum_to_string_GL(type))
    glatter_gluNurbsSurface(nurb, sKnotCount, sKnots, tKnotCount, tKnots, sStride, tStride, control, sOrder, tOrder, type);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluNurbsSurface_defined
#ifndef gluOrtho2D_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluOrtho2D, (left, right, bottom, top), (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top))
GLATTER_INLINE_OR_NOT void glatter_gluOrtho2D_debug(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluOrtho2D, "(%f, %f, %f, %f)", (double)left, (double)right, (double)bottom, (double)top)
    glatter_gluOrtho2D(left, right, bottom, top);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluOrtho2D_defined
#endif
#ifndef gluPartialDisk_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluPartialDisk, (quad, inner, outer, slices, loops, start, sweep), (GLUquadric* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops, GLdouble start, GLdouble sweep))
GLATTER_INLINE_OR_NOT void glatter_gluPartialDisk_debug(GLUquadric* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops, GLdouble start, GLdouble sweep, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluPartialDisk, "(%p, %f, %f, %d, %d, %f, %f)", (void*)quad, (double)inner, (double)outer, (int)slices, (int)loops, (double)start, (double)sweep)
    glatter_gluPartialDisk(quad, inner, outer, slices, loops, start, sweep);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluPartialDisk_defined
#endif
#ifndef gluPerspective_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluPerspective, (fovy, aspect, zNear, zFar), (GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar))
GLATTER_INLINE_OR_NOT void glatter_gluPerspective_debug(GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluPerspective, "(%f, %f, %f, %f)", (double)fovy, (double)aspect, (double)zNear, (double)zFar)
    glatter_gluPerspective(fovy, aspect, zNear, zFar);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluPerspective_defined
#endif
#ifndef gluPickMatrix_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluPickMatrix, (x, y, delX, delY, viewport), (GLdouble x, GLdouble y, GLdouble delX, GLdouble delY, GLint *viewport))
GLATTER_INLINE_OR_NOT void glatter_gluPickMatrix_debug(GLdouble x, GLdouble y, GLdouble delX, GLdouble delY, GLint *viewport, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluPickMatrix, "(%f, %f, %f, %f, %p)", (double)x, (double)y, (double)delX, (double)delY, (void*)viewport)
    glatter_gluPickMatrix(x, y, delX, delY, viewport);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluPickMatrix_defined
#endif
#ifndef gluProject_defined
GLATTER_FBLOCK(return, GLU, GLAPI, GLint, GLAPIENTRY, gluProject, (objX, objY, objZ, model, proj, view, winX, winY, winZ), (GLdouble objX, GLdouble objY, GLdouble objZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* winX, GLdouble* winY, GLdouble* winZ))
GLATTER_INLINE_OR_NOT GLint glatter_gluProject_debug(GLdouble objX, GLdouble objY, GLdouble objZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* winX, GLdouble* winY, GLdouble* winZ, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluProject, "(%f, %f, %f, %p, %p, %p, %p, %p, %p)", (double)objX, (double)objY, (double)objZ, (void*)model, (void*)proj, (void*)view, (void*)winX, (void*)winY, (void*)winZ)
    GLint rval = glatter_gluProject(objX, objY, objZ, model, proj, view, winX, winY, winZ);
    GLATTER_RBLOCK("%d\n", (int)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluProject_defined
#endif
#ifndef gluPwlCurve_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluPwlCurve, (nurb, count, data, stride, type), (GLUnurbs* nurb, GLint count, GLfloat* data, GLint stride, GLenum type))
GLATTER_INLINE_OR_NOT void glatter_gluPwlCurve_debug(GLUnurbs* nurb, GLint count, GLfloat* data, GLint stride, GLenum type, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluPwlCurve, "(%p, %d, %p, %d, %s)", (void*)nurb, (int)count, (void*)data, (int)stride, enum_to_string_GL(type))
    glatter_gluPwlCurve(nurb, count, data, stride, type);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluPwlCurve_defined
#endif
#ifndef gluQuadricCallback_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluQuadricCallback, (quad, which, CallBackFunc), (GLUquadric* quad, GLenum which, _GLUfuncptr CallBackFunc))
GLATTER_INLINE_OR_NOT void glatter_gluQuadricCallback_debug(GLUquadric* quad, GLenum which, _GLUfuncptr CallBackFunc, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluQuadricCallback, "(%p, %s, %s)", (void*)quad, enum_to_string_GL(which), GET_PRS(CallBackFunc))
    glatter_gluQuadricCallback(quad, which, CallBackFunc);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluQuadricCallback_defined
#endif
#ifndef gluQuadricDrawStyle_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluQuadricDrawStyle, (quad, draw), (GLUquadric* quad, GLenum draw))
GLATTER_INLINE_OR_NOT void glatter_gluQuadricDrawStyle_debug(GLUquadric* quad, GLenum draw, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluQuadricDrawStyle, "(%p, %s)", (void*)quad, enum_to_string_GL(draw))
    glatter_gluQuadricDrawStyle(quad, draw);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluQuadricDrawStyle_defined
#endif
#ifndef gluQuadricNormals_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluQuadricNormals, (quad, normal), (GLUquadric* quad, GLenum normal))
GLATTER_INLINE_OR_NOT void glatter_gluQuadricNormals_debug(GLUquadric* quad, GLenum normal, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluQuadricNormals, "(%p, %s)", (void*)quad, enum_to_string_GL(normal))
    glatter_gluQuadricNormals(quad, normal);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluQuadricNormals_defined
#endif
#ifndef gluQuadricOrientation_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluQuadricOrientation, (quad, orientation), (GLUquadric* quad, GLenum orientation))
GLATTER_INLINE_OR_NOT void glatter_gluQuadricOrientation_debug(GLUquadric* quad, GLenum orientation, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluQuadricOrientation, "(%p, %s)", (void*)quad, enum_to_string_GL(orientation))
    glatter_gluQuadricOrientation(quad, orientation);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluQuadricOrientation_defined
#endif
#ifndef gluQuadricTexture_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluQuadricTexture, (quad, texture), (GLUquadric* quad, GLboolean texture))
GLATTER_INLINE_OR_NOT void glatter_gluQuadricTexture_debug(GLUquadric* quad, GLboolean texture, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluQuadricTexture, "(%p, %u)", (void*)quad, (unsigned char)texture)
    glatter_gluQuadricTexture(quad, texture);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluQuadricTexture_defined
#endif
#ifndef gluScaleImage_defined
GLATTER_FBLOCK(return, GLU, GLAPI, GLint, GLAPIENTRY, gluScaleImage, (format, wIn, hIn, typeIn, dataIn, wOut, hOut, typeOut, dataOut), (GLenum format, GLsizei wIn, GLsizei hIn, GLenum typeIn, const void *dataIn, GLsizei wOut, GLsizei hOut, GLenum typeOut, GLvoid* dataOut))
GLATTER_INLINE_OR_NOT GLint glatter_gluScaleImage_debug(GLenum format, GLsizei wIn, GLsizei hIn, GLenum typeIn, const void *dataIn, GLsizei wOut, GLsizei hOut, GLenum typeOut, GLvoid* dataOut, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluScaleImage, "(%s, %d, %d, %s, %p, %d, %d, %s, %p)", enum_to_string_GL(format), (int)wIn, (int)hIn, enum_to_string_GL(typeIn), (void*)dataIn, (int)wOut, (int)hOut, enum_to_string_GL(typeOut), (void*)dataOut)
    GLint rval = glatter_gluScaleImage(format, wIn, hIn, typeIn, dataIn, wOut, hOut, typeOut, dataOut);
    GLATTER_RBLOCK("%d\n", (int)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluScaleImage_defined
#endif
#ifndef gluSphere_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluSphere, (quad, radius, slices, stacks), (GLUquadric* quad, GLdouble radius, GLint slices, GLint stacks))
GLATTER_INLINE_OR_NOT void glatter_gluSphere_debug(GLUquadric* quad, GLdouble radius, GLint slices, GLint stacks, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluSphere, "(%p, %f, %d, %d)", (void*)quad, (double)radius, (int)slices, (int)stacks)
    glatter_gluSphere(quad, radius, slices, stacks);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluSphere_defined
#endif
#ifndef gluTessBeginContour_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluTessBeginContour, (tess), (GLUtesselator* tess))
GLATTER_INLINE_OR_NOT void glatter_gluTessBeginContour_debug(GLUtesselator* tess, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluTessBeginContour, "(%p)", (void*)tess)
    glatter_gluTessBeginContour(tess);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluTessBeginContour_defined
#endif
#ifndef gluTessBeginPolygon_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluTessBeginPolygon, (tess, data), (GLUtesselator* tess, GLvoid* data))
GLATTER_INLINE_OR_NOT void glatter_gluTessBeginPolygon_debug(GLUtesselator* tess, GLvoid* data, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluTessBeginPolygon, "(%p, %p)", (void*)tess, (void*)data)
    glatter_gluTessBeginPolygon(tess, data);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluTessBeginPolygon_defined
#endif
#ifndef gluTessCallback_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluTessCallback, (tess, which, CallBackFunc), (GLUtesselator* tess, GLenum which, _GLUfuncptr CallBackFunc))
GLATTER_INLINE_OR_NOT void glatter_gluTessCallback_debug(GLUtesselator* tess, GLenum which, _GLUfuncptr CallBackFunc, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluTessCallback, "(%p, %s, %s)", (void*)tess, enum_to_string_GL(which), GET_PRS(CallBackFunc))
    glatter_gluTessCallback(tess, which, CallBackFunc);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluTessCallback_defined
#endif
#ifndef gluTessEndContour_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluTessEndContour, (tess), (GLUtesselator* tess))
GLATTER_INLINE_OR_NOT void glatter_gluTessEndContour_debug(GLUtesselator* tess, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluTessEndContour, "(%p)", (void*)tess)
    glatter_gluTessEndContour(tess);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluTessEndContour_defined
#endif
#ifndef gluTessEndPolygon_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluTessEndPolygon, (tess), (GLUtesselator* tess))
GLATTER_INLINE_OR_NOT void glatter_gluTessEndPolygon_debug(GLUtesselator* tess, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluTessEndPolygon, "(%p)", (void*)tess)
    glatter_gluTessEndPolygon(tess);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluTessEndPolygon_defined
#endif
#ifndef gluTessNormal_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluTessNormal, (tess, valueX, valueY, valueZ), (GLUtesselator* tess, GLdouble valueX, GLdouble valueY, GLdouble valueZ))
GLATTER_INLINE_OR_NOT void glatter_gluTessNormal_debug(GLUtesselator* tess, GLdouble valueX, GLdouble valueY, GLdouble valueZ, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluTessNormal, "(%p, %f, %f, %f)", (void*)tess, (double)valueX, (double)valueY, (double)valueZ)
    glatter_gluTessNormal(tess, valueX, valueY, valueZ);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluTessNormal_defined
#endif
#ifndef gluTessProperty_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluTessProperty, (tess, which, data), (GLUtesselator* tess, GLenum which, GLdouble data))
GLATTER_INLINE_OR_NOT void glatter_gluTessProperty_debug(GLUtesselator* tess, GLenum which, GLdouble data, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluTessProperty, "(%p, %s, %f)", (void*)tess, enum_to_string_GL(which), (double)data)
    glatter_gluTessProperty(tess, which, data);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluTessProperty_defined
#endif
#ifndef gluTessVertex_defined
GLATTER_FBLOCK(, GLU, GLAPI, void, GLAPIENTRY, gluTessVertex, (tess, location, data), (GLUtesselator* tess, GLdouble *location, GLvoid* data))
GLATTER_INLINE_OR_NOT void glatter_gluTessVertex_debug(GLUtesselator* tess, GLdouble *location, GLvoid* data, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluTessVertex, "(%p, %p, %p)", (void*)tess, (void*)location, (void*)data)
    glatter_gluTessVertex(tess, location, data);
    GLATTER_CHECK_ERROR(GLU, file, line)
}
#define gluTessVertex_defined
#endif
#ifndef gluUnProject_defined
GLATTER_FBLOCK(return, GLU, GLAPI, GLint, GLAPIENTRY, gluUnProject, (winX, winY, winZ, model, proj, view, objX, objY, objZ), (GLdouble winX, GLdouble winY, GLdouble winZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* objX, GLdouble* objY, GLdouble* objZ))
GLATTER_INLINE_OR_NOT GLint glatter_gluUnProject_debug(GLdouble winX, GLdouble winY, GLdouble winZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* objX, GLdouble* objY, GLdouble* objZ, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluUnProject, "(%f, %f, %f, %p, %p, %p, %p, %p, %p)", (double)winX, (double)winY, (double)winZ, (void*)model, (void*)proj, (void*)view, (void*)objX, (void*)objY, (void*)objZ)
    GLint rval = glatter_gluUnProject(winX, winY, winZ, model, proj, view, objX, objY, objZ);
    GLATTER_RBLOCK("%d\n", (int)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluUnProject_defined
#endif
GLATTER_FBLOCK(return, GLU, GLAPI, GLint, GLAPIENTRY, gluUnProject4, (winX, winY, winZ, clipW, model, proj, view, nearVal, farVal, objX, objY, objZ, objW), (GLdouble winX, GLdouble winY, GLdouble winZ, GLdouble clipW, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble nearVal, GLdouble farVal, GLdouble* objX, GLdouble* objY, GLdouble* objZ, GLdouble* objW))
GLATTER_INLINE_OR_NOT GLint glatter_gluUnProject4_debug(GLdouble winX, GLdouble winY, GLdouble winZ, GLdouble clipW, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble nearVal, GLdouble farVal, GLdouble* objX, GLdouble* objY, GLdouble* objZ, GLdouble* objW, const char* file, int line)
{
    GLATTER_DBLOCK(file, line, gluUnProject4, "(%f, %f, %f, %f, %p, %p, %p, %f, %f, %p, %p, %p, %p)", (double)winX, (double)winY, (double)winZ, (double)clipW, (void*)model, (void*)proj, (void*)view, (double)nearVal, (double)farVal, (void*)objX, (void*)objY, (void*)objZ, (void*)objW)
    GLint rval = glatter_gluUnProject4(winX, winY, winZ, clipW, model, proj, view, nearVal, farVal, objX, objY, objZ, objW);
    GLATTER_RBLOCK("%d\n", (int)rval);
    GLATTER_CHECK_ERROR(GLU, file, line)
    return rval;
}
#define gluUnProject4_defined
#endif // defined(__glu_h__)
#endif // GLATTER_GLU

