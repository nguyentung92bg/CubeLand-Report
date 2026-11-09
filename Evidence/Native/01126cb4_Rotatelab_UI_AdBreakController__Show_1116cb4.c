/* IL2CPP: Rotatelab.UI.AdBreakController$$Show
void Rotatelab_UI_AdBreakController__Show (Rotatelab_UI_AdBreakController_o* __this, System_Action_o* continueToAd, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.AdBreakController$$Show
   void Rotatelab_UI_AdBreakController__Show (Rotatelab_UI_AdBreakController_o* __this,
   System_Action_o* continueToAd, const MethodInfo* method); */

void Rotatelab_UI_AdBreakController__Show_1116cb4(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_01126da4 + 0x1126ccc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126da8 + 0x1126ce0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126dac + 0x1126cec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126db0 + 0x1126cf8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126db4 + 0x1126d04));
    *pcVar7 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x34) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x34),param_2);
  piVar8 = *(int **)(_UNK_01126db8 + 0x1126d28);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x118);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01126dbc + 0x1126d4c));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_01126dc0 + 0x1126d6c),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar6,uVar4,**(undefined4 **)(_UNK_01126dc4 + 0x1126d84));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x118);
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

