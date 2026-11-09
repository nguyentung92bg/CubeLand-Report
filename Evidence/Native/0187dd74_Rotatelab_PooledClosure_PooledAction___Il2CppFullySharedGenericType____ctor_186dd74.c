/* IL2CPP: Rotatelab.PooledClosure.PooledAction<__Il2CppFullySharedGenericType>$$.ctor
void Rotatelab_PooledClosure_PooledAction___Il2CppFullySharedGenericType____ctor (Rotatelab_PooledClosure_PooledAction_P1__o* __this, const MethodInfo_186DD74* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PooledClosure.PooledAction<__Il2CppFullySharedGenericType>$$.ctor
   void Rotatelab_PooledClosure_PooledAction___Il2CppFullySharedGenericType____ctor
   (Rotatelab_PooledClosure_PooledAction_P1__o* __this, const MethodInfo_186DD74* method); */

void Rotatelab_PooledClosure_PooledAction___Il2CppFullySharedGenericType____ctor_186dd74
               (undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0187de08 + 0x187dd8c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0187de0c + 0x187dda0));
    *pcVar6 = '\x01';
  }
  System_Object___ctor_2bb93bc(param_1,0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0187de10 + 0x187ddc0));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(*(int *)(param_2 + 0x10) + 0x60),0);
  iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4) + 0x40) + 0x3c;
  func_0x00ec37e0(iVar5,4);
  puVar2 = (undefined4 *)thunk_FUN_00f1b490(param_1,iVar5);
  *puVar2 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar3 = (uint *)(_UNK_00f30584 + ((uint)puVar2 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = *puVar3 | 1 << (((uint)puVar2 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

