/* <Core> */

#ifdef AGL_VERSION_1_2
AGL_API(void, BlendColor, (GLclampf, GLclampf, GLclampf, GLclampf))
AGL_API(void, BlendEquation, (GLenum))
AGL_API(void, DrawRangeElements, (GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *))
AGL_API(void, ColorTable, (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
AGL_API(void, ColorTableParameterfv, (GLenum, GLenum, const GLfloat *))
AGL_API(void, ColorTableParameteriv, (GLenum, GLenum, const GLint *))
AGL_API(void, CopyColorTable, (GLenum, GLenum, GLint, GLint, GLsizei))
AGL_API(void, GetColorTable, (GLenum, GLenum, GLenum, GLvoid *))
AGL_API(void, GetColorTableParameterfv, (GLenum, GLenum, GLfloat *))
AGL_API(void, GetColorTableParameteriv, (GLenum, GLenum, GLint *))
AGL_API(void, ColorSubTable, (GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
AGL_API(void, CopyColorSubTable, (GLenum, GLsizei, GLint, GLint, GLsizei))
AGL_API(void, TexImage3D, (GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
AGL_API(void, TexSubImage3D, (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
AGL_API(void, CopyTexSubImage3D, (GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))
#endif

#if defined AGL_ARB_imaging
AGL_API(void, ConvolutionFilter1D, (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
AGL_API(void, ConvolutionFilter2D, (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
AGL_API(void, ConvolutionParameterf, (GLenum, GLenum, GLfloat))
AGL_API(void, ConvolutionParameterfv, (GLenum, GLenum, const GLfloat *))
AGL_API(void, ConvolutionParameteri, (GLenum, GLenum, GLint))
AGL_API(void, ConvolutionParameteriv, (GLenum, GLenum, const GLint *))
AGL_API(void, CopyConvolutionFilter1D, (GLenum, GLenum, GLint, GLint, GLsizei))
AGL_API(void, CopyConvolutionFilter2D, (GLenum, GLenum, GLint, GLint, GLsizei, GLsizei))
AGL_API(void, GetConvolutionFilter, (GLenum, GLenum, GLenum, GLvoid *))
AGL_API(void, GetConvolutionParameterfv, (GLenum, GLenum, GLfloat *))
AGL_API(void, GetConvolutionParameteriv, (GLenum, GLenum, GLint *))
AGL_API(void, GetSeparableFilter, (GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *))
AGL_API(void, SeparableFilter2D, (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *))
AGL_API(void, GetHistogram, (GLenum, GLboolean, GLenum, GLenum, GLvoid *))
AGL_API(void, GetHistogramParameterfv, (GLenum, GLenum, GLfloat *))
AGL_API(void, GetHistogramParameteriv, (GLenum, GLenum, GLint *))
AGL_API(void, GetMinmax, (GLenum, GLboolean, GLenum, GLenum, GLvoid *))
AGL_API(void, GetMinmaxParameterfv, (GLenum, GLenum, GLfloat *))
AGL_API(void, GetMinmaxParameteriv, (GLenum, GLenum, GLint *))
AGL_API(void, Histogram, (GLenum, GLsizei, GLenum, GLboolean))
AGL_API(void, Minmax, (GLenum, GLenum, GLboolean))
AGL_API(void, ResetHistogram, (GLenum))
AGL_API(void, ResetMinmax, (GLenum))
#endif

#if defined AGL_VERSION_1_3
AGL_API(void, ActiveTexture, (GLenum))
AGL_API(void, ClientActiveTexture, (GLenum))
AGL_API(void, MultiTexCoord1d, (GLenum, GLdouble))
AGL_API(void, MultiTexCoord1dv, (GLenum, const GLdouble *))
AGL_API(void, MultiTexCoord1f, (GLenum, GLfloat))
AGL_API(void, MultiTexCoord1fv, (GLenum, const GLfloat *))
AGL_API(void, MultiTexCoord1i, (GLenum, GLint))
AGL_API(void, MultiTexCoord1iv, (GLenum, const GLint *))
AGL_API(void, MultiTexCoord1s, (GLenum, GLshort))
AGL_API(void, MultiTexCoord1sv, (GLenum, const GLshort *))
AGL_API(void, MultiTexCoord2d, (GLenum, GLdouble, GLdouble))
AGL_API(void, MultiTexCoord2dv, (GLenum, const GLdouble *))
AGL_API(void, MultiTexCoord2f, (GLenum, GLfloat, GLfloat))
AGL_API(void, MultiTexCoord2fv, (GLenum, const GLfloat *))
AGL_API(void, MultiTexCoord2i, (GLenum, GLint, GLint))
AGL_API(void, MultiTexCoord2iv, (GLenum, const GLint *))
AGL_API(void, MultiTexCoord2s, (GLenum, GLshort, GLshort))
AGL_API(void, MultiTexCoord2sv, (GLenum, const GLshort *))
AGL_API(void, MultiTexCoord3d, (GLenum, GLdouble, GLdouble, GLdouble))
AGL_API(void, MultiTexCoord3dv, (GLenum, const GLdouble *))
AGL_API(void, MultiTexCoord3f, (GLenum, GLfloat, GLfloat, GLfloat))
AGL_API(void, MultiTexCoord3fv, (GLenum, const GLfloat *))
AGL_API(void, MultiTexCoord3i, (GLenum, GLint, GLint, GLint))
AGL_API(void, MultiTexCoord3iv, (GLenum, const GLint *))
AGL_API(void, MultiTexCoord3s, (GLenum, GLshort, GLshort, GLshort))
AGL_API(void, MultiTexCoord3sv, (GLenum, const GLshort *))
AGL_API(void, MultiTexCoord4d, (GLenum, GLdouble, GLdouble, GLdouble, GLdouble))
AGL_API(void, MultiTexCoord4dv, (GLenum, const GLdouble *))
AGL_API(void, MultiTexCoord4f, (GLenum, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, MultiTexCoord4fv, (GLenum, const GLfloat *))
AGL_API(void, MultiTexCoord4i, (GLenum, GLint, GLint, GLint, GLint))
AGL_API(void, MultiTexCoord4iv, (GLenum, const GLint *))
AGL_API(void, MultiTexCoord4s, (GLenum, GLshort, GLshort, GLshort, GLshort))
AGL_API(void, MultiTexCoord4sv, (GLenum, const GLshort *))
AGL_API(void, LoadTransposeMatrixf, (const GLfloat *))
AGL_API(void, LoadTransposeMatrixd, (const GLdouble *))
AGL_API(void, MultTransposeMatrixf, (const GLfloat *))
AGL_API(void, MultTransposeMatrixd, (const GLdouble *))
AGL_API(void, SampleCoverage, (GLclampf, GLboolean))
AGL_API(void, CompressedTexImage3D, (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *))
AGL_API(void, CompressedTexImage2D, (GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *))
AGL_API(void, CompressedTexImage1D, (GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *))
AGL_API(void, CompressedTexSubImage3D, (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *))
AGL_API(void, CompressedTexSubImage2D, (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *))
AGL_API(void, CompressedTexSubImage1D, (GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *))
AGL_API(void, GetCompressedTexImage, (GLenum, GLint, GLvoid *))
#endif

#if defined AGL_VERSION_1_4
AGL_API(void, BlendFuncSeparate, (GLenum, GLenum, GLenum, GLenum))
AGL_API(void, FogCoordf, (GLfloat))
AGL_API(void, FogCoordfv, (const GLfloat *))
AGL_API(void, FogCoordd, (GLdouble))
AGL_API(void, FogCoorddv, (const GLdouble *))
AGL_API(void, FogCoordPointer, (GLenum, GLsizei, const GLvoid *))
AGL_API(void, MultiDrawArrays, (GLenum, GLint *, GLsizei *, GLsizei))
AGL_API(void, MultiDrawElements, (GLenum, const GLsizei *, GLenum, const GLvoid* *, GLsizei))
AGL_API(void, PointParameterf, (GLenum, GLfloat))
AGL_API(void, PointParameterfv, (GLenum, const GLfloat *))
AGL_API(void, PointParameteri, (GLenum, GLint))
AGL_API(void, PointParameteriv, (GLenum, const GLint *))
AGL_API(void, SecondaryColor3b, (GLbyte, GLbyte, GLbyte))
AGL_API(void, SecondaryColor3bv, (const GLbyte *))
AGL_API(void, SecondaryColor3d, (GLdouble, GLdouble, GLdouble))
AGL_API(void, SecondaryColor3dv, (const GLdouble *))
AGL_API(void, SecondaryColor3f, (GLfloat, GLfloat, GLfloat))
AGL_API(void, SecondaryColor3fv, (const GLfloat *))
AGL_API(void, SecondaryColor3i, (GLint, GLint, GLint))
AGL_API(void, SecondaryColor3iv, (const GLint *))
AGL_API(void, SecondaryColor3s, (GLshort, GLshort, GLshort))
AGL_API(void, SecondaryColor3sv, (const GLshort *))
AGL_API(void, SecondaryColor3ub, (GLubyte, GLubyte, GLubyte))
AGL_API(void, SecondaryColor3ubv, (const GLubyte *))
AGL_API(void, SecondaryColor3ui, (GLuint, GLuint, GLuint))
AGL_API(void, SecondaryColor3uiv, (const GLuint *))
AGL_API(void, SecondaryColor3us, (GLushort, GLushort, GLushort))
AGL_API(void, SecondaryColor3usv, (const GLushort *))
AGL_API(void, SecondaryColorPointer, (GLint, GLenum, GLsizei, const GLvoid *))
AGL_API(void, WindowPos2d, (GLdouble, GLdouble))
AGL_API(void, WindowPos2dv, (const GLdouble *))
AGL_API(void, WindowPos2f, (GLfloat, GLfloat))
AGL_API(void, WindowPos2fv, (const GLfloat *))
AGL_API(void, WindowPos2i, (GLint, GLint))
AGL_API(void, WindowPos2iv, (const GLint *))
AGL_API(void, WindowPos2s, (GLshort, GLshort))
AGL_API(void, WindowPos2sv, (const GLshort *))
AGL_API(void, WindowPos3d, (GLdouble, GLdouble, GLdouble))
AGL_API(void, WindowPos3dv, (const GLdouble *))
AGL_API(void, WindowPos3f, (GLfloat, GLfloat, GLfloat))
AGL_API(void, WindowPos3fv, (const GLfloat *))
AGL_API(void, WindowPos3i, (GLint, GLint, GLint))
AGL_API(void, WindowPos3iv, (const GLint *))
AGL_API(void, WindowPos3s, (GLshort, GLshort, GLshort))
AGL_API(void, WindowPos3sv, (const GLshort *))
#endif

	
#if defined AGL_VERSION_1_5
AGL_API(void, BindBuffer, (GLenum, GLuint))
AGL_API(void, DeleteBuffers, (GLsizei, const GLuint *))
AGL_API(void, GenBuffers, (GLsizei, GLuint *))
AGL_API(GLboolean, IsBuffer, (GLuint))
AGL_API(void, BufferData, (GLenum, GLsizeiptr, const GLvoid *, GLenum))
AGL_API(void, BufferSubData, (GLenum, GLintptr, GLsizeiptr, const GLvoid *))
AGL_API(void, GetBufferSubData, (GLenum, GLintptr, GLsizeiptr, GLvoid *))
AGL_API(GLvoid*, MapBuffer, (GLenum, GLenum))
AGL_API(GLboolean, UnmapBuffer, (GLenum))
AGL_API(void, GetBufferParameteriv, (GLenum, GLenum, GLint *))
AGL_API(void, GetBufferPointerv, (GLenum, GLenum, GLvoid* *))
AGL_API(void, GenQueries, (GLsizei, GLuint *))
AGL_API(void, DeleteQueries, (GLsizei, const GLuint *))
AGL_API(GLboolean, IsQuery, (GLuint))
AGL_API(void, BeginQuery, (GLenum, GLuint))
AGL_API(void, EndQuery, (GLenum))
AGL_API(void, GetQueryiv, (GLenum, GLenum, GLint *))
AGL_API(void, GetQueryObjectiv, (GLuint, GLenum, GLint *))
AGL_API(void, GetQueryObjectuiv, (GLuint, GLenum, GLuint *))
#endif


#if defined AGL_VERSION_2_0
AGL_API(GLuint, CreateProgram, (void))
AGL_API(GLuint, CreateShader, (GLenum))
AGL_API(void,   DeleteProgram, (GLuint))
AGL_API(void,   DeleteShader, (GLuint))
AGL_API(void,   AttachShader, (GLuint, GLuint))
AGL_API(void,   DetachShader, (GLuint, GLuint))
AGL_API(void,   ShaderSource, (GLuint, GLsizei, const GLchar **, const GLint *))
AGL_API(void,   CompileShader, (GLuint))
AGL_API(GLboolean, IsProgram, (GLuint))
AGL_API(GLboolean, IsShader,  (GLuint))
AGL_API(void,   LinkProgram, (GLuint))
AGL_API(void,   UseProgram, (GLuint))
AGL_API(void,   ValidateProgram, (GLuint))
AGL_API(void, Uniform1f, (GLint, GLfloat))
AGL_API(void, Uniform2f, (GLint, GLfloat, GLfloat))
AGL_API(void, Uniform3f, (GLint, GLfloat, GLfloat, GLfloat))
AGL_API(void, Uniform4f, (GLint, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, Uniform1i, (GLint, GLint))
AGL_API(void, Uniform2i, (GLint, GLint, GLint))
AGL_API(void, Uniform3i, (GLint, GLint, GLint, GLint))
AGL_API(void, Uniform4i, (GLint, GLint, GLint, GLint, GLint))
AGL_API(void, Uniform1fv, (GLint, GLsizei, GLfloat *))
AGL_API(void, Uniform2fv, (GLint, GLsizei, GLfloat *))
AGL_API(void, Uniform3fv, (GLint, GLsizei, GLfloat *))
AGL_API(void, Uniform4fv, (GLint, GLsizei, GLfloat *))
AGL_API(void, Uniform1iv, (GLint, GLsizei, GLint *))
AGL_API(void, Uniform2iv, (GLint, GLsizei, GLint *))
AGL_API(void, Uniform3iv, (GLint, GLsizei, GLint *))
AGL_API(void, Uniform4iv, (GLint, GLsizei, GLint *))
AGL_API(void, UniformMatrix2fv, (GLint, GLsizei, GLboolean, GLfloat *))
AGL_API(void, UniformMatrix3fv, (GLint, GLsizei, GLboolean, GLfloat *))
AGL_API(void, UniformMatrix4fv, (GLint, GLsizei, GLboolean, GLfloat *))
AGL_API(void, GetShaderfv,  (GLuint, GLenum, GLfloat *))
AGL_API(void, GetShaderiv,  (GLuint, GLenum, GLint *))
AGL_API(void, GetProgramfv, (GLuint, GLenum, GLfloat *))
AGL_API(void, GetProgramiv, (GLuint, GLenum, GLint *))
AGL_API(void, GetShaderInfoLog,  (GLuint, GLsizei, GLsizei *, GLchar *))
AGL_API(void, GetProgramInfoLog, (GLuint, GLsizei, GLsizei *, GLchar *))
AGL_API(void, GetAttachedShaders,  (GLuint, GLsizei, GLsizei *, GLuint *))
AGL_API(GLint, GetUniformLocation, (GLuint, const GLchar *))
AGL_API(void,  GetActiveUniform, (GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *))
AGL_API(void,  GetUniformfv, (GLuint, GLint, GLfloat *))
AGL_API(void,  GetUniformiv, (GLuint, GLint, GLint *))
AGL_API(void,  GetShaderSource, (GLuint, GLsizei, GLsizei *, GLchar *))
AGL_API(void, VertexAttrib1f,    (GLuint, GLfloat))
AGL_API(void, VertexAttrib1s,    (GLuint, GLshort))
AGL_API(void, VertexAttrib1d,    (GLuint, GLdouble))
AGL_API(void, VertexAttrib2f,    (GLuint, GLfloat, GLfloat))
AGL_API(void, VertexAttrib2s,    (GLuint, GLshort, GLshort))
AGL_API(void, VertexAttrib2d,    (GLuint, GLdouble, GLdouble))
AGL_API(void, VertexAttrib3f,    (GLuint, GLfloat, GLfloat, GLfloat))
AGL_API(void, VertexAttrib3s,    (GLuint, GLshort, GLshort, GLshort))
AGL_API(void, VertexAttrib3d,    (GLuint, GLdouble, GLdouble, GLdouble))
AGL_API(void, VertexAttrib4f,    (GLuint, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, VertexAttrib4s,    (GLuint, GLshort, GLshort, GLshort, GLshort))
AGL_API(void, VertexAttrib4d,    (GLuint, GLdouble,GLdouble,GLdouble,GLdouble))
AGL_API(void, VertexAttrib4Nub,  (GLuint, GLubyte, GLubyte, GLubyte, GLubyte))
AGL_API(void, VertexAttrib1fv,   (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib1sv,   (GLuint, const GLshort *))
AGL_API(void, VertexAttrib1dv,   (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib2fv,   (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib2sv,   (GLuint, const GLshort *))
AGL_API(void, VertexAttrib2dv,   (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib3fv,   (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib3sv,   (GLuint, const GLshort *))
AGL_API(void, VertexAttrib3dv,   (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib4fv,   (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib4sv,   (GLuint, const GLshort *))
AGL_API(void, VertexAttrib4dv,   (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib4iv,   (GLuint, const GLint *))
AGL_API(void, VertexAttrib4bv,   (GLuint, const GLbyte *))
AGL_API(void, VertexAttrib4ubv,  (GLuint, const GLubyte *))
AGL_API(void, VertexAttrib4usv,  (GLuint, const GLushort *))
AGL_API(void, VertexAttrib4uiv,  (GLuint, const GLuint *))
AGL_API(void, VertexAttrib4Nbv,  (GLuint, const GLbyte *))
AGL_API(void, VertexAttrib4Nsv,  (GLuint, const GLshort *))
AGL_API(void, VertexAttrib4Niv,  (GLuint, const GLint *))
AGL_API(void, VertexAttrib4Nubv, (GLuint, const GLubyte *))
AGL_API(void, VertexAttrib4Nusv, (GLuint, const GLushort *))
AGL_API(void, VertexAttrib4Nuiv, (GLuint, const GLuint *))
AGL_API(void, VertexAttribPointer,(GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *))
AGL_API(void, EnableVertexAttribArray, (GLuint))
AGL_API(void, DisableVertexAttribArray, (GLuint))

AGL_API(void, BindAttribLocation, (GLuint, GLuint, const GLchar *))
AGL_API(void, GetActiveAttrib,    (GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *))
AGL_API(GLint, GetAttribLocation, (GLuint, const GLchar *))
AGL_API(void, GetVertexAttribdv, (GLuint, GLenum, GLdouble *))
AGL_API(void, GetVertexAttribfv, (GLuint, GLenum, GLfloat *))
AGL_API(void, GetVertexAttribiv, (GLuint, GLenum, GLint *))
AGL_API(void, GetVertexAttribPointerv, (GLuint, GLenum, GLvoid **))

AGL_API(void, DrawBuffers, (GLsizei n, const GLenum *))

AGL_API(void, StencilOpSeparate,   (GLenum, GLenum, GLenum, GLenum))
AGL_API(void, StencilFuncSeparate, (GLenum, GLenum, GLint,  GLuint))

#endif


#if defined AGL_VERSION_2_1
AGL_API(void, UniformMatrix2x3fv, (GLint, GLsizei, GLboolean, const GLfloat *))
AGL_API(void, UniformMatrix3x2fv, (GLint, GLsizei, GLboolean, const GLfloat *))
AGL_API(void, UniformMatrix2x4fv, (GLint, GLsizei, GLboolean, const GLfloat *))
AGL_API(void, UniformMatrix4x2fv, (GLint, GLsizei, GLboolean, const GLfloat *))
AGL_API(void, UniformMatrix3x4fv, (GLint, GLsizei, GLboolean, const GLfloat *))
AGL_API(void, UniformMatrix4x3fv, (GLint, GLsizei, GLboolean, const GLfloat *))
#endif


/* </Core> */
/* <ARB> */

#ifdef AGL_ARB_multitexture
AGL_API(void, ActiveTextureARB, (GLenum))
AGL_API(void, ClientActiveTextureARB, (GLenum))
AGL_API(void, MultiTexCoord1dARB, (GLenum, GLdouble))
AGL_API(void, MultiTexCoord1dvARB, (GLenum, const GLdouble *))
AGL_API(void, MultiTexCoord1fARB, (GLenum, GLfloat))
AGL_API(void, MultiTexCoord1fvARB, (GLenum, const GLfloat *))
AGL_API(void, MultiTexCoord1iARB, (GLenum, GLint))
AGL_API(void, MultiTexCoord1ivARB, (GLenum, const GLint *))
AGL_API(void, MultiTexCoord1sARB, (GLenum, GLshort))
AGL_API(void, MultiTexCoord1svARB, (GLenum, const GLshort *))
AGL_API(void, MultiTexCoord2dARB, (GLenum, GLdouble, GLdouble))
AGL_API(void, MultiTexCoord2dvARB, (GLenum, const GLdouble *))
AGL_API(void, MultiTexCoord2fARB, (GLenum, GLfloat, GLfloat))
AGL_API(void, MultiTexCoord2fvARB, (GLenum, const GLfloat *))
AGL_API(void, MultiTexCoord2iARB, (GLenum, GLint, GLint))
AGL_API(void, MultiTexCoord2ivARB, (GLenum, const GLint *))
AGL_API(void, MultiTexCoord2sARB, (GLenum, GLshort, GLshort))
AGL_API(void, MultiTexCoord2svARB, (GLenum, const GLshort *))
AGL_API(void, MultiTexCoord3dARB, (GLenum, GLdouble, GLdouble, GLdouble))
AGL_API(void, MultiTexCoord3dvARB, (GLenum, const GLdouble *))
AGL_API(void, MultiTexCoord3fARB, (GLenum, GLfloat, GLfloat, GLfloat))
AGL_API(void, MultiTexCoord3fvARB, (GLenum, const GLfloat *))
AGL_API(void, MultiTexCoord3iARB, (GLenum, GLint, GLint, GLint))
AGL_API(void, MultiTexCoord3ivARB, (GLenum, const GLint *))
AGL_API(void, MultiTexCoord3sARB, (GLenum, GLshort, GLshort, GLshort))
AGL_API(void, MultiTexCoord3svARB, (GLenum, const GLshort *))
AGL_API(void, MultiTexCoord4dARB, (GLenum, GLdouble, GLdouble, GLdouble, GLdouble))
AGL_API(void, MultiTexCoord4dvARB, (GLenum, const GLdouble *))
AGL_API(void, MultiTexCoord4fARB, (GLenum, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, MultiTexCoord4fvARB, (GLenum, const GLfloat *))
AGL_API(void, MultiTexCoord4iARB, (GLenum, GLint, GLint, GLint, GLint))
AGL_API(void, MultiTexCoord4ivARB, (GLenum, const GLint *))
AGL_API(void, MultiTexCoord4sARB, (GLenum, GLshort, GLshort, GLshort, GLshort))
AGL_API(void, MultiTexCoord4svARB, (GLenum, const GLshort *))
#endif

#if defined AGL_ARB_transpose_matrix
AGL_API(void, LoadTransposeMatrixfARB, (const GLfloat *))
AGL_API(void, LoadTransposeMatrixdARB, (const GLdouble *))
AGL_API(void, MultTransposeMatrixfARB, (const GLfloat *))
AGL_API(void, MultTransposeMatrixdARB, (const GLdouble *))
#endif

#if defined AGL_ARB_multisample
AGL_API(void, SampleCoverageARB, (GLclampf, GLboolean))
#endif

#if defined AGL_ARB_texture_compression
AGL_API(void, CompressedTexImage3DARB, (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *))
AGL_API(void, CompressedTexImage2DARB, (GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *))
AGL_API(void, CompressedTexImage1DARB, (GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *))
AGL_API(void, CompressedTexSubImage3DARB, (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *))
AGL_API(void, CompressedTexSubImage2DARB, (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *))
AGL_API(void, CompressedTexSubImage1DARB, (GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *))
AGL_API(void, GetCompressedTexImageARB, (GLenum, GLint, GLvoid *))
#endif

#if defined AGL_ARB_point_parameters
AGL_API(void, PointParameterfARB, (GLenum, GLfloat))
AGL_API(void, PointParameterfvARB, (GLenum, const GLfloat *))
#endif

#if defined AGL_ARB_vertex_blend
AGL_API(void, WeightbvARB, (GLint, const GLbyte *))
AGL_API(void, WeightsvARB, (GLint, const GLshort *))
AGL_API(void, WeightivARB, (GLint, const GLint *))
AGL_API(void, WeightfvARB, (GLint, const GLfloat *))
AGL_API(void, WeightdvARB, (GLint, const GLdouble *))
AGL_API(void, WeightubvARB, (GLint, const GLubyte *))
AGL_API(void, WeightusvARB, (GLint, const GLushort *))
AGL_API(void, WeightuivARB, (GLint, const GLuint *))
AGL_API(void, WeightPointerARB, (GLint, GLenum, GLsizei, const GLvoid *))
AGL_API(void, VertexBlendARB, (GLint))
#endif

#if defined AGL_ARB_matrix_palette
AGL_API(void, CurrentPaletteMatrixARB, (GLint))
AGL_API(void, MatrixIndexubvARB, (GLint, const GLubyte *))
AGL_API(void, MatrixIndexusvARB, (GLint, const GLushort *))
AGL_API(void, MatrixIndexuivARB, (GLint, const GLuint *))
AGL_API(void, MatrixIndexPointerARB, (GLint, GLenum, GLsizei, const GLvoid *))
#endif

#if defined AGL_ARB_window_pos
AGL_API(void, WindowPos2dARB, (GLdouble, GLdouble))
AGL_API(void, WindowPos2dvARB, (const GLdouble *))
AGL_API(void, WindowPos2fARB, (GLfloat, GLfloat))
AGL_API(void, WindowPos2fvARB, (const GLfloat *))
AGL_API(void, WindowPos2iARB, (GLint, GLint))
AGL_API(void, WindowPos2ivARB, (const GLint *))
AGL_API(void, WindowPos2sARB, (GLshort, GLshort))
AGL_API(void, WindowPos2svARB, (const GLshort *))
AGL_API(void, WindowPos3dARB, (GLdouble, GLdouble, GLdouble))
AGL_API(void, WindowPos3dvARB, (const GLdouble *))
AGL_API(void, WindowPos3fARB, (GLfloat, GLfloat, GLfloat))
AGL_API(void, WindowPos3fvARB, (const GLfloat *))
AGL_API(void, WindowPos3iARB, (GLint, GLint, GLint))
AGL_API(void, WindowPos3ivARB, (const GLint *))
AGL_API(void, WindowPos3sARB, (GLshort, GLshort, GLshort))
AGL_API(void, WindowPos3svARB, (const GLshort *))
#endif

#if defined AGL_ARB_vertex_program
AGL_API(void, VertexAttrib1dARB, (GLuint, GLdouble))
AGL_API(void, VertexAttrib1dvARB, (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib1fARB, (GLuint, GLfloat))
AGL_API(void, VertexAttrib1fvARB, (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib1sARB, (GLuint, GLshort))
AGL_API(void, VertexAttrib1svARB, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib2dARB, (GLuint, GLdouble, GLdouble))
AGL_API(void, VertexAttrib2dvARB, (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib2fARB, (GLuint, GLfloat, GLfloat))
AGL_API(void, VertexAttrib2fvARB, (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib2sARB, (GLuint, GLshort, GLshort))
AGL_API(void, VertexAttrib2svARB, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib3dARB, (GLuint, GLdouble, GLdouble, GLdouble))
AGL_API(void, VertexAttrib3dvARB, (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib3fARB, (GLuint, GLfloat, GLfloat, GLfloat))
AGL_API(void, VertexAttrib3fvARB, (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib3sARB, (GLuint, GLshort, GLshort, GLshort))
AGL_API(void, VertexAttrib3svARB, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib4NbvARB, (GLuint, const GLbyte *))
AGL_API(void, VertexAttrib4NivARB, (GLuint, const GLint *))
AGL_API(void, VertexAttrib4NsvARB, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib4NubARB, (GLuint, GLubyte, GLubyte, GLubyte, GLubyte))
AGL_API(void, VertexAttrib4NubvARB, (GLuint, const GLubyte *))
AGL_API(void, VertexAttrib4NuivARB, (GLuint, const GLuint *))
AGL_API(void, VertexAttrib4NusvARB, (GLuint, const GLushort *))
AGL_API(void, VertexAttrib4bvARB, (GLuint, const GLbyte *))
AGL_API(void, VertexAttrib4dARB, (GLuint, GLdouble, GLdouble, GLdouble, GLdouble))
AGL_API(void, VertexAttrib4dvARB, (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib4fARB, (GLuint, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, VertexAttrib4fvARB, (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib4ivARB, (GLuint, const GLint *))
AGL_API(void, VertexAttrib4sARB, (GLuint, GLshort, GLshort, GLshort, GLshort))
AGL_API(void, VertexAttrib4svARB, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib4ubvARB, (GLuint, const GLubyte *))
AGL_API(void, VertexAttrib4uivARB, (GLuint, const GLuint *))
AGL_API(void, VertexAttrib4usvARB, (GLuint, const GLushort *))
AGL_API(void, VertexAttribPointerARB, (GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *))
AGL_API(void, EnableVertexAttribArrayARB, (GLuint))
AGL_API(void, DisableVertexAttribArrayARB, (GLuint))
AGL_API(void, ProgramStringARB, (GLenum, GLenum, GLsizei, const GLvoid *))
AGL_API(void, BindProgramARB, (GLenum, GLuint))
AGL_API(void, DeleteProgramsARB, (GLsizei, const GLuint *))
AGL_API(void, GenProgramsARB, (GLsizei, GLuint *))
AGL_API(void, ProgramEnvParameter4dARB, (GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble))
AGL_API(void, ProgramEnvParameter4dvARB, (GLenum, GLuint, const GLdouble *))
AGL_API(void, ProgramEnvParameter4fARB, (GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, ProgramEnvParameter4fvARB, (GLenum, GLuint, const GLfloat *))
AGL_API(void, ProgramLocalParameter4dARB, (GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble))
AGL_API(void, ProgramLocalParameter4dvARB, (GLenum, GLuint, const GLdouble *))
AGL_API(void, ProgramLocalParameter4fARB, (GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, ProgramLocalParameter4fvARB, (GLenum, GLuint, const GLfloat *))
AGL_API(void, GetProgramEnvParameterdvARB, (GLenum, GLuint, GLdouble *))
AGL_API(void, GetProgramEnvParameterfvARB, (GLenum, GLuint, GLfloat *))
AGL_API(void, GetProgramLocalParameterdvARB, (GLenum, GLuint, GLdouble *))
AGL_API(void, GetProgramLocalParameterfvARB, (GLenum, GLuint, GLfloat *))
AGL_API(void, GetProgramivARB, (GLenum, GLenum, GLint *))
AGL_API(void, GetProgramStringARB, (GLenum, GLenum, GLvoid *))
AGL_API(void, GetVertexAttribdvARB, (GLuint, GLenum, GLdouble *))
AGL_API(void, GetVertexAttribfvARB, (GLuint, GLenum, GLfloat *))
AGL_API(void, GetVertexAttribivARB, (GLuint, GLenum, GLint *))
AGL_API(void, GetVertexAttribPointervARB, (GLuint, GLenum, GLvoid* *))
AGL_API(GLboolean, IsProgramARB, (GLuint))
#endif

#if defined AGL_ARB_vertex_buffer_object
AGL_API(void, BindBufferARB, (GLenum, GLuint))
AGL_API(void, DeleteBuffersARB, (GLsizei, const GLuint *))
AGL_API(void, GenBuffersARB, (GLsizei, GLuint *))
AGL_API(GLboolean, IsBufferARB, (GLuint))
AGL_API(void, BufferDataARB, (GLenum, GLsizeiptrARB, const GLvoid *, GLenum))
AGL_API(void, BufferSubDataARB, (GLenum, GLintptrARB, GLsizeiptrARB, const GLvoid *))
AGL_API(void, GetBufferSubDataARB, (GLenum, GLintptrARB, GLsizeiptrARB, GLvoid *))
AGL_API(GLvoid*, MapBufferARB, (GLenum, GLenum))
AGL_API(GLboolean, UnmapBufferARB, (GLenum))
AGL_API(void, GetBufferParameterivARB, (GLenum, GLenum, GLint *))
AGL_API(void, GetBufferPointervARB, (GLenum, GLenum, GLvoid* *))
#endif

#if defined AGL_ARB_occlusion_query
AGL_API(void, GenQueriesARB, (GLsizei, GLuint *))
AGL_API(void, DeleteQueriesARB, (GLsizei, const GLuint *))
AGL_API(GLboolean, IsQueryARB, (GLuint))
AGL_API(void, BeginQueryARB, (GLenum, GLuint))
AGL_API(void, EndQueryARB, (GLenum))
AGL_API(void, GetQueryivARB, (GLenum, GLenum, GLint *))
AGL_API(void, GetQueryObjectivARB, (GLuint, GLenum, GLint *))
AGL_API(void, GetQueryObjectuivARB, (GLuint, GLenum, GLuint *))
#endif

#if defined AGL_ARB_shader_objects
AGL_API(void, DeleteObjectARB, (GLhandleARB))
AGL_API(GLhandleARB, GetHandleARB, (GLenum))
AGL_API(void, DetachObjectARB, (GLhandleARB, GLhandleARB))
AGL_API(GLhandleARB, CreateShaderObjectARB, (GLenum))
AGL_API(void, ShaderSourceARB, (GLhandleARB, GLsizei, const GLcharARB **, const GLint *))
AGL_API(void, CompileShaderARB, (GLhandleARB))
AGL_API(GLhandleARB, CreateProgramObjectARB, (void))
AGL_API(void, AttachObjectARB, (GLhandleARB, GLhandleARB))
AGL_API(void, LinkProgramARB, (GLhandleARB))
AGL_API(void, UseProgramObjectARB, (GLhandleARB))
AGL_API(void, ValidateProgramARB, (GLhandleARB))
AGL_API(void, Uniform1fARB, (GLint, GLfloat))
AGL_API(void, Uniform2fARB, (GLint, GLfloat, GLfloat))
AGL_API(void, Uniform3fARB, (GLint, GLfloat, GLfloat, GLfloat))
AGL_API(void, Uniform4fARB, (GLint, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, Uniform1iARB, (GLint, GLint))
AGL_API(void, Uniform2iARB, (GLint, GLint, GLint))
AGL_API(void, Uniform3iARB, (GLint, GLint, GLint, GLint))
AGL_API(void, Uniform4iARB, (GLint, GLint, GLint, GLint, GLint))
AGL_API(void, Uniform1fvARB, (GLint, GLsizei, GLfloat *))
AGL_API(void, Uniform2fvARB, (GLint, GLsizei, GLfloat *))
AGL_API(void, Uniform3fvARB, (GLint, GLsizei, GLfloat *))
AGL_API(void, Uniform4fvARB, (GLint, GLsizei, GLfloat *))
AGL_API(void, Uniform1ivARB, (GLint, GLsizei, GLint *))
AGL_API(void, Uniform2ivARB, (GLint, GLsizei, GLint *))
AGL_API(void, Uniform3ivARB, (GLint, GLsizei, GLint *))
AGL_API(void, Uniform4ivARB, (GLint, GLsizei, GLint *))
AGL_API(void, UniformMatrix2fvARB, (GLint, GLsizei, GLboolean, GLfloat *))
AGL_API(void, UniformMatrix3fvARB, (GLint, GLsizei, GLboolean, GLfloat *))
AGL_API(void, UniformMatrix4fvARB, (GLint, GLsizei, GLboolean, GLfloat *))
AGL_API(void, GetObjectParameterfvARB, (GLhandleARB, GLenum, GLfloat *))
AGL_API(void, GetObjectParameterivARB, (GLhandleARB, GLenum, GLint *))
AGL_API(void, GetInfoLogARB, (GLhandleARB, GLsizei, GLsizei *, GLcharARB *))
AGL_API(void, GetAttachedObjectsARB, (GLhandleARB, GLsizei, GLsizei *, GLhandleARB *))
AGL_API(GLint, GetUniformLocationARB, (GLhandleARB, const GLcharARB *))
AGL_API(void, GetActiveUniformARB, (GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *))
AGL_API(void, GetUniformfvARB, (GLhandleARB, GLint, GLfloat *))
AGL_API(void, GetUniformivARB, (GLhandleARB, GLint, GLint *))
AGL_API(void, GetShaderSourceARB, (GLhandleARB, GLsizei, GLsizei *, GLcharARB *))
#endif

#ifdef AGL_ARB_vertex_shader
#ifndef GL_ARB_vertex_program
AGL_API(void, VertexAttrib1fARB, (GLuint, GLfloat))
AGL_API(void, VertexAttrib1sARB, (GLuint, GLshort))
AGL_API(void, VertexAttrib1dARB, (GLuint, GLdouble))
AGL_API(void, VertexAttrib2fARB, (GLuint, GLfloat, GLfloat))
AGL_API(void, VertexAttrib2sARB, (GLuint, GLshort, GLshort))
AGL_API(void, VertexAttrib2dARB, (GLuint, GLdouble, GLdouble))
AGL_API(void, VertexAttrib3fARB, (GLuint, GLfloat, GLfloat, GLfloat))
AGL_API(void, VertexAttrib3sARB, (GLuint, GLshort, GLshort, GLshort))
AGL_API(void, VertexAttrib3dARB, (GLuint, GLdouble, GLdouble, GLdouble))
AGL_API(void, VertexAttrib4fARB, (GLuint, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, VertexAttrib4sARB, (GLuint, GLshort, GLshort, GLshort, GLshort))
AGL_API(void, VertexAttrib4dARB, (GLuint, GLdouble, GLdouble, GLdouble, GLdouble))
AGL_API(void, VertexAttrib4NubARB, (GLuint, GLubyte, GLubyte, GLubyte, GLubyte))
AGL_API(void, VertexAttrib1fvARB, (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib1svARB, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib1dvARB, (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib2fvARB, (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib2svARB, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib2dvARB, (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib3fvARB, (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib3svARB, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib3dvARB, (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib4fvARB, (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib4svARB, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib4dvARB, (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib4ivARB, (GLuint, const GLint *))
AGL_API(void, VertexAttrib4bvARB, (GLuint, const GLbyte *))
AGL_API(void, VertexAttrib4ubvARB, (GLuint, const GLubyte *))
AGL_API(void, VertexAttrib4usvARB, (GLuint, const GLushort *))
AGL_API(void, VertexAttrib4uivARB, (GLuint, const GLuint *))
AGL_API(void, VertexAttrib4NbvARB, (GLuint, const GLbyte *))
AGL_API(void, VertexAttrib4NsvARB, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib4NivARB, (GLuint, const GLint *))
AGL_API(void, VertexAttrib4NubvARB, (GLuint, const GLubyte *))
AGL_API(void, VertexAttrib4NusvARB, (GLuint, const GLushort *))
AGL_API(void, VertexAttrib4NuivARB, (GLuint, const GLuint *))
AGL_API(void, VertexAttribPointerARB, (GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *))
AGL_API(void, EnableVertexAttribArrayARB, (GLuint))
AGL_API(void, DisableVertexAttribArrayARB, (GLuint))
#endif
AGL_API(void, BindAttribLocationARB, (GLhandleARB, GLuint, const GLcharARB *))
AGL_API(void, GetActiveAttribARB, (GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *))
AGL_API(GLint, GetAttribLocationARB, (GLhandleARB, const GLcharARB *))
#ifndef GL_ARB_vertex_program
AGL_API(void, GetVertexAttribdvARB, (GLuint, GLenum, GLdouble *))
AGL_API(void, GetVertexAttribfvARB, (GLuint, GLenum, GLfloat *))
AGL_API(void, GetVertexAttribivARB, (GLuint, GLenum, GLint *))
AGL_API(void, GetVertexAttribPointervARB, (GLuint, GLenum, GLvoid **))
#endif
#endif

#if defined AGL_ARB_draw_buffers
AGL_API(void, DrawBuffersARB, (GLsizei n, const GLenum *bufs))
#endif

#if defined AGL_ARB_color_buffer_float
AGL_API(void, ClampColorARB, (GLenum, GLenum clamp))
#endif

/* </ARB> */

#if defined AGL_EXT_blend_color
AGL_API(void, BlendColorEXT, (GLclampf, GLclampf, GLclampf, GLclampf))
#endif

#if defined AGL_EXT_polygon_offset
AGL_API(void, PolygonOffsetEXT, (GLfloat, GLfloat))
#endif

#if defined AGL_EXT_texture3D
AGL_API(void, TexImage3DEXT, (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
AGL_API(void, TexSubImage3DEXT, (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
#endif

#if defined AGL_SGIS_texture_filter4
AGL_API(void, GetTexFilterFuncSGIS, (GLenum, GLenum, GLfloat *))
AGL_API(void, TexFilterFuncSGIS, (GLenum, GLenum, GLsizei, const GLfloat *))
#endif

#if defined AGL_EXT_subtexture
AGL_API(void, TexSubImage1DEXT, (GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *))
AGL_API(void, TexSubImage2DEXT, (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
#endif

#if defined AGL_EXT_copy_texture
AGL_API(void, CopyTexImage1DEXT, (GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint))
AGL_API(void, CopyTexImage2DEXT, (GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint))
AGL_API(void, CopyTexSubImage1DEXT, (GLenum, GLint, GLint, GLint, GLint, GLsizei))
AGL_API(void, CopyTexSubImage2DEXT, (GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))
AGL_API(void, CopyTexSubImage3DEXT, (GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))
#endif

#if defined AGL_EXT_histogram
AGL_API(void, GetHistogramEXT, (GLenum, GLboolean, GLenum, GLenum, GLvoid *))
AGL_API(void, GetHistogramParameterfvEXT, (GLenum, GLenum, GLfloat *))
AGL_API(void, GetHistogramParameterivEXT, (GLenum, GLenum, GLint *))
AGL_API(void, GetMinmaxEXT, (GLenum, GLboolean, GLenum, GLenum, GLvoid *))
AGL_API(void, GetMinmaxParameterfvEXT, (GLenum, GLenum, GLfloat *))
AGL_API(void, GetMinmaxParameterivEXT, (GLenum, GLenum, GLint *))
AGL_API(void, HistogramEXT, (GLenum, GLsizei, GLenum, GLboolean))
AGL_API(void, MinmaxEXT, (GLenum, GLenum, GLboolean))
AGL_API(void, ResetHistogramEXT, (GLenum))
AGL_API(void, ResetMinmaxEXT, (GLenum))
#endif

#if defined AGL_EXT_convolution
AGL_API(void, ConvolutionFilter1DEXT, (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
AGL_API(void, ConvolutionFilter2DEXT, (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
AGL_API(void, ConvolutionParameterfEXT, (GLenum, GLenum, GLfloat))
AGL_API(void, ConvolutionParameterfvEXT, (GLenum, GLenum, const GLfloat *))
AGL_API(void, ConvolutionParameteriEXT, (GLenum, GLenum, GLint))
AGL_API(void, ConvolutionParameterivEXT, (GLenum, GLenum, const GLint *))
AGL_API(void, CopyConvolutionFilter1DEXT, (GLenum, GLenum, GLint, GLint, GLsizei))
AGL_API(void, CopyConvolutionFilter2DEXT, (GLenum, GLenum, GLint, GLint, GLsizei, GLsizei))
AGL_API(void, GetConvolutionFilterEXT, (GLenum, GLenum, GLenum, GLvoid *))
AGL_API(void, GetConvolutionParameterfvEXT, (GLenum, GLenum, GLfloat *))
AGL_API(void, GetConvolutionParameterivEXT, (GLenum, GLenum, GLint *))
AGL_API(void, GetSeparableFilterEXT, (GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *))
AGL_API(void, SeparableFilter2DEXT, (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *))
#endif

#if defined AGL_SGI_color_table
AGL_API(void, ColorTableSGI, (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
AGL_API(void, ColorTableParameterfvSGI, (GLenum, GLenum, const GLfloat *))
AGL_API(void, ColorTableParameterivSGI, (GLenum, GLenum, const GLint *))
AGL_API(void, CopyColorTableSGI, (GLenum, GLenum, GLint, GLint, GLsizei))
AGL_API(void, GetColorTableSGI, (GLenum, GLenum, GLenum, GLvoid *))
AGL_API(void, GetColorTableParameterfvSGI, (GLenum, GLenum, GLfloat *))
AGL_API(void, GetColorTableParameterivSGI, (GLenum, GLenum, GLint *))
#endif

#if defined AGL_SGIX_pixel_texture
AGL_API(void, PixelTexGenSGIX, (GLenum))
#endif

#if defined AGL_SGIS_pixel_texture
AGL_API(void, PixelTexGenParameteriSGIS, (GLenum, GLint))
AGL_API(void, PixelTexGenParameterivSGIS, (GLenum, const GLint *))
AGL_API(void, PixelTexGenParameterfSGIS, (GLenum, GLfloat))
AGL_API(void, PixelTexGenParameterfvSGIS, (GLenum, const GLfloat *))
AGL_API(void, GetPixelTexGenParameterivSGIS, (GLenum, GLint *))
AGL_API(void, GetPixelTexGenParameterfvSGIS, (GLenum, GLfloat *))
#endif

#if defined AGL_SGIS_texture4D
AGL_API(void, TexImage4DSGIS, (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
AGL_API(void, TexSubImage4DSGIS, (GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
#endif

#if defined AGL_EXT_texture_object
AGL_API(GLboolean, AreTexturesResidentEXT, (GLsizei, const GLuint *, GLboolean *))
AGL_API(void, BindTextureEXT, (GLenum, GLuint))
AGL_API(void, DeleteTexturesEXT, (GLsizei, const GLuint *))
AGL_API(void, GenTexturesEXT, (GLsizei, GLuint *))
AGL_API(GLboolean, IsTextureEXT, (GLuint))
AGL_API(void, PrioritizeTexturesEXT, (GLsizei, const GLuint *, const GLclampf *))
#endif

#if defined AGL_SGIS_detail_texture
AGL_API(void, DetailTexFuncSGIS, (GLenum, GLsizei, const GLfloat *))
AGL_API(void, GetDetailTexFuncSGIS, (GLenum, GLfloat *))
#endif

#if defined AGL_SGIS_sharpen_texture
AGL_API(void, SharpenTexFuncSGIS, (GLenum, GLsizei, const GLfloat *))
AGL_API(void, GetSharpenTexFuncSGIS, (GLenum, GLfloat *))
#endif

#if defined AGL_SGIS_multisample
AGL_API(void, SampleMaskSGIS, (GLclampf, GLboolean))
AGL_API(void, SamplePatternSGIS, (GLenum))
#endif

#if defined AGL_EXT_vertex_array
AGL_API(void, ArrayElementEXT, (GLint))
AGL_API(void, ColorPointerEXT, (GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
AGL_API(void, DrawArraysEXT, (GLenum, GLint, GLsizei))
AGL_API(void, EdgeFlagPointerEXT, (GLsizei, GLsizei, const GLboolean *))
AGL_API(void, GetPointervEXT, (GLenum, GLvoid* *))
AGL_API(void, IndexPointerEXT, (GLenum, GLsizei, GLsizei, const GLvoid *))
AGL_API(void, NormalPointerEXT, (GLenum, GLsizei, GLsizei, const GLvoid *))
AGL_API(void, TexCoordPointerEXT, (GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
AGL_API(void, VertexPointerEXT, (GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
#endif

#if defined AGL_EXT_blend_minmax
AGL_API(void, BlendEquationEXT, (GLenum))
#endif

#if defined AGL_SGIX_sprite
AGL_API(void, SpriteParameterfSGIX, (GLenum, GLfloat))
AGL_API(void, SpriteParameterfvSGIX, (GLenum, const GLfloat *))
AGL_API(void, SpriteParameteriSGIX, (GLenum, GLint))
AGL_API(void, SpriteParameterivSGIX, (GLenum, const GLint *))
#endif

#if defined AGL_EXT_point_parameters
AGL_API(void, PointParameterfEXT, (GLenum, GLfloat))
AGL_API(void, PointParameterfvEXT, (GLenum, const GLfloat *))
#endif

#if defined AGL_SGIS_point_parameters
AGL_API(void, PointParameterfSGIS, (GLenum, GLfloat))
AGL_API(void, PointParameterfvSGIS, (GLenum, const GLfloat *))
#endif

#if defined AGL_SGIX_instruments
AGL_API(GLint, GetInstrumentsSGIX, (void))
AGL_API(void, InstrumentsBufferSGIX, (GLsizei, GLint *))
AGL_API(GLint, PollInstrumentsSGIX, (GLint *))
AGL_API(void, ReadInstrumentsSGIX, (GLint))
AGL_API(void, StartInstrumentsSGIX, (void))
AGL_API(void, StopInstrumentsSGIX, (GLint))
#endif

#if defined AGL_SGIX_framezoom
AGL_API(void, FrameZoomSGIX, (GLint))
#endif

#if defined AGL_SGIX_tag_sample_buffer
AGL_API(void, TagSampleBufferSGIX, (void))
#endif

#if defined AGL_SGIX_polynomial_ffd
AGL_API(void, DeformationMap3dSGIX, (GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *))
AGL_API(void, DeformationMap3fSGIX, (GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *))
AGL_API(void, DeformSGIX, (GLbitfield))
AGL_API(void, LoadIdentityDeformationMapSGIX, (GLbitfield))
#endif

#if defined AGL_SGIX_reference_plane
AGL_API(void, ReferencePlaneSGIX, (const GLdouble *))
#endif

#if defined AGL_SGIX_flush_raster
AGL_API(void, FlushRasterSGIX, (void))
#endif

#if defined AGL_SGIS_fog_function
AGL_API(void, FogFuncSGIS, (GLsizei, const GLfloat *))
AGL_API(void, GetFogFuncSGIS, (GLfloat *))
#endif

#if defined AGL_HP_image_transform
AGL_API(void, ImageTransformParameteriHP, (GLenum, GLenum, GLint))
AGL_API(void, ImageTransformParameterfHP, (GLenum, GLenum, GLfloat))
AGL_API(void, ImageTransformParameterivHP, (GLenum, GLenum, const GLint *))
AGL_API(void, ImageTransformParameterfvHP, (GLenum, GLenum, const GLfloat *))
AGL_API(void, GetImageTransformParameterivHP, (GLenum, GLenum, GLint *))
AGL_API(void, GetImageTransformParameterfvHP, (GLenum, GLenum, GLfloat *))
#endif

#if defined AGL_EXT_color_subtable
#ifndef GL_EXT_paletted_texture
AGL_API(void, ColorSubTableEXT, (GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
#endif
AGL_API(void, CopyColorSubTableEXT, (GLenum, GLsizei, GLint, GLint, GLsizei))
#endif

#if defined AGL_PGI_misc_hints
AGL_API(void, HintPGI, (GLenum, GLint))
#endif

#if defined AGL_EXT_paletted_texture
AGL_API(void, ColorTableEXT, (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
AGL_API(void, GetColorTableEXT, (GLenum, GLenum, GLenum, GLvoid *))
AGL_API(void, GetColorTableParameterivEXT, (GLenum, GLenum, GLint *))
AGL_API(void, GetColorTableParameterfvEXT, (GLenum, GLenum, GLfloat *))
#endif

#if defined AGL_SGIX_list_priority
AGL_API(void, GetListParameterfvSGIX, (GLuint, GLenum, GLfloat *))
AGL_API(void, GetListParameterivSGIX, (GLuint, GLenum, GLint *))
AGL_API(void, ListParameterfSGIX, (GLuint, GLenum, GLfloat))
AGL_API(void, ListParameterfvSGIX, (GLuint, GLenum, const GLfloat *))
AGL_API(void, ListParameteriSGIX, (GLuint, GLenum, GLint))
AGL_API(void, ListParameterivSGIX, (GLuint, GLenum, const GLint *))
#endif

#if defined AGL_EXT_index_material
AGL_API(void, IndexMaterialEXT, (GLenum, GLenum))
#endif

#if defined AGL_EXT_index_func
AGL_API(void, IndexFuncEXT, (GLenum, GLclampf))
#endif

#if defined AGL_EXT_compiled_vertex_array
AGL_API(void, LockArraysEXT, (GLint, GLsizei))
AGL_API(void, UnlockArraysEXT, (void))
#endif

#if defined AGL_EXT_cull_vertex
AGL_API(void, CullParameterdvEXT, (GLenum, GLdouble *))
AGL_API(void, CullParameterfvEXT, (GLenum, GLfloat *))
#endif

#if defined AGL_SGIX_fragment_lighting
AGL_API(void, FragmentColorMaterialSGIX, (GLenum, GLenum))
AGL_API(void, FragmentLightfSGIX, (GLenum, GLenum, GLfloat))
AGL_API(void, FragmentLightfvSGIX, (GLenum, GLenum, const GLfloat *))
AGL_API(void, FragmentLightiSGIX, (GLenum, GLenum, GLint))
AGL_API(void, FragmentLightivSGIX, (GLenum, GLenum, const GLint *))
AGL_API(void, FragmentLightModelfSGIX, (GLenum, GLfloat))
AGL_API(void, FragmentLightModelfvSGIX, (GLenum, const GLfloat *))
AGL_API(void, FragmentLightModeliSGIX, (GLenum, GLint))
AGL_API(void, FragmentLightModelivSGIX, (GLenum, const GLint *))
AGL_API(void, FragmentMaterialfSGIX, (GLenum, GLenum, GLfloat))
AGL_API(void, FragmentMaterialfvSGIX, (GLenum, GLenum, const GLfloat *))
AGL_API(void, FragmentMaterialiSGIX, (GLenum, GLenum, GLint))
AGL_API(void, FragmentMaterialivSGIX, (GLenum, GLenum, const GLint *))
AGL_API(void, GetFragmentLightfvSGIX, (GLenum, GLenum, GLfloat *))
AGL_API(void, GetFragmentLightivSGIX, (GLenum, GLenum, GLint *))
AGL_API(void, GetFragmentMaterialfvSGIX, (GLenum, GLenum, GLfloat *))
AGL_API(void, GetFragmentMaterialivSGIX, (GLenum, GLenum, GLint *))
AGL_API(void, LightEnviSGIX, (GLenum, GLint))
#endif

#if defined AGL_EXT_draw_range_elements
AGL_API(void, DrawRangeElementsEXT, (GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *))
#endif

#if defined AGL_EXT_light_texture
AGL_API(void, ApplyTextureEXT, (GLenum))
AGL_API(void, TextureLightEXT, (GLenum))
AGL_API(void, TextureMaterialEXT, (GLenum, GLenum))
#endif

#if defined AGL_SGIX_async
AGL_API(void, AsyncMarkerSGIX, (GLuint))
AGL_API(GLint, FinishAsyncSGIX, (GLuint *))
AGL_API(GLint, PollAsyncSGIX, (GLuint *))
AGL_API(GLuint, GenAsyncMarkersSGIX, (GLsizei))
AGL_API(void, DeleteAsyncMarkersSGIX, (GLuint, GLsizei))
AGL_API(GLboolean, IsAsyncMarkerSGIX, (GLuint))
#endif

#if defined AGL_INTEL_parallel_arrays
AGL_API(void, VertexPointervINTEL, (GLint, GLenum, const GLvoid* *))
AGL_API(void, NormalPointervINTEL, (GLenum, const GLvoid* *))
AGL_API(void, ColorPointervINTEL, (GLint, GLenum, const GLvoid* *))
AGL_API(void, TexCoordPointervINTEL, (GLint, GLenum, const GLvoid* *))
#endif

#if defined AGL_EXT_pixel_transform
AGL_API(void, PixelTransformParameteriEXT, (GLenum, GLenum, GLint))
AGL_API(void, PixelTransformParameterfEXT, (GLenum, GLenum, GLfloat))
AGL_API(void, PixelTransformParameterivEXT, (GLenum, GLenum, const GLint *))
AGL_API(void, PixelTransformParameterfvEXT, (GLenum, GLenum, const GLfloat *))
#endif

#if defined AGL_EXT_secondary_color
AGL_API(void, SecondaryColor3bEXT, (GLbyte, GLbyte, GLbyte))
AGL_API(void, SecondaryColor3bvEXT, (const GLbyte *))
AGL_API(void, SecondaryColor3dEXT, (GLdouble, GLdouble, GLdouble))
AGL_API(void, SecondaryColor3dvEXT, (const GLdouble *))
AGL_API(void, SecondaryColor3fEXT, (GLfloat, GLfloat, GLfloat))
AGL_API(void, SecondaryColor3fvEXT, (const GLfloat *))
AGL_API(void, SecondaryColor3iEXT, (GLint, GLint, GLint))
AGL_API(void, SecondaryColor3ivEXT, (const GLint *))
AGL_API(void, SecondaryColor3sEXT, (GLshort, GLshort, GLshort))
AGL_API(void, SecondaryColor3svEXT, (const GLshort *))
AGL_API(void, SecondaryColor3ubEXT, (GLubyte, GLubyte, GLubyte))
AGL_API(void, SecondaryColor3ubvEXT, (const GLubyte *))
AGL_API(void, SecondaryColor3uiEXT, (GLuint, GLuint, GLuint))
AGL_API(void, SecondaryColor3uivEXT, (const GLuint *))
AGL_API(void, SecondaryColor3usEXT, (GLushort, GLushort, GLushort))
AGL_API(void, SecondaryColor3usvEXT, (const GLushort *))
AGL_API(void, SecondaryColorPointerEXT, (GLint, GLenum, GLsizei, const GLvoid *))
#endif

#if defined AGL_EXT_texture_perturb_normal
AGL_API(void, TextureNormalEXT, (GLenum))
#endif

#if defined AGL_EXT_multi_draw_arrays
AGL_API(void, MultiDrawArraysEXT, (GLenum, GLint *, GLsizei *, GLsizei))
AGL_API(void, MultiDrawElementsEXT, (GLenum, const GLsizei *, GLenum, const GLvoid* *, GLsizei))
#endif

#if defined AGL_EXT_fog_coord
AGL_API(void, FogCoordfEXT, (GLfloat))
AGL_API(void, FogCoordfvEXT, (const GLfloat *))
AGL_API(void, FogCoorddEXT, (GLdouble))
AGL_API(void, FogCoorddvEXT, (const GLdouble *))
AGL_API(void, FogCoordPointerEXT, (GLenum, GLsizei, const GLvoid *))
#endif

#if defined AGL_EXT_coordinate_frame
AGL_API(void, Tangent3bEXT, (GLbyte, GLbyte, GLbyte))
AGL_API(void, Tangent3bvEXT, (const GLbyte *))
AGL_API(void, Tangent3dEXT, (GLdouble, GLdouble, GLdouble))
AGL_API(void, Tangent3dvEXT, (const GLdouble *))
AGL_API(void, Tangent3fEXT, (GLfloat, GLfloat, GLfloat))
AGL_API(void, Tangent3fvEXT, (const GLfloat *))
AGL_API(void, Tangent3iEXT, (GLint, GLint, GLint))
AGL_API(void, Tangent3ivEXT, (const GLint *))
AGL_API(void, Tangent3sEXT, (GLshort, GLshort, GLshort))
AGL_API(void, Tangent3svEXT, (const GLshort *))
AGL_API(void, Binormal3bEXT, (GLbyte, GLbyte, GLbyte))
AGL_API(void, Binormal3bvEXT, (const GLbyte *))
AGL_API(void, Binormal3dEXT, (GLdouble, GLdouble, GLdouble))
AGL_API(void, Binormal3dvEXT, (const GLdouble *))
AGL_API(void, Binormal3fEXT, (GLfloat, GLfloat, GLfloat))
AGL_API(void, Binormal3fvEXT, (const GLfloat *))
AGL_API(void, Binormal3iEXT, (GLint, GLint, GLint))
AGL_API(void, Binormal3ivEXT, (const GLint *))
AGL_API(void, Binormal3sEXT, (GLshort, GLshort, GLshort))
AGL_API(void, Binormal3svEXT, (const GLshort *))
AGL_API(void, TangentPointerEXT, (GLenum, GLsizei, const GLvoid *))
AGL_API(void, BinormalPointerEXT, (GLenum, GLsizei, const GLvoid *))
#endif

#if defined AGL_SUNX_constant_data
AGL_API(void, FinishTextureSUNX, (void))
#endif

#if defined AGL_SUN_global_alpha
AGL_API(void, GlobalAlphaFactorbSUN, (GLbyte))
AGL_API(void, GlobalAlphaFactorsSUN, (GLshort))
AGL_API(void, GlobalAlphaFactoriSUN, (GLint))
AGL_API(void, GlobalAlphaFactorfSUN, (GLfloat))
AGL_API(void, GlobalAlphaFactordSUN, (GLdouble))
AGL_API(void, GlobalAlphaFactorubSUN, (GLubyte))
AGL_API(void, GlobalAlphaFactorusSUN, (GLushort))
AGL_API(void, GlobalAlphaFactoruiSUN, (GLuint))
#endif

#if defined AGL_SUN_triangle_list
AGL_API(void, ReplacementCodeuiSUN, (GLuint))
AGL_API(void, ReplacementCodeusSUN, (GLushort))
AGL_API(void, ReplacementCodeubSUN, (GLubyte))
AGL_API(void, ReplacementCodeuivSUN, (const GLuint *))
AGL_API(void, ReplacementCodeusvSUN, (const GLushort *))
AGL_API(void, ReplacementCodeubvSUN, (const GLubyte *))
AGL_API(void, ReplacementCodePointerSUN, (GLenum, GLsizei, const GLvoid* *))
#endif

#if defined AGL_SUN_vertex
AGL_API(void, Color4ubVertex2fSUN, (GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat))
AGL_API(void, Color4ubVertex2fvSUN, (const GLubyte *, const GLfloat *))
AGL_API(void, Color4ubVertex3fSUN, (GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat))
AGL_API(void, Color4ubVertex3fvSUN, (const GLubyte *, const GLfloat *))
AGL_API(void, Color3fVertex3fSUN, (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, Color3fVertex3fvSUN, (const GLfloat *, const GLfloat *))
AGL_API(void, Normal3fVertex3fSUN, (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, Normal3fVertex3fvSUN, (const GLfloat *, const GLfloat *))
AGL_API(void, Color4fNormal3fVertex3fSUN, (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, Color4fNormal3fVertex3fvSUN, (const GLfloat *, const GLfloat *, const GLfloat *))
AGL_API(void, TexCoord2fVertex3fSUN, (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, TexCoord2fVertex3fvSUN, (const GLfloat *, const GLfloat *))
AGL_API(void, TexCoord4fVertex4fSUN, (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, TexCoord4fVertex4fvSUN, (const GLfloat *, const GLfloat *))
AGL_API(void, TexCoord2fColor4ubVertex3fSUN, (GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat))
AGL_API(void, TexCoord2fColor4ubVertex3fvSUN, (const GLfloat *, const GLubyte *, const GLfloat *))
AGL_API(void, TexCoord2fColor3fVertex3fSUN, (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, TexCoord2fColor3fVertex3fvSUN, (const GLfloat *, const GLfloat *, const GLfloat *))
AGL_API(void, TexCoord2fNormal3fVertex3fSUN, (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, TexCoord2fNormal3fVertex3fvSUN, (const GLfloat *, const GLfloat *, const GLfloat *))
AGL_API(void, TexCoord2fColor4fNormal3fVertex3fSUN, (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, TexCoord2fColor4fNormal3fVertex3fvSUN, (const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *))
AGL_API(void, TexCoord4fColor4fNormal3fVertex4fSUN, (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, TexCoord4fColor4fNormal3fVertex4fvSUN, (const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *))
AGL_API(void, ReplacementCodeuiVertex3fSUN, (GLuint, GLfloat, GLfloat, GLfloat))
AGL_API(void, ReplacementCodeuiVertex3fvSUN, (const GLuint *, const GLfloat *))
AGL_API(void, ReplacementCodeuiColor4ubVertex3fSUN, (GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat))
AGL_API(void, ReplacementCodeuiColor4ubVertex3fvSUN, (const GLuint *, const GLubyte *, const GLfloat *))
AGL_API(void, ReplacementCodeuiColor3fVertex3fSUN, (GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, ReplacementCodeuiColor3fVertex3fvSUN, (const GLuint *, const GLfloat *, const GLfloat *))
AGL_API(void, ReplacementCodeuiNormal3fVertex3fSUN, (GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, ReplacementCodeuiNormal3fVertex3fvSUN, (const GLuint *, const GLfloat *, const GLfloat *))
AGL_API(void, ReplacementCodeuiColor4fNormal3fVertex3fSUN, (GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, ReplacementCodeuiColor4fNormal3fVertex3fvSUN, (const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *))
AGL_API(void, ReplacementCodeuiTexCoord2fVertex3fSUN, (GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, ReplacementCodeuiTexCoord2fVertex3fvSUN, (const GLuint *, const GLfloat *, const GLfloat *))
AGL_API(void, ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, (GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, (const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *))
AGL_API(void, ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, (GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, (const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *))
#endif
	
#if defined AGL_EXT_blend_func_separate
AGL_API(void, BlendFuncSeparateEXT, (GLenum, GLenum, GLenum, GLenum))
#endif

#if defined AGL_INGR_blend_func_separate
AGL_API(void, BlendFuncSeparateINGR, (GLenum, GLenum, GLenum, GLenum))
#endif

#if defined AGL_EXT_vertex_weighting
AGL_API(void, VertexWeightfEXT, (GLfloat))
AGL_API(void, VertexWeightfvEXT, (const GLfloat *))
AGL_API(void, VertexWeightPointerEXT, (GLsizei, GLenum, GLsizei, const GLvoid *))
#endif

#if defined AGL_NV_vertex_array_range
AGL_API(void, FlushVertexArrayRangeNV, (void))
AGL_API(void, VertexArrayRangeNV, (GLsizei, const GLvoid *))
#endif

#if defined AGL_NV_register_combiners
AGL_API(void, CombinerParameterfvNV, (GLenum, const GLfloat *))
AGL_API(void, CombinerParameterfNV, (GLenum, GLfloat))
AGL_API(void, CombinerParameterivNV, (GLenum, const GLint *))
AGL_API(void, CombinerParameteriNV, (GLenum, GLint))
AGL_API(void, CombinerInputNV, (GLenum, GLenum, GLenum, GLenum, GLenum, GLenum))
AGL_API(void, CombinerOutputNV, (GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean))
AGL_API(void, FinalCombinerInputNV, (GLenum, GLenum, GLenum, GLenum))
AGL_API(void, GetCombinerInputParameterfvNV, (GLenum, GLenum, GLenum, GLenum, GLfloat *))
AGL_API(void, GetCombinerInputParameterivNV, (GLenum, GLenum, GLenum, GLenum, GLint *))
AGL_API(void, GetCombinerOutputParameterfvNV, (GLenum, GLenum, GLenum, GLfloat *))
AGL_API(void, GetCombinerOutputParameterivNV, (GLenum, GLenum, GLenum, GLint *))
AGL_API(void, GetFinalCombinerInputParameterfvNV, (GLenum, GLenum, GLfloat *))
AGL_API(void, GetFinalCombinerInputParameterivNV, (GLenum, GLenum, GLint *))
#endif

#if defined AGL_MESA_resize_buffers
AGL_API(void, ResizeBuffersMESA, (void))
#endif

#if defined AGL_MESA_window_pos
AGL_API(void, WindowPos2dMESA, (GLdouble, GLdouble))
AGL_API(void, WindowPos2dvMESA, (const GLdouble *))
AGL_API(void, WindowPos2fMESA, (GLfloat, GLfloat))
AGL_API(void, WindowPos2fvMESA, (const GLfloat *))
AGL_API(void, WindowPos2iMESA, (GLint, GLint))
AGL_API(void, WindowPos2ivMESA, (const GLint *))
AGL_API(void, WindowPos2sMESA, (GLshort, GLshort))
AGL_API(void, WindowPos2svMESA, (const GLshort *))
AGL_API(void, WindowPos3dMESA, (GLdouble, GLdouble, GLdouble))
AGL_API(void, WindowPos3dvMESA, (const GLdouble *))
AGL_API(void, WindowPos3fMESA, (GLfloat, GLfloat, GLfloat))
AGL_API(void, WindowPos3fvMESA, (const GLfloat *))
AGL_API(void, WindowPos3iMESA, (GLint, GLint, GLint))
AGL_API(void, WindowPos3ivMESA, (const GLint *))
AGL_API(void, WindowPos3sMESA, (GLshort, GLshort, GLshort))
AGL_API(void, WindowPos3svMESA, (const GLshort *))
AGL_API(void, WindowPos4dMESA, (GLdouble, GLdouble, GLdouble, GLdouble))
AGL_API(void, WindowPos4dvMESA, (const GLdouble *))
AGL_API(void, WindowPos4fMESA, (GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, WindowPos4fvMESA, (const GLfloat *))
AGL_API(void, WindowPos4iMESA, (GLint, GLint, GLint, GLint))
AGL_API(void, WindowPos4ivMESA, (const GLint *))
AGL_API(void, WindowPos4sMESA, (GLshort, GLshort, GLshort, GLshort))
AGL_API(void, WindowPos4svMESA, (const GLshort *))
#endif

#if defined AGL_IBM_multimode_draw_arrays
AGL_API(void, MultiModeDrawArraysIBM, (GLenum, const GLint *, const GLsizei *, GLsizei, GLint))
AGL_API(void, MultiModeDrawElementsIBM, (const GLenum *, const GLsizei *, GLenum, const GLvoid* *, GLsizei, GLint))
#endif

#ifdef AGK_IBM_vertex_array_lists
AGL_API(void, ColorPointerListIBM, (GLint, GLenum, GLint, const GLvoid* *, GLint))
AGL_API(void, SecondaryColorPointerListIBM, (GLint, GLenum, GLint, const GLvoid* *, GLint))
AGL_API(void, EdgeFlagPointerListIBM, (GLint, const GLboolean* *, GLint))
AGL_API(void, FogCoordPointerListIBM, (GLenum, GLint, const GLvoid* *, GLint))
AGL_API(void, IndexPointerListIBM, (GLenum, GLint, const GLvoid* *, GLint))
AGL_API(void, NormalPointerListIBM, (GLenum, GLint, const GLvoid* *, GLint))
AGL_API(void, TexCoordPointerListIBM, (GLint, GLenum, GLint, const GLvoid* *, GLint))
AGL_API(void, VertexPointerListIBM, (GLint, GLenum, GLint, const GLvoid* *, GLint))
#endif

#if defined AGL_3DFX_tbuffer
AGL_API(void, TbufferMask3DFX, (GLuint))
#endif

#if defined AGL_EXT_multisample
AGL_API(void, SampleMaskEXT, (GLclampf, GLboolean))
AGL_API(void, SamplePatternEXT, (GLenum))
#endif

#if defined AGL_SGIS_texture_color_mask
AGL_API(void, TextureColorMaskSGIS, (GLboolean, GLboolean, GLboolean, GLboolean))
#endif

#if defined AGL_SGIX_igloo_interface
AGL_API(void, IglooInterfaceSGIX, (GLenum, const GLvoid *))
#endif

#if defined AGL_NV_fence
AGL_API(void, DeleteFencesNV, (GLsizei, const GLuint *))
AGL_API(void, GenFencesNV, (GLsizei, GLuint *))
AGL_API(GLboolean, IsFenceNV, (GLuint))
AGL_API(GLboolean, TestFenceNV, (GLuint))
AGL_API(void, GetFenceivNV, (GLuint, GLenum, GLint *))
AGL_API(void, FinishFenceNV, (GLuint))
AGL_API(void, SetFenceNV, (GLuint, GLenum))
#endif

#if defined AGL_NV_evaluators
AGL_API(void, MapControlPointsNV, (GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const GLvoid *))
AGL_API(void, MapParameterivNV, (GLenum, GLenum, const GLint *))
AGL_API(void, MapParameterfvNV, (GLenum, GLenum, const GLfloat *))
AGL_API(void, GetMapControlPointsNV, (GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, GLvoid *))
AGL_API(void, GetMapParameterivNV, (GLenum, GLenum, GLint *))
AGL_API(void, GetMapParameterfvNV, (GLenum, GLenum, GLfloat *))
AGL_API(void, GetMapAttribParameterivNV, (GLenum, GLuint, GLenum, GLint *))
AGL_API(void, GetMapAttribParameterfvNV, (GLenum, GLuint, GLenum, GLfloat *))
AGL_API(void, EvalMapsNV, (GLenum, GLenum))
#endif

#if defined AGL_NV_register_combiners2
AGL_API(void, CombinerStageParameterfvNV, (GLenum, GLenum, const GLfloat *))
AGL_API(void, GetCombinerStageParameterfvNV, (GLenum, GLenum, GLfloat *))
#endif

#if defined AGL_NV_vertex_program
AGL_API(GLboolean, AreProgramsResidentNV, (GLsizei, const GLuint *, GLboolean *))
AGL_API(void, BindProgramNV, (GLenum, GLuint))
AGL_API(void, DeleteProgramsNV, (GLsizei, const GLuint *))
AGL_API(void, ExecuteProgramNV, (GLenum, GLuint, const GLfloat *))
AGL_API(void, GenProgramsNV, (GLsizei, GLuint *))
AGL_API(void, GetProgramParameterdvNV, (GLenum, GLuint, GLenum, GLdouble *))
AGL_API(void, GetProgramParameterfvNV, (GLenum, GLuint, GLenum, GLfloat *))
AGL_API(void, GetProgramivNV, (GLuint, GLenum, GLint *))
AGL_API(void, GetProgramStringNV, (GLuint, GLenum, GLubyte *))
AGL_API(void, GetTrackMatrixivNV, (GLenum, GLuint, GLenum, GLint *))
AGL_API(void, GetVertexAttribdvNV, (GLuint, GLenum, GLdouble *))
AGL_API(void, GetVertexAttribfvNV, (GLuint, GLenum, GLfloat *))
AGL_API(void, GetVertexAttribivNV, (GLuint, GLenum, GLint *))
AGL_API(void, GetVertexAttribPointervNV, (GLuint, GLenum, GLvoid* *))
AGL_API(GLboolean, IsProgramNV, (GLuint))
AGL_API(void, LoadProgramNV, (GLenum, GLuint, GLsizei, const GLubyte *))
AGL_API(void, ProgramParameter4dNV, (GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble))
AGL_API(void, ProgramParameter4dvNV, (GLenum, GLuint, const GLdouble *))
AGL_API(void, ProgramParameter4fNV, (GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, ProgramParameter4fvNV, (GLenum, GLuint, const GLfloat *))
AGL_API(void, ProgramParameters4dvNV, (GLenum, GLuint, GLuint, const GLdouble *))
AGL_API(void, ProgramParameters4fvNV, (GLenum, GLuint, GLuint, const GLfloat *))
AGL_API(void, RequestResidentProgramsNV, (GLsizei, const GLuint *))
AGL_API(void, TrackMatrixNV, (GLenum, GLuint, GLenum, GLenum))
AGL_API(void, VertexAttribPointerNV, (GLuint, GLint, GLenum, GLsizei, const GLvoid *))
AGL_API(void, VertexAttrib1dNV, (GLuint, GLdouble))
AGL_API(void, VertexAttrib1dvNV, (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib1fNV, (GLuint, GLfloat))
AGL_API(void, VertexAttrib1fvNV, (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib1sNV, (GLuint, GLshort))
AGL_API(void, VertexAttrib1svNV, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib2dNV, (GLuint, GLdouble, GLdouble))
AGL_API(void, VertexAttrib2dvNV, (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib2fNV, (GLuint, GLfloat, GLfloat))
AGL_API(void, VertexAttrib2fvNV, (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib2sNV, (GLuint, GLshort, GLshort))
AGL_API(void, VertexAttrib2svNV, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib3dNV, (GLuint, GLdouble, GLdouble, GLdouble))
AGL_API(void, VertexAttrib3dvNV, (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib3fNV, (GLuint, GLfloat, GLfloat, GLfloat))
AGL_API(void, VertexAttrib3fvNV, (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib3sNV, (GLuint, GLshort, GLshort, GLshort))
AGL_API(void, VertexAttrib3svNV, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib4dNV, (GLuint, GLdouble, GLdouble, GLdouble, GLdouble))
AGL_API(void, VertexAttrib4dvNV, (GLuint, const GLdouble *))
AGL_API(void, VertexAttrib4fNV, (GLuint, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, VertexAttrib4fvNV, (GLuint, const GLfloat *))
AGL_API(void, VertexAttrib4sNV, (GLuint, GLshort, GLshort, GLshort, GLshort))
AGL_API(void, VertexAttrib4svNV, (GLuint, const GLshort *))
AGL_API(void, VertexAttrib4ubNV, (GLuint, GLubyte, GLubyte, GLubyte, GLubyte))
AGL_API(void, VertexAttrib4ubvNV, (GLuint, const GLubyte *))
AGL_API(void, VertexAttribs1dvNV, (GLuint, GLsizei, const GLdouble *))
AGL_API(void, VertexAttribs1fvNV, (GLuint, GLsizei, const GLfloat *))
AGL_API(void, VertexAttribs1svNV, (GLuint, GLsizei, const GLshort *))
AGL_API(void, VertexAttribs2dvNV, (GLuint, GLsizei, const GLdouble *))
AGL_API(void, VertexAttribs2fvNV, (GLuint, GLsizei, const GLfloat *))
AGL_API(void, VertexAttribs2svNV, (GLuint, GLsizei, const GLshort *))
AGL_API(void, VertexAttribs3dvNV, (GLuint, GLsizei, const GLdouble *))
AGL_API(void, VertexAttribs3fvNV, (GLuint, GLsizei, const GLfloat *))
AGL_API(void, VertexAttribs3svNV, (GLuint, GLsizei, const GLshort *))
AGL_API(void, VertexAttribs4dvNV, (GLuint, GLsizei, const GLdouble *))
AGL_API(void, VertexAttribs4fvNV, (GLuint, GLsizei, const GLfloat *))
AGL_API(void, VertexAttribs4svNV, (GLuint, GLsizei, const GLshort *))
AGL_API(void, VertexAttribs4ubvNV, (GLuint, GLsizei, const GLubyte *))
#endif

#if defined AGL_ATI_envmap_bumpmap
AGL_API(void, TexBumpParameterivATI, (GLenum, const GLint *))
AGL_API(void, TexBumpParameterfvATI, (GLenum, const GLfloat *))
AGL_API(void, GetTexBumpParameterivATI, (GLenum, GLint *))
AGL_API(void, GetTexBumpParameterfvATI, (GLenum, GLfloat *))
#endif

#if defined AGL_ATI_fragment_shader
AGL_API(GLuint, GenFragmentShadersATI, (GLuint))
AGL_API(void, BindFragmentShaderATI, (GLuint))
AGL_API(void, DeleteFragmentShaderATI, (GLuint))
AGL_API(void, BeginFragmentShaderATI, (void))
AGL_API(void, EndFragmentShaderATI, (void))
AGL_API(void, PassTexCoordATI, (GLuint, GLuint, GLenum))
AGL_API(void, SampleMapATI, (GLuint, GLuint, GLenum))
AGL_API(void, ColorFragmentOp1ATI, (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint))
AGL_API(void, ColorFragmentOp2ATI, (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint))
AGL_API(void, ColorFragmentOp3ATI, (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint))
AGL_API(void, AlphaFragmentOp1ATI, (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint))
AGL_API(void, AlphaFragmentOp2ATI, (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint))
AGL_API(void, AlphaFragmentOp3ATI, (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint))
AGL_API(void, SetFragmentShaderConstantATI, (GLuint, const GLfloat *))
#endif

#if defined AGL_ATI_pn_triangles
AGL_API(void, PNTrianglesiATI, (GLenum, GLint))
AGL_API(void, PNTrianglesfATI, (GLenum, GLfloat))
#endif

#if defined AGL_ATI_vertex_array_object
AGL_API(GLuint, NewObjectBufferATI, (GLsizei, const GLvoid *, GLenum))
AGL_API(GLboolean, IsObjectBufferATI, (GLuint))
AGL_API(void, UpdateObjectBufferATI, (GLuint, GLuint, GLsizei, const GLvoid *, GLenum))
AGL_API(void, GetObjectBufferfvATI, (GLuint, GLenum, GLfloat *))
AGL_API(void, GetObjectBufferivATI, (GLuint, GLenum, GLint *))
AGL_API(void, FreeObjectBufferATI, (GLuint))
AGL_API(void, ArrayObjectATI, (GLenum, GLint, GLenum, GLsizei, GLuint, GLuint))
AGL_API(void, GetArrayObjectfvATI, (GLenum, GLenum, GLfloat *))
AGL_API(void, GetArrayObjectivATI, (GLenum, GLenum, GLint *))
AGL_API(void, VariantArrayObjectATI, (GLuint, GLenum, GLsizei, GLuint, GLuint))
AGL_API(void, GetVariantArrayObjectfvATI, (GLuint, GLenum, GLfloat *))
AGL_API(void, GetVariantArrayObjectivATI, (GLuint, GLenum, GLint *))
#endif

#if defined AGL_EXT_vertex_shader
AGL_API(void, BeginVertexShaderEXT, (void))
AGL_API(void, EndVertexShaderEXT, (void))
AGL_API(void, BindVertexShaderEXT, (GLuint))
AGL_API(GLuint, GenVertexShadersEXT, (GLuint))
AGL_API(void, DeleteVertexShaderEXT, (GLuint))
AGL_API(void, ShaderOp1EXT, (GLenum, GLuint, GLuint))
AGL_API(void, ShaderOp2EXT, (GLenum, GLuint, GLuint, GLuint))
AGL_API(void, ShaderOp3EXT, (GLenum, GLuint, GLuint, GLuint, GLuint))
AGL_API(void, SwizzleEXT, (GLuint, GLuint, GLenum, GLenum, GLenum, GLenum))
AGL_API(void, WriteMaskEXT, (GLuint, GLuint, GLenum, GLenum, GLenum, GLenum))
AGL_API(void, InsertComponentEXT, (GLuint, GLuint, GLuint))
AGL_API(void, ExtractComponentEXT, (GLuint, GLuint, GLuint))
AGL_API(GLuint, GenSymbolsEXT, (GLenum, GLenum, GLenum, GLuint))
AGL_API(void, SetInvariantEXT, (GLuint, GLenum, const GLvoid *))
AGL_API(void, SetLocalConstantEXT, (GLuint, GLenum, const GLvoid *))
AGL_API(void, VariantbvEXT, (GLuint, const GLbyte *))
AGL_API(void, VariantsvEXT, (GLuint, const GLshort *))
AGL_API(void, VariantivEXT, (GLuint, const GLint *))
AGL_API(void, VariantfvEXT, (GLuint, const GLfloat *))
AGL_API(void, VariantdvEXT, (GLuint, const GLdouble *))
AGL_API(void, VariantubvEXT, (GLuint, const GLubyte *))
AGL_API(void, VariantusvEXT, (GLuint, const GLushort *))
AGL_API(void, VariantuivEXT, (GLuint, const GLuint *))
AGL_API(void, VariantPointerEXT, (GLuint, GLenum, GLuint, const GLvoid *))
AGL_API(void, EnableVariantClientStateEXT, (GLuint))
AGL_API(void, DisableVariantClientStateEXT, (GLuint))
AGL_API(GLuint, BindLightParameterEXT, (GLenum, GLenum))
AGL_API(GLuint, BindMaterialParameterEXT, (GLenum, GLenum))
AGL_API(GLuint, BindTexGenParameterEXT, (GLenum, GLenum, GLenum))
AGL_API(GLuint, BindTextureUnitParameterEXT, (GLenum, GLenum))
AGL_API(GLuint, BindParameterEXT, (GLenum))
AGL_API(GLboolean, IsVariantEnabledEXT, (GLuint, GLenum))
AGL_API(void, GetVariantBooleanvEXT, (GLuint, GLenum, GLboolean *))
AGL_API(void, GetVariantIntegervEXT, (GLuint, GLenum, GLint *))
AGL_API(void, GetVariantFloatvEXT, (GLuint, GLenum, GLfloat *))
AGL_API(void, GetVariantPointervEXT, (GLuint, GLenum, GLvoid* *))
AGL_API(void, GetInvariantBooleanvEXT, (GLuint, GLenum, GLboolean *))
AGL_API(void, GetInvariantIntegervEXT, (GLuint, GLenum, GLint *))
AGL_API(void, GetInvariantFloatvEXT, (GLuint, GLenum, GLfloat *))
AGL_API(void, GetLocalConstantBooleanvEXT, (GLuint, GLenum, GLboolean *))
AGL_API(void, GetLocalConstantIntegervEXT, (GLuint, GLenum, GLint *))
AGL_API(void, GetLocalConstantFloatvEXT, (GLuint, GLenum, GLfloat *))
#endif

#if defined AGL_ATI_vertex_streams
AGL_API(void, VertexStream1sATI, (GLenum, GLshort))
AGL_API(void, VertexStream1svATI, (GLenum, const GLshort *))
AGL_API(void, VertexStream1iATI, (GLenum, GLint))
AGL_API(void, VertexStream1ivATI, (GLenum, const GLint *))
AGL_API(void, VertexStream1fATI, (GLenum, GLfloat))
AGL_API(void, VertexStream1fvATI, (GLenum, const GLfloat *))
AGL_API(void, VertexStream1dATI, (GLenum, GLdouble))
AGL_API(void, VertexStream1dvATI, (GLenum, const GLdouble *))
AGL_API(void, VertexStream2sATI, (GLenum, GLshort, GLshort))
AGL_API(void, VertexStream2svATI, (GLenum, const GLshort *))
AGL_API(void, VertexStream2iATI, (GLenum, GLint, GLint))
AGL_API(void, VertexStream2ivATI, (GLenum, const GLint *))
AGL_API(void, VertexStream2fATI, (GLenum, GLfloat, GLfloat))
AGL_API(void, VertexStream2fvATI, (GLenum, const GLfloat *))
AGL_API(void, VertexStream2dATI, (GLenum, GLdouble, GLdouble))
AGL_API(void, VertexStream2dvATI, (GLenum, const GLdouble *))
AGL_API(void, VertexStream3sATI, (GLenum, GLshort, GLshort, GLshort))
AGL_API(void, VertexStream3svATI, (GLenum, const GLshort *))
AGL_API(void, VertexStream3iATI, (GLenum, GLint, GLint, GLint))
AGL_API(void, VertexStream3ivATI, (GLenum, const GLint *))
AGL_API(void, VertexStream3fATI, (GLenum, GLfloat, GLfloat, GLfloat))
AGL_API(void, VertexStream3fvATI, (GLenum, const GLfloat *))
AGL_API(void, VertexStream3dATI, (GLenum, GLdouble, GLdouble, GLdouble))
AGL_API(void, VertexStream3dvATI, (GLenum, const GLdouble *))
AGL_API(void, VertexStream4sATI, (GLenum, GLshort, GLshort, GLshort, GLshort))
AGL_API(void, VertexStream4svATI, (GLenum, const GLshort *))
AGL_API(void, VertexStream4iATI, (GLenum, GLint, GLint, GLint, GLint))
AGL_API(void, VertexStream4ivATI, (GLenum, const GLint *))
AGL_API(void, VertexStream4fATI, (GLenum, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, VertexStream4fvATI, (GLenum, const GLfloat *))
AGL_API(void, VertexStream4dATI, (GLenum, GLdouble, GLdouble, GLdouble, GLdouble))
AGL_API(void, VertexStream4dvATI, (GLenum, const GLdouble *))
AGL_API(void, NormalStream3bATI, (GLenum, GLbyte, GLbyte, GLbyte))
AGL_API(void, NormalStream3bvATI, (GLenum, const GLbyte *))
AGL_API(void, NormalStream3sATI, (GLenum, GLshort, GLshort, GLshort))
AGL_API(void, NormalStream3svATI, (GLenum, const GLshort *))
AGL_API(void, NormalStream3iATI, (GLenum, GLint, GLint, GLint))
AGL_API(void, NormalStream3ivATI, (GLenum, const GLint *))
AGL_API(void, NormalStream3fATI, (GLenum, GLfloat, GLfloat, GLfloat))
AGL_API(void, NormalStream3fvATI, (GLenum, const GLfloat *))
AGL_API(void, NormalStream3dATI, (GLenum, GLdouble, GLdouble, GLdouble))
AGL_API(void, NormalStream3dvATI, (GLenum, const GLdouble *))
AGL_API(void, ClientActiveVertexStreamATI, (GLenum))
AGL_API(void, VertexBlendEnviATI, (GLenum, GLint))
AGL_API(void, VertexBlendEnvfATI, (GLenum, GLfloat))
#endif

#if defined AGL_ATI_element_array
AGL_API(void, ElementPointerATI, (GLenum, const GLvoid *))
AGL_API(void, DrawElementArrayATI, (GLenum, GLsizei))
AGL_API(void, DrawRangeElementArrayATI, (GLenum, GLuint, GLuint, GLsizei))
#endif

#if defined AGL_SUN_mesh_array
AGL_API(void, DrawMeshArraysSUN, (GLenum, GLint, GLsizei, GLsizei))
#endif

#if defined AGL_NV_occlusion_query
AGL_API(void, GenOcclusionQueriesNV, (GLsizei, GLuint *))
AGL_API(void, DeleteOcclusionQueriesNV, (GLsizei, const GLuint *))
AGL_API(GLboolean, IsOcclusionQueryNV, (GLuint))
AGL_API(void, BeginOcclusionQueryNV, (GLuint))
AGL_API(void, EndOcclusionQueryNV, (void))
AGL_API(void, GetOcclusionQueryivNV, (GLuint, GLenum, GLint *))
AGL_API(void, GetOcclusionQueryuivNV, (GLuint, GLenum, GLuint *))
#endif

#if defined AGL_NV_point_sprite
AGL_API(void, PointParameteriNV, (GLenum, GLint))
AGL_API(void, PointParameterivNV, (GLenum, const GLint *))
#endif

#if defined AGL_EXT_stencil_two_side
AGL_API(void, ActiveStencilFaceEXT, (GLenum))
#endif

#if defined AGL_APPLE_element_array
AGL_API(void, ElementPointerAPPLE, (GLenum, const GLvoid *))
AGL_API(void, DrawElementArrayAPPLE, (GLenum, GLint, GLsizei))
AGL_API(void, DrawRangeElementArrayAPPLE, (GLenum, GLuint, GLuint, GLint, GLsizei))
AGL_API(void, MultiDrawElementArrayAPPLE, (GLenum, const GLint *, const GLsizei *, GLsizei))
AGL_API(void, MultiDrawRangeElementArrayAPPLE, (GLenum, GLuint, GLuint, const GLint *, const GLsizei *, GLsizei))
#endif

#if defined AGL_APPLE_fence
AGL_API(void, GenFencesAPPLE, (GLsizei, GLuint *))
AGL_API(void, DeleteFencesAPPLE, (GLsizei, const GLuint *))
AGL_API(void, SetFenceAPPLE, (GLuint))
AGL_API(GLboolean, IsFenceAPPLE, (GLuint))
AGL_API(GLboolean, TestFenceAPPLE, (GLuint))
AGL_API(void, FinishFenceAPPLE, (GLuint))
AGL_API(GLboolean, TestObjectAPPLE, (GLenum, GLuint))
AGL_API(void, FinishObjectAPPLE, (GLenum, GLint))
#endif

#if defined AGL_APPLE_vertex_array_object
AGL_API(void, BindVertexArrayAPPLE, (GLuint))
AGL_API(void, DeleteVertexArraysAPPLE, (GLsizei, const GLuint *))
AGL_API(void, GenVertexArraysAPPLE, (GLsizei, const GLuint *))
AGL_API(GLboolean, IsVertexArrayAPPLE, (GLuint))
#endif

#if defined AGL_APPLE_vertex_array_range
AGL_API(void, VertexArrayRangeAPPLE, (GLsizei, GLvoid *))
AGL_API(void, FlushVertexArrayRangeAPPLE, (GLsizei, GLvoid *))
AGL_API(void, VertexArrayParameteriAPPLE, (GLenum, GLint))
#endif

#if defined AGL_ATI_draw_buffers
AGL_API(void, DrawBuffersATI, (GLsizei, const GLenum *))
#endif

#if defined AGL_NV_fragment_program
AGL_API(void, ProgramNamedParameter4fNV, (GLuint, GLsizei, const GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, ProgramNamedParameter4dNV, (GLuint, GLsizei, const GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble))
AGL_API(void, ProgramNamedParameter4fvNV, (GLuint, GLsizei, const GLubyte *, const GLfloat *))
AGL_API(void, ProgramNamedParameter4dvNV, (GLuint, GLsizei, const GLubyte *, const GLdouble *))
AGL_API(void, GetProgramNamedParameterfvNV, (GLuint, GLsizei, const GLubyte *, GLfloat *))
AGL_API(void, GetProgramNamedParameterdvNV, (GLuint, GLsizei, const GLubyte *, GLdouble *))
#endif

#if defined AGL_NV_half_float
AGL_API(void, Vertex2hNV, (GLhalfNV, GLhalfNV))
AGL_API(void, Vertex2hvNV, (const GLhalfNV *))
AGL_API(void, Vertex3hNV, (GLhalfNV, GLhalfNV, GLhalfNV))
AGL_API(void, Vertex3hvNV, (const GLhalfNV *))
AGL_API(void, Vertex4hNV, (GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV))
AGL_API(void, Vertex4hvNV, (const GLhalfNV *))
AGL_API(void, Normal3hNV, (GLhalfNV, GLhalfNV, GLhalfNV))
AGL_API(void, Normal3hvNV, (const GLhalfNV *))
AGL_API(void, Color3hNV, (GLhalfNV, GLhalfNV, GLhalfNV))
AGL_API(void, Color3hvNV, (const GLhalfNV *))
AGL_API(void, Color4hNV, (GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV))
AGL_API(void, Color4hvNV, (const GLhalfNV *))
AGL_API(void, TexCoord1hNV, (GLhalfNV))
AGL_API(void, TexCoord1hvNV, (const GLhalfNV *))
AGL_API(void, TexCoord2hNV, (GLhalfNV, GLhalfNV))
AGL_API(void, TexCoord2hvNV, (const GLhalfNV *))
AGL_API(void, TexCoord3hNV, (GLhalfNV, GLhalfNV, GLhalfNV))
AGL_API(void, TexCoord3hvNV, (const GLhalfNV *))
AGL_API(void, TexCoord4hNV, (GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV))
AGL_API(void, TexCoord4hvNV, (const GLhalfNV *))
AGL_API(void, MultiTexCoord1hNV, (GLenum, GLhalfNV))
AGL_API(void, MultiTexCoord1hvNV, (GLenum, const GLhalfNV *))
AGL_API(void, MultiTexCoord2hNV, (GLenum, GLhalfNV, GLhalfNV))
AGL_API(void, MultiTexCoord2hvNV, (GLenum, const GLhalfNV *))
AGL_API(void, MultiTexCoord3hNV, (GLenum, GLhalfNV, GLhalfNV, GLhalfNV))
AGL_API(void, MultiTexCoord3hvNV, (GLenum, const GLhalfNV *))
AGL_API(void, MultiTexCoord4hNV, (GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV))
AGL_API(void, MultiTexCoord4hvNV, (GLenum, const GLhalfNV *))
AGL_API(void, FogCoordhNV, (GLhalfNV))
AGL_API(void, FogCoordhvNV, (const GLhalfNV *))
AGL_API(void, SecondaryColor3hNV, (GLhalfNV, GLhalfNV, GLhalfNV))
AGL_API(void, SecondaryColor3hvNV, (const GLhalfNV *))
AGL_API(void, VertexWeighthNV, (GLhalfNV))
AGL_API(void, VertexWeighthvNV, (const GLhalfNV *))
AGL_API(void, VertexAttrib1hNV, (GLuint, GLhalfNV))
AGL_API(void, VertexAttrib1hvNV, (GLuint, const GLhalfNV *))
AGL_API(void, VertexAttrib2hNV, (GLuint, GLhalfNV, GLhalfNV))
AGL_API(void, VertexAttrib2hvNV, (GLuint, const GLhalfNV *))
AGL_API(void, VertexAttrib3hNV, (GLuint, GLhalfNV, GLhalfNV, GLhalfNV))
AGL_API(void, VertexAttrib3hvNV, (GLuint, const GLhalfNV *))
AGL_API(void, VertexAttrib4hNV, (GLuint, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV))
AGL_API(void, VertexAttrib4hvNV, (GLuint, const GLhalfNV *))
AGL_API(void, VertexAttribs1hvNV, (GLuint, GLsizei, const GLhalfNV *))
AGL_API(void, VertexAttribs2hvNV, (GLuint, GLsizei, const GLhalfNV *))
AGL_API(void, VertexAttribs3hvNV, (GLuint, GLsizei, const GLhalfNV *))
AGL_API(void, VertexAttribs4hvNV, (GLuint, GLsizei, const GLhalfNV *))
#endif

#if defined AGL_NV_pixel_data_range
AGL_API(void, PixelDataRangeNV, (GLenum, GLsizei, GLvoid *))
AGL_API(void, FlushPixelDataRangeNV, (GLenum))
#endif

#if defined AGL_NV_primitive_restart
AGL_API(void, PrimitiveRestartNV, (void))
AGL_API(void, PrimitiveRestartIndexNV, (GLuint))
#endif

#if defined AGL_ATI_map_object_buffer
AGL_API(GLvoid*, MapObjectBufferATI, (GLuint))
AGL_API(void, UnmapObjectBufferATI, (GLuint))
#endif

#if defined AGL_ATI_separate_stencil
AGL_API(void, StencilOpSeparateATI, (GLenum, GLenum, GLenum, GLenum))
AGL_API(void, StencilFuncSeparateATI, (GLenum, GLenum, GLint, GLuint))
#endif

#if defined AGL_ATI_vertex_attrib_array_object
AGL_API(void, VertexAttribArrayObjectATI, (GLuint, GLint, GLenum, GLboolean, GLsizei, GLuint, GLuint))
AGL_API(void, GetVertexAttribArrayObjectfvATI, (GLuint, GLenum, GLfloat *))
AGL_API(void, GetVertexAttribArrayObjectivATI, (GLuint, GLenum, GLint *))
#endif

#if defined AGL_OES_byte_coordinates
AGL_API(void, Vertex2bOES, ( GLbyte, GLbyte ))
AGL_API(void, Vertex3bOES, ( GLbyte, GLbyte, GLbyte ))
AGL_API(void, Vertex4bOES, ( GLbyte, GLbyte, GLbyte, GLbyte ))
AGL_API(void, Vertex2bvOES, ( const GLbyte * ))
AGL_API(void, Vertex3bvOES, ( const GLbyte * ))
AGL_API(void, Vertex4bvOES, ( const GLbyte * ))
AGL_API(void, TexCoord1bOES, ( GLbyte ))
AGL_API(void, TexCoord2bOES, ( GLbyte, GLbyte ))
AGL_API(void, TexCoord3bOES, ( GLbyte, GLbyte, GLbyte ))
AGL_API(void, TexCoord4bOES, ( GLbyte, GLbyte, GLbyte, GLbyte ))
AGL_API(void, TexCoord1bvOES, ( const GLbyte * ))
AGL_API(void, TexCoord2bvOES, ( const GLbyte * ))
AGL_API(void, TexCoord3bvOES, ( const GLbyte * ))
AGL_API(void, TexCoord4bvOES, ( const GLbyte * ))
AGL_API(void, MultiTexCoord1bOES, ( GLenum, GLbyte ))
AGL_API(void, MultiTexCoord2bOES, ( GLenum, GLbyte, GLbyte ))
AGL_API(void, MultiTexCoord3bOES, ( GLenum, GLbyte, GLbyte, GLbyte ))
AGL_API(void, MultiTexCoord4bOES, ( GLenum, GLbyte, GLbyte, GLbyte, GLbyte ))
AGL_API(void, MultiTexCoord1bvOES, ( GLenum texture, const GLbyte * ))
AGL_API(void, MultiTexCoord2bvOES, ( GLenum texture, const GLbyte * ))
AGL_API(void, MultiTexCoord3bvOES, ( GLenum texture, const GLbyte * ))
AGL_API(void, MultiTexCoord4bvOES, ( GLenum texture, const GLbyte * ))
#endif

#if defined AGL_OES_fixed_point
AGL_API(void, Vertex2xOES, (GLfixed, GLfixed))
AGL_API(void, Vertex3xOES, (GLfixed, GLfixed, GLfixed))
AGL_API(void, Vertex4xOES, (GLfixed, GLfixed, GLfixed, GLfixed))
AGL_API(void, Vertex2xvOES, (const GLfixed *))
AGL_API(void, Vertex3xvOES, (const GLfixed *))
AGL_API(void, Vertex4xvOES, (const GLfixed *))
AGL_API(void, Normal3xOES, (GLfixed, GLfixed, GLfixed))
AGL_API(void, Normal3xvOES, (const GLfixed *))
AGL_API(void, TexCoord1xOES, (GLfixed))
AGL_API(void, TexCoord2xOES, (GLfixed, GLfixed))
AGL_API(void, TexCoord3xOES, (GLfixed, GLfixed, GLfixed))
AGL_API(void, TexCoord4xOES, (GLfixed, GLfixed, GLfixed, GLfixed))
AGL_API(void, TexCoord1xvOES, (const GLfixed *))
AGL_API(void, TexCoord2xvOES, (const GLfixed *))
AGL_API(void, TexCoord3xvOES, (const GLfixed *))
AGL_API(void, TexCoord4xvOES, (const GLfixed *))
AGL_API(void, MultiTexCoord1xOES, (GLenum, GLfixed))
AGL_API(void, MultiTexCoord2xOES, (GLenum, GLfixed, GLfixed))
AGL_API(void, MultiTexCoord3xOES, (GLenum, GLfixed, GLfixed, GLfixed))
AGL_API(void, MultiTexCoord4xOES, (GLenum, GLfixed, GLfixed, GLfixed, GLfixed))
AGL_API(void, MultiTexCoord1xvOES, (GLenum, const GLfixed *))
AGL_API(void, MultiTexCoord2xvOES, (GLenum, const GLfixed *))
AGL_API(void, MultiTexCoord3xvOES, (GLenum, const GLfixed *))
AGL_API(void, MultiTexCoord4xvOES, (GLenum, const GLfixed *))
AGL_API(void, Color3xOES, (GLfixed, GLfixed, GLfixed))
AGL_API(void, Color4xOES, (GLfixed, GLfixed, GLfixed, GLfixed))
AGL_API(void, Color3xvOES, (const GLfixed *))
AGL_API(void, Color4xvOES, (const GLfixed *))
AGL_API(void, IndexxOES, (GLfixed))
AGL_API(void, IndexxvOES, (const GLfixed *))
AGL_API(void, RectxOES, (GLfixed, GLfixed, GLfixed, GLfixed))
AGL_API(void, RectxvOES, (const GLfixed [2], const fixed [2]))
AGL_API(void, DepthRangexOES, (GLclampx, GLclampx))
AGL_API(void, LoadMatrixxOES, (const GLfixed [16]))
AGL_API(void, MultMatrixxOES, (const GLfixed [16]))
AGL_API(void, LoadTransposeMatrixxOES, (const GLfixed [16]))
AGL_API(void, MultTransposeMatrixxOES, (const GLfixed [16]))
AGL_API(void, RotatexOES, (GLfixed, GLfixed, GLfixed, GLfixed))
AGL_API(void, ScalexOES, (GLfixed, GLfixed, GLfixed))
AGL_API(void, TranslatexOES, (GLfixed, GLfixed, GLfixed))
AGL_API(void, FrustumxOES, (GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed))
AGL_API(void, OrthoxOES, (GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed))
AGL_API(void, TexGenxOES, (GLenum, GLenum, GLfixed))
AGL_API(void, TexGenxvOES, (GLenum, GLenum, const GLfixed *))
AGL_API(void, GetTexGenxvOES, (GLenum, GLenum, GLfixed *))
AGL_API(void, ClipPlanexOES, (GLenum, const GLfixed *))
AGL_API(void, GetClipPlanexOES, (GLenum, GLfixed *))
AGL_API(void, RasterPos2xOES, (GLfixed, GLfixed))
AGL_API(void, RasterPos3xOES, (GLfixed, GLfixed, GLfixed))
AGL_API(void, RasterPos4xOES, (GLfixed, GLfixed, GLfixed, GLfixed))
AGL_API(void, RasterPos2xvOES, (const GLfixed *))
AGL_API(void, RasterPos3xvOES, (const GLfixed *))
AGL_API(void, RasterPos4xvOES, (const GLfixed *))
AGL_API(void, MaterialxOES, (GLenum, GLenum, GLfixed))
AGL_API(void, MaterialxvOES, (GLenum, GLenum, const GLfixed *))
AGL_API(void, GetMaterialxOES, (GLenum, GLenum, GLfixed *))
AGL_API(void, LightxOES, (GLenum, GLenum, GLfixed))
AGL_API(void, LightxvOES, (GLenum, GLenum, const GLfixed *))
AGL_API(void, GetLightxOES, (GLenum, GLenum, const GLfixed *))
AGL_API(void, LightModelxOES, (GLenum, GLfixed))
AGL_API(void, LightModelxvOES, (GLenum, const GLfixed *))
AGL_API(void, PointSizexOES, (GLfixed size))
AGL_API(void, LineWidthxOES, (GLfixed width))
AGL_API(void, PolygonOffsetxOES, (GLfixed factor, GLfixed units))
AGL_API(void, PixelStorex, (GLenum pname, GLfixed param))
AGL_API(void, PixelTransferxOES, (GLenum pname, GLfixed param))
AGL_API(void, PixelMapx, (GLenum, GLint, const GLfixed *))
AGL_API(void, GetPixelMapxv, (GLenum, GLint, GLfixed *))
AGL_API(void, ConvolutionParameterxOES, (GLenum, GLenum, GLfixed))
AGL_API(void, ConvolutionParameterxvOES, (GLenum, GLenum, const GLfixed *))
AGL_API(void, GetConvolutionParameterxvOES, (GLenum, GLenum, GLfixed *))
AGL_API(void, GetHistogramParameterxvOES, (GLenum, GLenum, GLfixed *))
AGL_API(void, PixelZoomxOES, (GLfixed, GLfixed))
AGL_API(void, BitmapxOES, (GLsizei, GLsizei, GLfixed, GLfixed, GLfixed, GLfixed, const GLubyte *))
AGL_API(void, TexParameterxOES, (GLenum, GLenum, GLfixed))
AGL_API(void, TexParameterxvOES, (GLenum, GLenum, const GLfixed *))
AGL_API(void, GetTexParameterxvOES, (GLenum, GLenum, GLfixed *))
AGL_API(void, GetTexLevelParameterxvOES, (GLenum, GLint, GLenum, GLfixed *))
AGL_API(void, PrioritizeTexturesxOES, (GLsizei, GLuint *, GLclampx *))
AGL_API(void, TexEnvxOES, (GLenum, GLenum, GLfixed))
AGL_API(void, TexEnvxvOES, (GLenum, GLenum, const GLfixed *))
AGL_API(void, GetTexEnvxvOES, (GLenum, GLenum, GLfixed *))
AGL_API(void, FogxOES, (GLenum, GLfixed))
AGL_API(void, FogxvOES, (GLenum, const GLfixed *))
AGL_API(void, SampleCoverageOES, (GLclampx, GLboolean))
AGL_API(void, AlphaFuncxOES, (GLenum, GLclampx))
AGL_API(void, BlendColorxOES, (GLclampx, GLclampx, GLclampx, GLclampx))
AGL_API(void, ClearColorxOES, (GLclampx, GLclampx, GLclampx, GLclampx))
AGL_API(void, ClearDepthxOES, (GLclampx))
AGL_API(void, ClearAccumxOES, (GLclampx, GLclampx, GLclampx, GLclampx))
AGL_API(void, AccumxOES, (GLenum, GLfixed))
AGL_API(void, Map1xOES, (GLenum, GLfixed, GLfixed, GLint, GLint, const GLfixed *))
AGL_API(void, Map2xOES, (GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed, GLfixed, GLint, GLint, const GLfixed *))
AGL_API(void, MapGrid1xOES, (GLint, GLfixed, GLfixed))
AGL_API(void, MapGrid2xOES, (GLint, GLfixed, GLfixed, GLfixed, GLfixed))
AGL_API(void, GetMapxvOES, (GLenum, GLenum, GLfixed *))
AGL_API(void, EvalCoord1xOES, (GLfixed))
AGL_API(void, EvalCoord2xOES, (GLfixed, GLfixed))
AGL_API(void, EvalCoord1xvOES, (const GLfixed *))
AGL_API(void, EvalCoord2xvOES, (const GLfixed *))
AGL_API(void, FeedbackBufferxOES, (GLsizei, GLenum, GLfixed *))
AGL_API(void, PassThroughxOES, (GLfixed))
AGL_API(void, GetFixedvOES, (GLenum, GLfixed *))
#endif

#if defined AGL_OES_single_precision
AGL_API(void, DepthRangefOES, (GLclampf, GLclampf))
AGL_API(void, FrustumfOES, (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, OrthofOES, (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
AGL_API(void, ClipPlanefOES, (GLenum, const GLfloat*))
AGL_API(void, GetClipPlanefOES, (GLenum, GLfloat*))
AGL_API(void, ClearDepthfOES, (GLclampd))
#endif

#if defined AGL_OES_query_matrix
AGL_API(GLbitfield, QueryMatrixxOES, (GLfixed [16], GLint [16] ))
#endif

#if defined AGL_EXT_depth_bounds_test
AGL_API(void, DepthBoundsEXT, (GLclampd, GLclampd))
#endif


#if defined AGL_EXT_blend_equation_separate
AGL_API(void, BlendEquationSeparateEXT, (GLenum, GLenum))
#endif


#if defined AGL_EXT_framebuffer_object
AGL_API(GLboolean, IsRenderbufferEXT, (GLuint))
AGL_API(void, BindRenderbufferEXT, (GLenum, GLuint))
AGL_API(void, DeleteRenderbuffersEXT, (GLsizei, const GLuint *))
AGL_API(void, GenRenderbuffersEXT, (GLsizei, GLuint *))
AGL_API(void, RenderbufferStorageEXT, (GLenum, GLenum, GLsizei, GLsizei))
AGL_API(void, GetRenderbufferParameterivEXT, (GLenum, GLenum, GLint*))
AGL_API(GLboolean, IsFramebufferEXT, (GLuint))
AGL_API(void, BindFramebufferEXT, (GLenum, GLuint))
AGL_API(void, DeleteFramebuffersEXT, (GLsizei, const GLuint *))
AGL_API(void, GenFramebuffersEXT, (GLsizei, GLuint *))
AGL_API(GLenum, CheckFramebufferStatusEXT, (GLenum))
AGL_API(void, FramebufferTexture1DEXT, (GLenum, GLenum, GLenum, GLuint, GLint))
AGL_API(void, FramebufferTexture2DEXT, (GLenum, GLenum, GLenum, GLuint, GLint))
AGL_API(void, FramebufferTexture3DEXT, (GLenum, GLenum, GLenum, GLuint, GLint, GLint))
AGL_API(void, FramebufferRenderbufferEXT, (GLenum, GLenum, GLenum, GLuint))
AGL_API(void, GetFramebufferAttachmentParameterivEXT, (GLenum, GLenum, GLenum, GLint *))
AGL_API(void, GenerateMipmapEXT, (GLenum))
#endif

#if defined AGL_GREMEDY_string_marker
AGL_API(void, StringMarkerGREMEDY, (GLsizei, const GLvoid *))
#endif

#if defined AGL_EXT_stencil_clear_tag
AGL_API(void, StencilClearTagEXT, (GLsizei, GLuint))
#endif

#if defined AGL_EXT_framebuffer_blit
AGL_API(void, BlitFramebufferEXT, (GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum))
#endif

#if defined AGL_EXT_framebuffer_multisample
AGL_API(void, RenderbufferStorageMultisampleEXT, (GLenum, GLsizei, GLenum, GLsizei, GLsizei))
#endif

#if defined AGL_EXT_timer_query
AGL_API(void, GetQueryObjecti64vEXT, (GLuint, GLenum, GLint64EXT *))
AGL_API(void, GetQueryObjectui64vEXT, (GLuint, GLenum, GLuint64EXT *))
#endif

#if defined AGL_EXT_gpu_program_parameters
AGL_API(void, ProgramEnvParameters4fvEXT, (GLenum, GLuint, GLsizei, const GLfloat *))
AGL_API(void, ProgramLocalParameters4fvEXT, (GLenum, GLuint, GLsizei, const GLfloat *))
#endif

#if defined AGL_APPLE_flush_buffer_range
AGL_API(void, BufferParameteriAPPLE, (GLenum, GLenum, GLint))
AGL_API(void, FlushMappedBufferRangeAPPLE, (GLenum, GLintptr, GLsizeiptr))
#endif

#if defined AGL_EXT_bindable_uniform
AGL_API(void,     UniformBufferEXT, (GLuint, GLint, GLuint))
AGL_API(GLint,    GetUniformBufferSizeEXT, (GLuint, GLint))
AGL_API(GLintptr, GetUniformOffsetEXT, (GLuint program, GLint))
#endif

#if defined AGL_EXT_draw_buffers2
AGL_API(void, ColorMaskIndexedEXT, (GLuint, GLboolean, GLboolean, GLboolean, GLboolean))
AGL_API(void, GetBooleanIndexedvEXT, (GLenum, GLuint, GLboolean *))
AGL_API(void, GetIntegerIndexedvEXT, (GLenum, GLuint, GLint *))
AGL_API(void, EnableIndexedEXT, (GLenum, GLuint))
AGL_API(void, DisableIndexedEXT, (GLenum, GLuint))
AGL_API(GLboolean, IsEnabledIndexedEXT, (GLenum, GLuint))
#endif

#if defined AGL_EXT_draw_instanced
AGL_API(void, DrawArraysInstancedEXT, (GLenum, GLint, GLsizei, GLsizei))
AGL_API(void, DrawElementsInstancedEXT, (GLenum, GLsizei, GLenum, const GLvoid *, GLsizei))
#endif

#if defined AGL_EXT_geometry_shader4
AGL_API(void, ProgramParameteriEXT, (GLuint, GLenum, GLint))
AGL_API(void, FramebufferTextureEXT, (GLenum, GLenum, GLuint, GLint))
#if !defined AGL_EXT_texture_array
AGL_API(void, FramebufferTextureLayerEXT, (GLenum, GLenum, GLuint, GLint, GLint))
#endif
AGL_API(void, FramebufferTextureFaceEXT, (GLenum, GLenum, GLuint, GLint, GLenum))
#endif

#if defined AGL_EXT_gpu_shader4
AGL_API(void, VertexAttribI1iEXT, (GLuint, GLint))
AGL_API(void, VertexAttribI2iEXT, (GLuint, GLint, GLint))
AGL_API(void, VertexAttribI3iEXT, (GLuint, GLint, GLint, GLint))
AGL_API(void, VertexAttribI4iEXT, (GLuint, GLint, GLint, GLint, GLint))
AGL_API(void, VertexAttribI1uiEXT, (GLuint, GLuint))
AGL_API(void, VertexAttribI2uiEXT, (GLuint, GLuint, GLuint))
AGL_API(void, VertexAttribI3uiEXT, (GLuint, GLuint, GLuint, GLuint))
AGL_API(void, VertexAttribI4uiEXT, (GLuint, GLuint, GLuint, GLuint, GLuint))
AGL_API(void, VertexAttribI1ivEXT, (GLuint, const GLint *))
AGL_API(void, VertexAttribI2ivEXT, (GLuint, const GLint *))
AGL_API(void, VertexAttribI3ivEXT, (GLuint, const GLint *))
AGL_API(void, VertexAttribI4ivEXT, (GLuint, const GLint *))
AGL_API(void, VertexAttribI1uivEXT, (GLuint, const GLuint *))
AGL_API(void, VertexAttribI2uivEXT, (GLuint, const GLuint *))
AGL_API(void, VertexAttribI3uivEXT, (GLuint, const GLuint *))
AGL_API(void, VertexAttribI4uivEXT, (GLuint, const GLuint *))
AGL_API(void, VertexAttribI4bvEXT, (GLuint, const GLbyte *))
AGL_API(void, VertexAttribI4svEXT, (GLuint, const GLshort *))
AGL_API(void, VertexAttribI4ubvEXT, (GLuint, const GLubyte *))
AGL_API(void, VertexAttribI4usvEXT, (GLuint, const GLushort *))
AGL_API(void, VertexAttribIPointerEXT, (GLuint, GLint, GLenum, GLsizei, const GLvoid *))
AGL_API(void, GetVertexAttribIivEXT, (GLuint, GLenum, GLint *))
AGL_API(void, GetVertexAttribIuivEXT, (GLuint, GLenum, GLint *))
AGL_API(void, Uniform1uiEXT, (GLint, GLuint))
AGL_API(void, Uniform2uiEXT, (GLint, GLuint, GLuint))
AGL_API(void, Uniform3uiEXT, (GLint, GLuint, GLuint, GLuint))
AGL_API(void, Uniform4uiEXT, (GLint, GLuint, GLuint, GLuint, GLuint))
AGL_API(void, Uniform1uivEXT, (GLint, GLsizei, const GLuint *))
AGL_API(void, Uniform2uivEXT, (GLint, GLsizei, const GLuint *))
AGL_API(void, Uniform3uivEXT, (GLint, GLsizei, const GLuint *))
AGL_API(void, Uniform4uivEXT, (GLint, GLsizei, const GLuint *))
AGL_API(void, GetUniformuivEXT, (GLuint, GLint location, GLint *))
AGL_API(void, BindFragDataLocationEXT, (GLuint, GLuint, const GLchar *))
AGL_API(GLint, GetFragDataLocationEXT, (GLuint, const GLchar *))
#endif

#if defined AGL_EXT_texture_array
AGL_API(void, FramebufferTextureLayerEXT, (GLenum, GLenum, GLuint, GLint, GLint))
#endif

#if defined AGL_EXT_texture_buffer_object
AGL_API(void, TexBufferEXT, (GLenum, GLenum, GLuint))
#endif

#if defined AGL_texture_integer
AGL_API(void, ClearColorIiEXT,        (GLint,  GLint,  GLint,  GLint))
AGL_API(void, ClearColorIuiEXT,       (GLuint, GLuint, GLuint, GLuint))
AGL_API(void, TexParameterIivEXT,     (GLenum, GLenum, GLint *))
AGL_API(void, TexParameterIuivEXT,    (GLenum, GLenum, GLuint *))
AGL_API(void, GetTexParameterIivEXT,  (GLenum, GLenum, GLint *))
AGL_API(void, GetTexParameterIiuvEXT, (GLenum, GLenum, GLuint *))
#endif

#if defined AGL_NV_depth_buffer_float
AGL_API(void, DepthRangedNV,  (GLdouble, GLdouble))
AGL_API(void, ClearDepthdNV,  (GLdouble))
AGL_API(void, DepthBoundsdNV, (GLdouble, GLdouble))
#endif

#if defined AGL_NV_framebuffer_multisample_coverage
AGL_API(void, RenderbufferStorageMultsampleCoverageNV, (GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei))
#endif

#if defined AGL_NV_geometry_program4
AGL_API(void, ProgramVertexLimitNV, (GLenum, GLint))
#if !defined AGL_EXT_geometry_shader4
AGL_API(void, FramebufferTextureEXT,      (GLenum, GLenum, GLuint, GLint))
#if !defined AGL_EXT_texture_array
AGL_API(void, FramebufferTextureLayerEXT, (GLenum, GLenum, GLuint, GLint, GLint))
#endif
#endif
#endif

#if defined AGL_NV_gpu_program4
AGL_API(void, ProgramLocalParameterI4iNV,    (GLenum, GLuint, GLint, GLint, GLint, GLint))
AGL_API(void, ProgramLocalParameterI4ivNV,   (GLenum, GLuint, const GLint *))
AGL_API(void, ProgramLocalParametersI4ivNV,  (GLenum, GLuint, GLsizei, const GLint *))
AGL_API(void, ProgramLocalParameterI4uiNV,   (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint))
AGL_API(void, ProgramLocalParameterI4uivNV,  (GLenum, GLuint, const GLuint *))
AGL_API(void, ProgramLocalParametersI4uivNV, (GLenum, GLuint, GLsizei, const GLuint *))
AGL_API(void, ProgramEnvParameterI4iNV,      (GLenum, GLuint, GLint, GLint, GLint, GLint))
AGL_API(void, ProgramEnvParameterI4ivNV,     (GLenum, GLuint, const GLint *))
AGL_API(void, ProgramEnvParametersI4ivNV,    (GLenum, GLuint, GLsizei, const GLint *))
AGL_API(void, ProgramEnvParameterI4uiNV,     (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint))
AGL_API(void, ProgramEnvParameterI4uivNV,    (GLenum, GLuint, const GLuint *))
AGL_API(void, ProgramEnvParametersI4uivNV,   (GLenum, GLuint, GLsizei, const GLuint *))
AGL_API(void, GetProgramLocalParameterIivNV, (GLenum, GLuint, GLint *))
AGL_API(void, GetProgramLocalParameterIuivNV,(GLenum, GLuint, GLuint *))
AGL_API(void, GetProgramEnvParameterIivNV,   (GLenum, GLuint, GLint *))
AGL_API(void, GetProgramEnvParameterIuivNV,  (GLenum, GLuint, GLuint *))
#endif

#if defined AGL_NV_parameter_buffer_object
#if !defined AGL_NV_transform_feedback
AGL_API(void, BindBufferRangeNV, (GLenum, GLuint, GLuint, GLintptr, GLsizeiptr))
AGL_API(void, BindBufferOffsetNV,(GLenum, GLuint, GLuint, GLintptr))
AGL_API(void, BindBufferBaseNV,  (GLenum, GLuint, GLuint))
#endif
AGL_API(void, ProgramBufferParametersfvNV,  (GLenum, GLuint, GLuint, GLsizei, const GLfloat *))
AGL_API(void, ProgramBufferParametersIivNV, (GLenum, GLuint, GLuint, GLsizei, const GLint *))
AGL_API(void, ProgramBufferParametersIuivNV,(GLenum, GLuint, GLuint, GLuint, const GLuint *))
#if !defined AGL_EXT_draw_buffers2
AGL_API(void, GetIntegerIndexedvEXT, (GLenum, GLuint, GLboolean *))
#endif
#endif

#if defined AGL_NV_transform_feedback
AGL_API(void, BindBufferRangeNV, (GLenum, GLuint, GLuint, GLintptr, GLsizeiptr))
AGL_API(void, BindBufferOffsetNV,(GLenum, GLuint, GLuint, GLintptr))
AGL_API(void, BindBufferBaseNV,  (GLenum, GLuint, GLuint))
AGL_API(void, TransformFeedbackAttribsNV, (GLsizei, const GLint *, GLenum))
AGL_API(void, TransformFeedbackVaryingsNV,(GLuint, GLsizei, const GLint *, GLenum))
AGL_API(void, BeginTransformFeedbackNV,   (GLenum))
AGL_API(void, EndTransformFeedbackNV,     (GLvoid))
AGL_API(GLint, GetVaryingLocationNV, (GLuint, const GLchar *))
AGL_API(void, GetActiveVaryingNV,    (GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *))
AGL_API(void, ActiveVaryingNV,       (GLuint, const GLchar *))
AGL_API(void, GetTransformFeedbackVaryingNV, (GLuint, GLuint, GLint *))
#if !defined AGL_EXT_draw_buffers2
AGL_API(void, GetBooleanIndexedvEXT, (GLenum, GLuint, GLboolean *))
AGL_API(void, GetIntegerIndexedvEXT, (GLenum, GLuint, GLint *))
#endif
#endif

#if defined AGL_NV_vertex_program4
#ifndef AGL_EXT_gpu_shader4
AGL_API(void, VertexAttribI1iEXT, (GLuint, GLint))
AGL_API(void, VertexAttribI2iEXT, (GLuint, GLint, GLint))
AGL_API(void, VertexAttribI3iEXT, (GLuint, GLint, GLint, GLint))
AGL_API(void, VertexAttribI4iEXT, (GLuint, GLint, GLint, GLint, GLint))
AGL_API(void, VertexAttribI1uiEXT, (GLuint, GLuint))
AGL_API(void, VertexAttribI2uiEXT, (GLuint, GLuint, GLuint))
AGL_API(void, VertexAttribI3uiEXT, (GLuint, GLuint, GLuint, GLuint))
AGL_API(void, VertexAttribI4uiEXT, (GLuint, GLuint, GLuint, GLuint, GLuint))
AGL_API(void, VertexAttribI1ivEXT, (GLuint, const GLint *))
AGL_API(void, VertexAttribI2ivEXT, (GLuint, const GLint *))
AGL_API(void, VertexAttribI3ivEXT, (GLuint, const GLint *))
AGL_API(void, VertexAttribI4ivEXT, (GLuint, const GLint *))
AGL_API(void, VertexAttribI1uivEXT, (GLuint, const GLuint *))
AGL_API(void, VertexAttribI2uivEXT, (GLuint, const GLuint *))
AGL_API(void, VertexAttribI3uivEXT, (GLuint, const GLuint *))
AGL_API(void, VertexAttribI4uivEXT, (GLuint, const GLuint *))
AGL_API(void, VertexAttribI4bvEXT, (GLuint, const GLbyte *))
AGL_API(void, VertexAttribI4svEXT, (GLuint, const GLshort *))
AGL_API(void, VertexAttribI4ubvEXT, (GLuint, const GLubyte *))
AGL_API(void, VertexAttribI4usvEXT, (GLuint, const GLushort *))
AGL_API(void, VertexAttribIPointerEXT, (GLuint, GLint, GLenum, GLsizei, const GLvoid *))
AGL_API(void, GetVertexAttribIivEXT, (GLuint, GLenum, GLint *))
AGL_API(void, GetVertexAttribIuivEXT, (GLuint, GLenum, GLint *))
#endif
#endif

#if defined AGL_GREMEDY_frame_terminator
AGL_API(void, FrameTerminatorGREMEDY, (void))
#endif

