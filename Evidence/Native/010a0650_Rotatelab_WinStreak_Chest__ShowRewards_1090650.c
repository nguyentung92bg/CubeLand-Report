/* IL2CPP: Rotatelab.WinStreak.Chest$$ShowRewards
void Rotatelab_WinStreak_Chest__ShowRewards (Rotatelab_WinStreak_Chest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.Chest$$ShowRewards
   void Rotatelab_WinStreak_Chest__ShowRewards (Rotatelab_WinStreak_Chest_o* __this, const
   MethodInfo* method); */

void Rotatelab_WinStreak_Chest__ShowRewards_1090650(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar3 = (char *)(_UNK_010a0910 + 0x10a0668);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0914 + 0x10a067c));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar3 = (char *)(_UNK_010a0918 + 0x10a06ac);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a091c + 0x10a06c0));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_010a0920 + 0x10a06d8) + 0x5c);
  fVar5 = *(float *)(iVar2 + 0x10);
  fVar6 = *(float *)(iVar2 + 0x14);
  fVar4 = *(float *)(iVar2 + 0xc);
  if (*(int *)(**(int **)(_UNK_010a0924 + 0x10a0700) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__ShakeLocalPosition_2ceafe8
            (&uStack_60,uVar1,fVar4 * 10.0,fVar5 * 10.0,fVar6 * 10.0,0x3e800000,0x41500000,1,0,0,1,0
             ,0,0,0);
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x28),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x1c),0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1b,0);
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_60,uVar1,0x3f800000,0x3e800000,uStack_60,uStack_5c,uStack_58,uStack_54,
             uStack_50,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_70,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  uStack_38 = uStack_70;
  uStack_34 = uStack_6c;
  uStack_30 = uStack_68;
  uStack_2c = uStack_64;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_80,&uStack_38,0x3fc00000,0);
  uStack_38 = uStack_80;
  uStack_34 = uStack_7c;
  uStack_30 = uStack_78;
  uStack_2c = uStack_74;
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x1c),0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1a,0);
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_60,uVar1,0,0x3e19999a,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,1,0,0,0
             ,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  *(undefined4 *)(param_1 + 0x28) = uStack_60;
  *(undefined4 *)(param_1 + 0x2c) = uStack_5c;
  *(undefined4 *)(param_1 + 0x30) = uStack_58;
  *(undefined4 *)(param_1 + 0x34) = uStack_54;
  thunk_FUN_00ec5080(param_1 + 0x30,0);
  return;
}

