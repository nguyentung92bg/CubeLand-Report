/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$EnableNeftaOptimization
void Rotatelab_Ads_RewardedAdFormat__EnableNeftaOptimization (Rotatelab_Ads_RewardedAdFormat_o* __this, System_String_o* adUnitIdA, System_String_o* adUnitIdB, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$EnableNeftaOptimization
   void Rotatelab_Ads_RewardedAdFormat__EnableNeftaOptimization (Rotatelab_Ads_RewardedAdFormat_o*
   __this, System_String_o* adUnitIdA, System_String_o* adUnitIdB, const MethodInfo* method); */

void Rotatelab_Ads_RewardedAdFormat__EnableNeftaOptimization_10f44c4
               (int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)(_UNK_01104638 + 0x11044e4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110463c + 0x11044f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01104640 + 0x1104504));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01104644 + 0x1104510));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01104648 + 0x110451c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110464c + 0x1104528));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01104650 + 0x1104534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01104654 + 0x1104540));
    *pcVar5 = '\x01';
  }
  iVar6 = param_1[5];
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01104658 + 0x1104554));
  System_Action_object____ctor_1f11414(uVar1,0,**(undefined4 **)(_UNK_0110465c + 0x1104574),0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01104660 + 0x1104588));
  System_Func_object__bool____ctor_239b120(uVar2,0,**(undefined4 **)(_UNK_01104664 + 0x11045a4),0);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01104668 + 0x11045b8));
  System_Action_object__object__object____ctor_1f1af9c
            (uVar3,0,**(undefined4 **)(_UNK_0110466c + 0x11045d4),0);
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01104670 + 0x11045e8));
  Rotatelab_Ads_NeftaDualTrackLoader___ctor_10f0974(iVar4,iVar6,param_2,param_3,3,uVar1,uVar2,uVar3)
  ;
  param_1[0x15] = iVar4;
  thunk_FUN_00ec5080(param_1 + 0x15,iVar4);
                    /* WARNING: Could not recover jumptable at 0x01104634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

