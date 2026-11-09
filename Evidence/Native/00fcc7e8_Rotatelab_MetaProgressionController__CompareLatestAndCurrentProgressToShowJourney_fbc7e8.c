/* IL2CPP: Rotatelab.MetaProgressionController$$CompareLatestAndCurrentProgressToShowJourney
void Rotatelab_MetaProgressionController__CompareLatestAndCurrentProgressToShowJourney (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$CompareLatestAndCurrentProgressToShowJourney
   void Rotatelab_MetaProgressionController__CompareLatestAndCurrentProgressToShowJourney
   (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionController__CompareLatestAndCurrentProgressToShowJourney_fbc7e8
               (int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar7;
  undefined4 unaff_r6;
  
  pcVar7 = (char *)(_UNK_00fcca98 + 0xfcc7fc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcca9c + 0xfcc810));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccaa0 + 0xfcc81c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccaa4 + 0xfcc828));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccaa8 + 0xfcc834));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccaac + 0xfcc840));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccab0 + 0xfcc84c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccab4 + 0xfcc858));
    *pcVar7 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fccab8 + 0xfcc86c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar1 = (int *)Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = (**(code **)(*piVar1 + 0xf0))(piVar1,*(undefined4 *)(*piVar1 + 0xf4));
  piVar1 = *(int **)(_UNK_00fccabc + 0xfcc8b8);
  iVar3 = *piVar1;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar1;
  }
  if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x20) <= iVar2) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00fccac0 + 0xfcc8e8));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar2 + 0x14) + 0x10) == 0) {
      Rotatelab_MetaProgressionController__CheckInitialize_fbc6f0(param_1);
      iVar3 = *(int *)(param_1 + 0x44);
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar1 = *(int **)(iVar2 + 0x24);
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = (**(code **)(*piVar1 + 0xf0))(piVar1,*(undefined4 *)(*piVar1 + 0xf4));
      if (iVar3 < iVar2) {
        iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar1 = *(int **)(iVar2 + 0x24);
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar4 = (**(code **)(*piVar1 + 0xf0))(piVar1,*(undefined4 *)(*piVar1 + 0xf4));
        *(undefined4 *)(param_1 + 0x44) = uVar4;
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0x44);
      }
      iVar2 = Rotatelab_MetaProgressionController__GetStageIndex_fbdcf0(param_1,uVar4);
      iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar1 = *(int **)(iVar3 + 0x24);
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = (**(code **)(*piVar1 + 0xf0))(piVar1,*(undefined4 *)(*piVar1 + 0xf4));
      iVar3 = Rotatelab_MetaProgressionController__GetStageIndex_fbdcf0(param_1,uVar4);
      if (iVar2 != iVar3) {
        if (**(char **)(**(int **)(_UNK_00fccac4 + 0xfcca20) + 0x5c) != '\0') {
          return;
        }
        iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_00fccac8 + 0xfcca3c));
        uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fccacc + 0xfcca50));
        System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_00fccad0 + 0xfcca6c),0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        pcVar7 = (char *)(_UNK_0108a578 + 0x108a524);
        if (*pcVar7 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),2,uVar4,0,unaff_r4,unaff_r5,
                       unaff_r6);
          *pcVar7 = '\x01';
        }
        if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
                  (*(int *)(iVar2 + 0x10),2,uVar4,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
        if (*(char *)(iVar2 + 0x1c) != '\0') {
          return;
        }
        *(undefined1 *)(iVar2 + 0x1c) = 1;
        iVar3 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar2);
        if (iVar3 == 0) {
          thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
          uVar6 = thunk_FUN_00f00cdc();
          uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
          System_NullReferenceException___ctor_2b721e8(uVar6,uVar4,0);
        }
        else {
          iVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
          if (iVar5 != 0) {
            pcVar7 = (char *)(iRam036143f4 + 0x3614380);
            if (*pcVar7 == '\0') {
              thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
              *pcVar7 = '\x01';
            }
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar2 = *(int *)(iVar2 + 8);
            if (iVar2 != 0) {
              UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
              if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
                *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
              }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(iVar2,iVar3);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
          }
          thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
          uVar6 = thunk_FUN_00f00cdc();
          uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
          System_ArgumentException___ctor_2b113a4(uVar6,uVar4,0);
        }
        uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
        FUN_01f4fe28(uVar6,uVar4);
                    /* WARNING: Subroutine does not return */
        FUN_01f4fe2c();
      }
    }
  }
  return;
}

