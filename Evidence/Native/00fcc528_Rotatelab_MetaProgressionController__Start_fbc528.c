/* IL2CPP: Rotatelab.MetaProgressionController$$Start
void Rotatelab_MetaProgressionController__Start (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$Start
   void Rotatelab_MetaProgressionController__Start (Rotatelab_MetaProgressionController_o* __this,
   const MethodInfo* method); */

void Rotatelab_MetaProgressionController__Start_fbc528(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar6;
  undefined4 unaff_r6;
  int iVar7;
  
  pcVar6 = (char *)(_UNK_00fcc6c0 + 0xfcc53c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc6c4 + 0xfcc550));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc6c8 + 0xfcc55c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc6cc + 0xfcc568));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc6d0 + 0xfcc574));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc6d4 + 0xfcc580));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcc6d8 + 0xfcc58c));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcc6dc + 0xfcc5b8));
  System_Action_long____ctor_1f10724(uVar2,param_1,**(undefined4 **)(_UNK_00fcc6e0 + 0xfcc5d8),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableValue_long___add_OnValueChanged_185d4e4
            (iVar1,uVar2,**(undefined4 **)(_UNK_00fcc6e4 + 0xfcc5fc));
  if (*(int *)(**(int **)(_UNK_00fcc6e8 + 0xfcc610) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar3 = (int *)Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar7,*(int *)(iVar7 + 0xc) + -1,**(undefined4 **)(_UNK_00fcc6ec + 0xfcc67c));
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar7 + 8);
  if (iVar1 < *(int *)(iVar7 + 8)) {
    iVar4 = iVar1;
  }
  *(int *)(param_1 + 0x44) = iVar4;
  Rotatelab_MetaProgressionController__CheckInitialize_fbc6f0(param_1);
  pcVar6 = (char *)(_UNK_00fcca98 + 0xfcc7fc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcca9c + 0xfcc810));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccaa0 + 0xfcc81c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccaa4 + 0xfcc828));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccaa8 + 0xfcc834));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccaac + 0xfcc840));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccab0 + 0xfcc84c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fccab4 + 0xfcc858));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fccab8 + 0xfcc86c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar3 = (int *)Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
  piVar3 = *(int **)(_UNK_00fccabc + 0xfcc8b8);
  iVar7 = *piVar3;
  if (*(int *)(iVar7 + 0x74) == 0) {
    FUN_00ec3934();
    iVar7 = *piVar3;
  }
  if (*(int *)(*(int *)(iVar7 + 0x5c) + 0x20) <= iVar1) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00fccac0 + 0xfcc8e8));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0x14) + 0x10) == 0) {
      Rotatelab_MetaProgressionController__CheckInitialize_fbc6f0(param_1);
      iVar7 = *(int *)(param_1 + 0x44);
      iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar3 = *(int **)(iVar1 + 0x24);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
      if (iVar7 < iVar1) {
        iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar3 = *(int **)(iVar1 + 0x24);
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
        *(undefined4 *)(param_1 + 0x44) = uVar2;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x44);
      }
      iVar1 = Rotatelab_MetaProgressionController__GetStageIndex_fbdcf0(param_1,uVar2);
      iVar7 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar3 = *(int **)(iVar7 + 0x24);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
      iVar7 = Rotatelab_MetaProgressionController__GetStageIndex_fbdcf0(param_1,uVar2);
      if (iVar1 != iVar7) {
        if (**(char **)(**(int **)(_UNK_00fccac4 + 0xfcca20) + 0x5c) != '\0') {
          return;
        }
        iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_00fccac8 + 0xfcca3c));
        uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fccacc + 0xfcca50));
        System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_00fccad0 + 0xfcca6c),0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        pcVar6 = (char *)(_UNK_0108a578 + 0x108a524);
        if (*pcVar6 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),2,uVar2,0,unaff_r4,unaff_r5,
                       unaff_r6);
          *pcVar6 = '\x01';
        }
        if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
                  (*(int *)(iVar1 + 0x10),2,uVar2,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
        if (*(char *)(iVar1 + 0x1c) != '\0') {
          return;
        }
        *(undefined1 *)(iVar1 + 0x1c) = 1;
        iVar7 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar1);
        if (iVar7 == 0) {
          thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
          uVar5 = thunk_FUN_00f00cdc();
          uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
          System_NullReferenceException___ctor_2b721e8(uVar5,uVar2,0);
        }
        else {
          iVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
          if (iVar4 != 0) {
            pcVar6 = (char *)(iRam036143f4 + 0x3614380);
            if (*pcVar6 == '\0') {
              thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
              *pcVar6 = '\x01';
            }
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar1 = *(int *)(iVar1 + 8);
            if (iVar1 != 0) {
              UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
              if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
                *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
              }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(iVar1,iVar7);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
          }
          thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
          uVar5 = thunk_FUN_00f00cdc();
          uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
          System_ArgumentException___ctor_2b113a4(uVar5,uVar2,0);
        }
        uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
        FUN_01f4fe28(uVar5,uVar2);
                    /* WARNING: Subroutine does not return */
        FUN_01f4fe2c();
      }
    }
  }
  return;
}

