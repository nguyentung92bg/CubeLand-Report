/* IL2CPP: Rotatelab.Ads.AdManager$$.ctor
void Rotatelab_Ads_AdManager___ctor (Rotatelab_Ads_AdManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager$$.ctor
   void Rotatelab_Ads_AdManager___ctor (Rotatelab_Ads_AdManager_o* __this, const MethodInfo*
   method); */

int Rotatelab_Ads_AdManager___ctor_10f6604
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar1;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar1 = (char *)(_UNK_01106654 + 0x1106618);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01106658 + 0x110662c));
    *pcVar1 = '\x01';
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  *(undefined4 *)(param_1 + 0x3c) = 1;
  pcVar1 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar1 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0,param_3,param_4,unaff_r4,
                       unaff_r5,unaff_r11,unaff_lr);
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

