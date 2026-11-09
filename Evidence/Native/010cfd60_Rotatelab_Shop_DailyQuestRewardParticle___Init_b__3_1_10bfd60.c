/* IL2CPP: Rotatelab.Shop.DailyQuestRewardParticle$$<Init>b__3_1
void Rotatelab_Shop_DailyQuestRewardParticle___Init_b__3_1 (Rotatelab_Shop_DailyQuestRewardParticle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestRewardParticle$$<Init>b__3_1
   void Rotatelab_Shop_DailyQuestRewardParticle___Init_b__3_1
   (Rotatelab_Shop_DailyQuestRewardParticle_o* __this, const MethodInfo* method); */

int Rotatelab_Shop_DailyQuestRewardParticle___Init_b__3_1_10bfd60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_010cfed8 + 0x10cfd78);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cfedc + 0x10cfd8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cfee0 + 0x10cfd98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cfee4 + 0x10cfda4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cfee8 + 0x10cfdb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cfeec + 0x10cfdbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cfef0 + 0x10cfdc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cfef4 + 0x10cfdd4));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
    uVar2 = DG_Tweening_ShortcutExtensions__DOLocalMoveY_116b258(uVar2,0x437a0000,0x3f800000,0,0);
    DG_Tweening_TweenSettingsExtensions__SetDelay_object__15d9f0c
              (uVar2,0x3e800000,**(undefined4 **)(_UNK_010cfef8 + 0x10cfe20));
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cfefc + 0x10cfe34));
    DG_Tweening_TweenCallback_float____ctor_1bf9864
              (uVar2,param_1,**(undefined4 **)(_UNK_010cff00 + 0x10cfe50),0);
    uVar2 = DG_Tweening_DOVirtual__Float_11682ec(0x3f800000,0,0x3e800000,uVar2,0);
    iVar3 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__15d9f0c
                      (uVar2,0x3f400000,**(undefined4 **)(_UNK_010cff04 + 0x10cfe7c));
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cff08 + 0x10cfe94));
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar2,param_1,**(undefined4 **)(_UNK_010cff0c + 0x10cfeb0),0);
    uVar4 = **(undefined4 **)(_UNK_010cff10 + 0x10cfec8);
    cVar1 = '\0';
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + 0x94);
    }
    if (iVar3 != 0 && cVar1 != '\0') {
      *(undefined4 *)(iVar3 + 0x4c) = uVar2;
      thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x4c),uVar2,uVar4);
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

