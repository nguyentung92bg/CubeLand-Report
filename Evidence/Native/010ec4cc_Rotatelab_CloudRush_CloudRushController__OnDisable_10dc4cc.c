/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$OnDisable
void Rotatelab_CloudRush_CloudRushController__OnDisable (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$OnDisable
   void Rotatelab_CloudRush_CloudRushController__OnDisable
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController__OnDisable_10dc4cc(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010ec5a8 + 0x10ec4e0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec5ac + 0x10ec4f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec5b0 + 0x10ec500));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec5b4 + 0x10ec50c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec5b8 + 0x10ec518));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010ec5bc + 0x10ec52c);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ec5c0 + 0x10ec550));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_010ec5c4 + 0x10ec570),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010ec5c8 + 0x10ec588));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120);
  *puVar5 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

