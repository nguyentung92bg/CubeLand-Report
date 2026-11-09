/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$EnableNeftaOptimization
void Rotatelab_Ads_InterstitialAdFormat__EnableNeftaOptimization (Rotatelab_Ads_InterstitialAdFormat_o* __this, System_String_o* adUnitIdA, System_String_o* adUnitIdB, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$EnableNeftaOptimization
   void Rotatelab_Ads_InterstitialAdFormat__EnableNeftaOptimization
   (Rotatelab_Ads_InterstitialAdFormat_o* __this, System_String_o* adUnitIdA, System_String_o*
   adUnitIdB, const MethodInfo* method); */

void Rotatelab_Ads_InterstitialAdFormat__EnableNeftaOptimization_10f07c4
               (int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)(_UNK_01100938 + 0x11007e4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110093c + 0x11007f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100940 + 0x1100804));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100944 + 0x1100810));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100948 + 0x110081c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110094c + 0x1100828));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100950 + 0x1100834));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100954 + 0x1100840));
    *pcVar5 = '\x01';
  }
  iVar6 = param_1[5];
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01100958 + 0x1100854));
  System_Action_object____ctor_1f11414(uVar1,0,**(undefined4 **)(_UNK_0110095c + 0x1100874),0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01100960 + 0x1100888));
  System_Func_object__bool____ctor_239b120(uVar2,0,**(undefined4 **)(_UNK_01100964 + 0x11008a4),0);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01100968 + 0x11008b8));
  System_Action_object__object__object____ctor_1f1af9c
            (uVar3,0,**(undefined4 **)(_UNK_0110096c + 0x11008d4),0);
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01100970 + 0x11008e8));
  Rotatelab_Ads_NeftaDualTrackLoader___ctor_10f0974(iVar4,iVar6,param_2,param_3,2,uVar1,uVar2,uVar3)
  ;
  param_1[0x13] = iVar4;
  thunk_FUN_00ec5080(param_1 + 0x13,iVar4);
                    /* WARNING: Could not recover jumptable at 0x01100934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

