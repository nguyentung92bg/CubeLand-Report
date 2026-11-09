/* IL2CPP: Rotatelab.PooledClosure.PooledAction<object, Int32Enum>$$.ctor
void Rotatelab_PooledClosure_PooledAction_object__Int32Enum____ctor (Rotatelab_PooledClosure_PooledAction_P1__P2__o* __this, const MethodInfo_186E4CC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PooledClosure.PooledAction<object, Int32Enum>$$.ctor
   void Rotatelab_PooledClosure_PooledAction_object__Int32Enum____ctor
   (Rotatelab_PooledClosure_PooledAction_P1__P2__o* __this, const MethodInfo_186E4CC* method); */

void Rotatelab_PooledClosure_PooledAction_object__Int32Enum____ctor_186e4cc(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_0187e550 + 0x187e4e4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0187e554 + 0x187e4f8));
    *pcVar5 = '\x01';
  }
  System_Object___ctor_2bb93bc(param_1,0);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0187e558 + 0x187e518));
  System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(*(int *)(param_2 + 0x10) + 0x60),0);
  puVar4 = (undefined4 *)(param_1 + 0x14);
  *puVar4 = uVar3;
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

