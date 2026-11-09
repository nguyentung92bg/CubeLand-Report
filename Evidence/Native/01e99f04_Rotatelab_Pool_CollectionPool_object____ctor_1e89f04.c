/* IL2CPP: Rotatelab.Pool.CollectionPool<object>$$.ctor
void Rotatelab_Pool_CollectionPool_object____ctor (Rotatelab_Pool_CollectionPool_T__o* __this, System_Action_T__o* onRelease, const MethodInfo_1E89F04* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.CollectionPool<object>$$.ctor
   void Rotatelab_Pool_CollectionPool_object____ctor (Rotatelab_Pool_CollectionPool_T__o* __this,
   System_Action_T__o* onRelease, const MethodInfo_1E89F04* method); */

void Rotatelab_Pool_CollectionPool_object____ctor_1e89f04
               (int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  System_Object___ctor_2bb93bc(param_1,0);
  if ((*(ushort *)(**(int **)(*(int *)(param_3 + 0x10) + 0x60) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  uVar3 = thunk_FUN_00f00cdc();
  System_Collections_Generic_Stack_object____ctor_1b04850
            (uVar3,2,*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 4));
  *(undefined4 *)(param_1 + 8) = uVar3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),uVar3);
  puVar4 = (undefined4 *)(param_1 + 0xc);
  *puVar4 = param_2;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

