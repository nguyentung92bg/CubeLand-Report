/* IL2CPP: Rotatelab.Pool.PooledObject<object>$$.ctor
void Rotatelab_Pool_PooledObject_object____ctor (Rotatelab_Pool_PooledObject_T__o __this, Il2CppObject* element, Rotatelab_Pool_CollectionPool_T__o* pool, const MethodInfo_186FFA0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.PooledObject<object>$$.ctor
   void Rotatelab_Pool_PooledObject_object____ctor (Rotatelab_Pool_PooledObject_T__o __this,
   Il2CppObject* element, Rotatelab_Pool_CollectionPool_T__o* pool, const MethodInfo_186FFA0*
   method); */

void Rotatelab_Pool_PooledObject_object____ctor_186ffa0
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  
  *param_1 = param_2;
  thunk_FUN_00ec5080();
  param_1 = param_1 + 1;
  *param_1 = param_3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)param_1 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)param_1 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

