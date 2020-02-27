
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_sampled_TargetDataLine__
#define __javax_sound_sampled_TargetDataLine__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace sampled
      {
          class AudioFormat;
          class Control;
          class Control$Type;
          class Line$Info;
          class LineListener;
          class TargetDataLine;
      }
    }
  }
}

class javax::sound::sampled::TargetDataLine : public ::java::lang::Object
{

public:
  virtual void open(::javax::sound::sampled::AudioFormat *) = 0;
  virtual void open(::javax::sound::sampled::AudioFormat *, jint) = 0;
  virtual jint read(JArray< jbyte > *, jint, jint) = 0;
  virtual jint available() = 0;
  virtual void drain() = 0;
  virtual void flush() = 0;
  virtual jint getBufferSize() = 0;
  virtual ::javax::sound::sampled::AudioFormat * getFormat() = 0;
  virtual jint getFramePosition() = 0;
  virtual jfloat getLevel() = 0;
  virtual jlong getLongFramePosition() = 0;
  virtual jlong getMicrosecondPosition() = 0;
  virtual jboolean isActive() = 0;
  virtual jboolean isRunning() = 0;
  virtual void start() = 0;
  virtual void stop() = 0;
  virtual void addLineListener(::javax::sound::sampled::LineListener *) = 0;
  virtual void close() = 0;
  virtual ::javax::sound::sampled::Control * getControl(::javax::sound::sampled::Control$Type *) = 0;
  virtual JArray< ::javax::sound::sampled::Control * > * getControls() = 0;
  virtual ::javax::sound::sampled::Line$Info * getLineInfo() = 0;
  virtual jboolean isControlSupported(::javax::sound::sampled::Control$Type *) = 0;
  virtual jboolean isOpen() = 0;
  virtual void open() = 0;
  virtual void removeLineListener(::javax::sound::sampled::LineListener *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_sound_sampled_TargetDataLine__