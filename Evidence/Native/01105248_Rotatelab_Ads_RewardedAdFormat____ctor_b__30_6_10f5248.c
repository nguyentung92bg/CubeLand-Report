/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$<.ctor>b__30_6
void Rotatelab_Ads_RewardedAdFormat____ctor_b__30_6 (Rotatelab_Ads_RewardedAdFormat_o* __this, System_String_o* id, MaxSdkBase_Reward_o reward, MaxSdkBase_AdInfo_o* info, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010ff118) */
/* WARNING: Removing unreachable block (ram,0x010ff100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$<.ctor>b__30_6
   void Rotatelab_Ads_RewardedAdFormat____ctor_b__30_6 (Rotatelab_Ads_RewardedAdFormat_o* __this,
   System_String_o* id, MaxSdkBase_Reward_o reward, MaxSdkBase_AdInfo_o* info, const MethodInfo*
   method); */

void Rotatelab_Ads_RewardedAdFormat____ctor_b__30_6_10f5248
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01105370 + 0x1105264);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105374 + 0x1105280));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105378 + 0x110528c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110537c + 0x1105298));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105380 + 0x11052a4));
    *pcVar4 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01105384 + 0x11052b8));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x18),param_1);
  *(undefined4 *)(iVar1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),param_2);
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0xc),0);
  *(undefined4 *)(iVar1 + 0x14) = param_5;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_5);
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01105388 + 0x1105324));
  System_Action___ctor_2b10bac(iVar2,iVar1,**(undefined4 **)(_UNK_0110538c + 0x1105340),0);
  if (*(int *)(**(int **)(_UNK_01105390 + 0x1105354) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar4 = (char *)(_UNK_010ff15c + 0x10ff020);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ff160 + 0x10ff034));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ff164 + 0x10ff040));
    *pcVar4 = '\x01';
  }
  if (iVar2 != 0) {
    piVar3 = *(int **)(_UNK_010ff168 + 0x10ff068);
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar3;
    }
    System_Threading_Monitor__Enter_2bdfb90(**(undefined4 **)(iVar1 + 0x5c),&stack0xffffffe3,0);
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar3;
    }
    if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Queue_object___Enqueue_18fca70
              (**(int **)(iVar1 + 0x5c),iVar2,**(undefined4 **)(_UNK_010ff16c + 0x10ff0e8));
  }
  return;
}

