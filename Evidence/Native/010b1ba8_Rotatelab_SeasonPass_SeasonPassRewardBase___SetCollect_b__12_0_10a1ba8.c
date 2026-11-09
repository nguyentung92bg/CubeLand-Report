/* IL2CPP: Rotatelab.SeasonPass.SeasonPassRewardBase$$<SetCollect>b__12_0
void Rotatelab_SeasonPass_SeasonPassRewardBase___SetCollect_b__12_0 (Rotatelab_SeasonPass_SeasonPassRewardBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassRewardBase$$<SetCollect>b__12_0
   void Rotatelab_SeasonPass_SeasonPassRewardBase___SetCollect_b__12_0
   (Rotatelab_SeasonPass_SeasonPassRewardBase_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassRewardBase___SetCollect_b__12_0_10a1ba8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [16];
  
  pcVar3 = (char *)(_UNK_010b1cf8 + 0x10b1bc0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1cfc + 0x10b1bd4));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  pcVar3 = (char *)(_UNK_010b1d00 + 0x10b1c08);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1d04 + 0x10b1c1c));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_010b1d08 + 0x10b1c30) + 0x5c);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  uVar6 = *(undefined4 *)(iVar2 + 0x10);
  uVar4 = *(undefined4 *)(iVar2 + 0x14);
  if (*(int *)(**(int **)(_UNK_010b1d0c + 0x10b1c3c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce6560
            (auStack_28,uVar1,uVar5,uVar6,uVar4,0x3dcccccd,0,0,0,0,0,1,0,0,0,0,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x14),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar2,0,0);
  return;
}

