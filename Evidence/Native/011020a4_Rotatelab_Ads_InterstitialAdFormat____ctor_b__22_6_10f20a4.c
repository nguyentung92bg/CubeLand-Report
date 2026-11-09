/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$<.ctor>b__22_6
void Rotatelab_Ads_InterstitialAdFormat____ctor_b__22_6 (Rotatelab_Ads_InterstitialAdFormat_o* __this, System_String_o* id, MaxSdkBase_AdInfo_o* __, MaxSdkBase_AdInfo_o* newInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010ff118) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$<.ctor>b__22_6
   void Rotatelab_Ads_InterstitialAdFormat____ctor_b__22_6 (Rotatelab_Ads_InterstitialAdFormat_o*
   __this, System_String_o* id, MaxSdkBase_AdInfo_o* __, MaxSdkBase_AdInfo_o* newInfo, const
   MethodInfo* method); */

void Rotatelab_Ads_InterstitialAdFormat____ctor_b__22_6_10f20a4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char cStack_1d;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_011021b0 + 0x11020c0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011021b4 + 0x11020d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011021b8 + 0x11020e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011021bc + 0x11020ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011021c0 + 0x11020f8));
    *pcVar4 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011021c4 + 0x110210c));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),param_2);
  *(undefined4 *)(iVar1 + 0xc) = param_4;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0xc),param_4);
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011021c8 + 0x1102164));
  System_Action___ctor_2b10bac(iVar2,iVar1,**(undefined4 **)(_UNK_011021cc + 0x1102180),0);
  if (*(int *)(**(int **)(_UNK_011021d0 + 0x1102194) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar4 = (char *)(_UNK_010ff15c + 0x10ff020);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ff160 + 0x10ff034));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ff164 + 0x10ff040));
    *pcVar4 = '\x01';
  }
  uStack_1c = 0;
  cStack_1d = '\0';
  if (iVar2 != 0) {
    piVar3 = *(int **)(_UNK_010ff168 + 0x10ff068);
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar3;
    }
    cStack_1d = '\0';
    uStack_1c = **(undefined4 **)(iVar1 + 0x5c);
    System_Threading_Monitor__Enter_2bdfb90(uStack_1c,&cStack_1d,0);
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
    if (cStack_1d != '\0') {
      System_Threading_Monitor__Exit_2be3444(uStack_1c,0);
    }
  }
  return;
}

