/* IL2CPP: Rotatelab.UI.PreLevelStartController$$OnEnable
void Rotatelab_UI_PreLevelStartController__OnEnable (Rotatelab_UI_PreLevelStartController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreLevelStartController$$OnEnable
   void Rotatelab_UI_PreLevelStartController__OnEnable (Rotatelab_UI_PreLevelStartController_o*
   __this, const MethodInfo* method); */

void Rotatelab_UI_PreLevelStartController__OnEnable_1125210(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar6 = (char *)(_UNK_011353c8 + 0x1135224);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011353cc + 0x1135238));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011353d0 + 0x1135244));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011353d4 + 0x1135250));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011353d8 + 0x113525c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011353dc + 0x1135268));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011353e0 + 0x1135274));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011353e4 + 0x1135280));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_011353e8 + 0x1135294);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  puVar9 = *(undefined4 **)(_UNK_011353ec + 0x11352b8);
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_011353f0 + 0x11352d8),0);
  puVar5 = *(undefined4 **)(_UNK_011353f4 + 0x11352f4);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c(uVar7,uVar4,*puVar5);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x118);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_011353f8 + 0x1135338),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c(uVar7,uVar4,*puVar5);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x118) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xb4);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011353fc + 0x1135378));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01135400 + 0x1135398),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xb4);
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

