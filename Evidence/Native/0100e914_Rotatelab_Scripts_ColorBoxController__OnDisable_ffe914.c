/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$OnDisable
void Rotatelab_Scripts_ColorBoxController__OnDisable (Rotatelab_Scripts_ColorBoxController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$OnDisable
   void Rotatelab_Scripts_ColorBoxController__OnDisable (Rotatelab_Scripts_ColorBoxController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxController__OnDisable_ffe914(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar5 = (char *)(_UNK_0100e9f8 + 0x100e928);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100e9fc + 0x100e93c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100ea00 + 0x100e948));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100ea04 + 0x100e954));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100ea08 + 0x100e960));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_0100ea0c + 0x100e974);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  uVar6 = **(undefined4 **)(iVar3 + 0x5c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0100ea10 + 0x100e998));
  System_Action_Int32Enum__int____ctor_1f18658
            (uVar4,param_1,**(undefined4 **)(_UNK_0100ea14 + 0x100e9b8),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__int___op_Subtraction_23a4710
                    (uVar6,uVar4,**(undefined4 **)(_UNK_0100ea18 + 0x100e9d0));
  **(undefined4 **)(*piVar7 + 0x5c) = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (*(uint *)(*piVar7 + 0x5c) >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((*(uint *)(*piVar7 + 0x5c) & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

