
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_SynchronousQueue$TransferQueue__
#define __java_util_concurrent_SynchronousQueue$TransferQueue__

#pragma interface

#include <java/util/concurrent/SynchronousQueue$Transferer.h>

class java::util::concurrent::SynchronousQueue$TransferQueue : public ::java::util::concurrent::SynchronousQueue$Transferer
{

public: // actually package-private
  SynchronousQueue$TransferQueue();
  void advanceHead(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode *, ::java::util::concurrent::SynchronousQueue$TransferQueue$QNode *);
  void advanceTail(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode *, ::java::util::concurrent::SynchronousQueue$TransferQueue$QNode *);
  jboolean casCleanMe(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode *, ::java::util::concurrent::SynchronousQueue$TransferQueue$QNode *);
  ::java::lang::Object * transfer(::java::lang::Object *, jboolean, jlong);
  ::java::lang::Object * awaitFulfill(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode *, ::java::lang::Object *, jboolean, jlong);
  void clean(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode *, ::java::util::concurrent::SynchronousQueue$TransferQueue$QNode *);
  ::java::util::concurrent::SynchronousQueue$TransferQueue$QNode * volatile __attribute__((aligned(__alignof__( ::java::util::concurrent::SynchronousQueue$Transferer)))) head;
  ::java::util::concurrent::SynchronousQueue$TransferQueue$QNode * volatile tail;
  ::java::util::concurrent::SynchronousQueue$TransferQueue$QNode * volatile cleanMe;
  static ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater * headUpdater;
  static ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater * tailUpdater;
  static ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater * cleanMeUpdater;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_SynchronousQueue$TransferQueue__