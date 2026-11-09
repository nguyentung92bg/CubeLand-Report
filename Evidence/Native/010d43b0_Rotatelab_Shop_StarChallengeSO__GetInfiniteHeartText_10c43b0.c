/* IL2CPP: Rotatelab.Shop.StarChallengeSO$$GetInfiniteHeartText
System_String_o* Rotatelab_Shop_StarChallengeSO__GetInfiniteHeartText (int64_t minutes, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeSO$$GetInfiniteHeartText
   System_String_o* Rotatelab_Shop_StarChallengeSO__GetInfiniteHeartText (int64_t minutes, const
   MethodInfo* method); */

void Rotatelab_Shop_StarChallengeSO__GetInfiniteHeartText_10c43b0(uint param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iStack_28;
  int iStack_24;
  undefined8 uStack_20;
  
  pcVar6 = (char *)(_UNK_010d4500 + 0x10d43cc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d4504 + 0x10d43e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d4508 + 0x10d43ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d450c + 0x10d43f8));
    *pcVar6 = '\x01';
  }
  if ((int)-(param_2 + (uint)(0x3b < param_1)) < 0 ==
      (SBORROW4(0,param_2) != SBORROW4(-param_2,(uint)(0x3b < param_1)))) {
    uStack_20._0_4_ = param_1;
    uStack_20._4_4_ = param_2;
    uVar2 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010d4510 + 0x10d44a4) + 0x34),&uStack_20);
    puVar4 = *(undefined4 **)(_UNK_010d4514 + 0x10d44c0);
  }
  else {
    uStack_20 = FUN_00f88e84(param_1,param_2,0x3c,0);
    lVar1 = (uStack_20 & 0xffffffff) * 0x3c;
    uVar5 = (uint)lVar1;
    iStack_28 = param_1 - uVar5;
    iStack_24 = param_2 - ((int)((ulonglong)lVar1 >> 0x20) + (int)(uStack_20 >> 0x20) * 0x3c +
                          (uint)(param_1 < uVar5));
    if (iStack_28 != 0 || iStack_24 != 0) {
      iVar7 = *(int *)(_UNK_010d4518 + 0x10d444c);
      uVar2 = FUN_00ec393c(*(undefined4 *)(iVar7 + 0x34),&uStack_20);
      uVar3 = FUN_00ec393c(*(undefined4 *)(iVar7 + 0x34),&iStack_28);
      System_String__Format_2a0c264(**(undefined4 **)(_UNK_010d451c + 0x10d448c),uVar2,uVar3,0);
      return;
    }
    uVar2 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010d4520 + 0x10d44cc) + 0x34),&uStack_20);
    puVar4 = *(undefined4 **)(_UNK_010d4524 + 0x10d44f0);
  }
  System_String__Format_29ffb6c(*puVar4,uVar2,0);
  return;
}

