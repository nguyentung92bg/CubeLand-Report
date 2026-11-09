/* IL2CPP: Rotatelab.UI.ProfileManager$$OnMainCanvasChangeEndedHandler
void Rotatelab_UI_ProfileManager__OnMainCanvasChangeEndedHandler (Rotatelab_UI_ProfileManager_o* __this, int32_t mainCanvasType, bool arg2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileManager$$OnMainCanvasChangeEndedHandler
   void Rotatelab_UI_ProfileManager__OnMainCanvasChangeEndedHandler (Rotatelab_UI_ProfileManager_o*
   __this, int32_t mainCanvasType, bool arg2, const MethodInfo* method); */

void Rotatelab_UI_ProfileManager__OnMainCanvasChangeEndedHandler_11147f8
               (undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_01124950 + 0x1124810);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124954 + 0x1124824));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124958 + 0x1124830));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112495c + 0x112483c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124960 + 0x1124848));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124964 + 0x1124854));
    *pcVar7 = '\x01';
  }
  uVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (param_2 == 0) {
    uVar1 = (uint)*(byte *)(uVar1 + 0xb8);
  }
  if (param_2 != 0 || uVar1 != 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_01124968 + 0x1124894) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
  piVar8 = *(int **)(_UNK_0112496c + 0x11248c4);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar8;
  }
  if (iVar3 < *(int *)(*(int *)(iVar4 + 0x5c) + 0x14)) {
    return;
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01124970 + 0x11248f4));
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01124974 + 0x1124908));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_01124978 + 0x1124924),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_0108a578 + 0x108a524);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),0x11,uVar2,0,unaff_r4,unaff_r5,unaff_r6)
    ;
    *pcVar7 = '\x01';
  }
  if (*(int *)(iVar3 + 0x10) != 0) {
    System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
              (*(int *)(iVar3 + 0x10),0x11,uVar2,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
    if (*(char *)(iVar3 + 0x1c) != '\0') {
      return;
    }
    *(undefined1 *)(iVar3 + 0x1c) = 1;
    iVar4 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar3);
    if (iVar4 == 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
      uVar6 = thunk_FUN_00f00cdc();
      uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
      System_NullReferenceException___ctor_2b721e8(uVar6,uVar2,0);
    }
    else {
      iVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
      if (iVar5 != 0) {
        pcVar7 = (char *)(iRam036143f4 + 0x3614380);
        if (*pcVar7 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
          *pcVar7 = '\x01';
        }
        if (iVar3 != 0) {
          iVar3 = *(int *)(iVar3 + 8);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
          }
          UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
            *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
          }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(iVar3,iVar4);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
      uVar6 = thunk_FUN_00f00cdc();
      uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
      System_ArgumentException___ctor_2b113a4(uVar6,uVar2,0);
    }
    uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
    FUN_01f4fe28(uVar6,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_01f4fe2c();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

