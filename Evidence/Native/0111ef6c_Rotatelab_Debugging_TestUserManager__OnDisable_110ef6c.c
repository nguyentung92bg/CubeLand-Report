/* IL2CPP: Rotatelab.Debugging.TestUserManager$$OnDisable
void Rotatelab_Debugging_TestUserManager__OnDisable (Rotatelab_Debugging_TestUserManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.TestUserManager$$OnDisable
   void Rotatelab_Debugging_TestUserManager__OnDisable (Rotatelab_Debugging_TestUserManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Debugging_TestUserManager__OnDisable_110ef6c(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_0111f098 + 0x111ef80);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f09c + 0x111ef94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f0a0 + 0x111efa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f0a4 + 0x111efac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f0a8 + 0x111efb8));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_0111f0ac + 0x111efcc);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar8 = *(undefined4 **)(_UNK_0111f0b0 + 0x111eff0);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x8c);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0111f0b4 + 0x111f010),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x8c) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x90);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0111f0b8 + 0x111f068),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  puVar8 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x90);
  *puVar8 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar8 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar8 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

