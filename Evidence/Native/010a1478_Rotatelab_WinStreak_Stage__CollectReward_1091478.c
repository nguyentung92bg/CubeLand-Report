/* IL2CPP: Rotatelab.WinStreak.Stage$$CollectReward
PrimeTween_Sequence_o Rotatelab_WinStreak_Stage__CollectReward (Rotatelab_WinStreak_Stage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.Stage$$CollectReward
   PrimeTween_Sequence_o Rotatelab_WinStreak_Stage__CollectReward (Rotatelab_WinStreak_Stage_o*
   __this, const MethodInfo* method); */

void Rotatelab_WinStreak_Stage__CollectReward_1091478(undefined4 *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar3 = (char *)(_UNK_010a16b0 + 0x10a1498);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a16b4 + 0x10a14ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a16b8 + 0x10a14b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a16bc + 0x10a14c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a16c0 + 0x10a14d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a16c4 + 0x10a14dc));
    *pcVar3 = '\x01';
  }
  fStack_34 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uStack_38 = uStack_48;
  fStack_34 = (float)uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*(int *)(**(int **)(_UNK_010a16c8 + 0x10a1524) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar4,0);
  iVar2 = Rotatelab_Extensions__RectTransform_fc1bd0(*(undefined4 *)(param_2 + 0x34),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_58,iVar2,0);
  fVar1 = fStack_54;
  if (*(int *)(**(int **)(_UNK_010a16cc + 0x10a158c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPositionY_2ce7730
            (&uStack_58,uVar4,fVar1 + _UNK_010a16ac,0x3e800000,0,0,0,0,0,2,1,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_38,uStack_58,fStack_54,uStack_50,uStack_4c,0);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  uStack_38 = uStack_58;
  fStack_34 = fStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a16d0 + 0x10a1628));
  System_Action_object____ctor_1f11414(uVar4,param_2,**(undefined4 **)(_UNK_010a16d4 + 0x10a1648),0)
  ;
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_68,&uStack_38,uVar5,uVar4,0,**(undefined4 **)(_UNK_010a16d8 + 0x10a166c));
  uStack_38 = uStack_68;
  fStack_34 = (float)uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_78,&uStack_38,0x3f400000,0);
  *param_1 = uStack_78;
  param_1[1] = uStack_74;
  param_1[2] = uStack_70;
  param_1[3] = uStack_6c;
  return;
}

