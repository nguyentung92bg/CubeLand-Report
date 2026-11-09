/* IL2CPP: Rotatelab.UI.SuccessPanelController$$Awake
void Rotatelab_UI_SuccessPanelController__Awake (Rotatelab_UI_SuccessPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SuccessPanelController$$Awake
   void Rotatelab_UI_SuccessPanelController__Awake (Rotatelab_UI_SuccessPanelController_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_SuccessPanelController__Awake_111d33c(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0112d490 + 0x112d350);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d494 + 0x112d364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d498 + 0x112d370));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d49c + 0x112d37c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d4a0 + 0x112d388));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d4a4 + 0x112d394));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d4a8 + 0x112d3a0));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0112d4ac + 0x112d3b4);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x74);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112d4b0 + 0x112d3d8));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0112d4b4 + 0x112d3f8),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x74) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112d4b8 + 0x112d438));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_0112d4bc + 0x112d458),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0112d4c0 + 0x112d470));
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

