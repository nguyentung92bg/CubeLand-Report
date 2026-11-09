/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$<RequestPopup>b__53_0
void Rotatelab_CloudRush_CloudRushController___RequestPopup_b__53_0 (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$<RequestPopup>b__53_0
   void Rotatelab_CloudRush_CloudRushController___RequestPopup_b__53_0
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController___RequestPopup_b__53_0_10de9fc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int *piVar6;
  undefined4 unaff_r5;
  char *pcVar7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar7 = (char *)(_UNK_010eeac8 + 0x10eea10);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eeacc + 0x10eea24));
    *pcVar7 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x10),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_GameObject__get_activeSelf_360212c(iVar2,0);
  if (iVar2 == 0) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010eead0 + 0x10eeaa0));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar7 = (char *)(_UNK_0108a5f4 + 0x108a59c);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5f8 + 0x108a5b0),0x12,0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5fc + 0x108a5bc));
      *pcVar7 = '\x01';
    }
    pcVar7 = (char *)(iVar2 + 0x14);
    if ((*pcVar7 != '\0') && (*(int *)(iVar2 + 0x18) == 0x12)) {
      *(undefined4 *)(iVar2 + 0x18) = 0;
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
    }
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      *(undefined1 *)(iVar2 + 0x1c) = 1;
      iVar1 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar2);
      if (iVar1 == 0) {
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0,extraout_r3,unaff_r4,
                           unaff_r5,unaff_r11,unaff_lr);
        uVar4 = thunk_FUN_00f00cdc();
        uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
        System_NullReferenceException___ctor_2b721e8(uVar4,uVar5,0);
      }
      else {
        iVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
        if (iVar3 != 0) {
          pcVar7 = (char *)(iRam036143f4 + 0x3614380);
          if (*pcVar7 == '\0') {
            thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
            *pcVar7 = '\x01';
          }
          if (iVar2 != 0) {
            iVar2 = *(int *)(iVar2 + 8);
            if (iVar2 == 0) {
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
            (*UNRECOVERED_JUMPTABLE)(iVar2,iVar1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
        uVar4 = thunk_FUN_00f00cdc();
        uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
        System_ArgumentException___ctor_2b113a4(uVar4,uVar5,0);
      }
      uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
      FUN_01f4fe28(uVar4,uVar5);
                    /* WARNING: Subroutine does not return */
      FUN_01f4fe2c();
    }
    return;
  }
  piVar6 = *(int **)(param_1 + 0x10);
  if (piVar6 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x010eea90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar6 + 0x138))(piVar6,*(undefined4 *)(*piVar6 + 0x13c));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

