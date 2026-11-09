/* IL2CPP: Rotatelab.UI.SuccessPanelController$$OnDestroy
void Rotatelab_UI_SuccessPanelController__OnDestroy (Rotatelab_UI_SuccessPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SuccessPanelController$$OnDestroy
   void Rotatelab_UI_SuccessPanelController__OnDestroy (Rotatelab_UI_SuccessPanelController_o*
   __this, const MethodInfo* method); */

void Rotatelab_UI_SuccessPanelController__OnDestroy_111fbbc(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0112fd10 + 0x112fbd0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fd14 + 0x112fbe4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fd18 + 0x112fbf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fd1c + 0x112fbfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fd20 + 0x112fc08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fd24 + 0x112fc14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fd28 + 0x112fc20));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0112fd2c + 0x112fc34);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x74);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112fd30 + 0x112fc58));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0112fd34 + 0x112fc78),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x74) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112fd38 + 0x112fcb8));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_0112fd3c + 0x112fcd8),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0112fd40 + 0x112fcf0));
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

