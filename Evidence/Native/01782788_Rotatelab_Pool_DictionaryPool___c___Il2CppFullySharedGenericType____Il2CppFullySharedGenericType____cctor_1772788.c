/* IL2CPP: Rotatelab.Pool.DictionaryPool.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.cctor
void Rotatelab_Pool_DictionaryPool___c___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor (const MethodInfo_1772788* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.DictionaryPool.<>c<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>$$.cctor
   void 
   Rotatelab_Pool_DictionaryPool___c___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor
   (const MethodInfo_1772788* method); */

void Rotatelab_Pool_DictionaryPool___c___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor_1772788
               (int param_1)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  if ((*(ushort *)(**(int **)(iVar4 + 0x60) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  uVar5 = thunk_FUN_00f00cdc();
  iVar6 = *(int *)(param_1 + 0x10);
  uVar1 = *(ushort *)(iVar6 + 0xbd);
  iVar4 = iVar6;
  if ((uVar1 & 1) == 0) {
    iVar4 = FUN_00efd768();
    iVar6 = *(int *)(param_1 + 0x10);
    uVar1 = *(ushort *)(iVar6 + 0xbd);
  }
  pcVar7 = (code *)**(undefined4 **)(*(int *)(iVar4 + 0x60) + 4);
  if ((uVar1 & 1) == 0) {
    iVar6 = FUN_00efd768();
  }
  (*pcVar7)(uVar5,*(undefined4 *)(*(int *)(iVar6 + 0x60) + 4));
  iVar4 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  iVar6 = *(int *)(param_1 + 0x10);
  **(undefined4 **)(iVar4 + 0x5c) = uVar5;
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = FUN_00efd768();
  }
  iVar4 = *(int *)(*(int *)(iVar6 + 0x60) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
    return;
  }
  puVar3 = (uint *)(_UNK_00f30584 + (*(uint *)(iVar4 + 0x5c) >> 0x11) * 4 + 0xf547cc);
  do {
    bVar2 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar2);
  *puVar3 = *puVar3 | 1 << ((*(uint *)(iVar4 + 0x5c) & 0x1ffff) >> 0xc);
  return;
}

