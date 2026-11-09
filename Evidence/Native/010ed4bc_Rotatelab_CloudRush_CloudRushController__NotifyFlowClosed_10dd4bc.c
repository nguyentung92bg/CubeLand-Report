/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$NotifyFlowClosed
void Rotatelab_CloudRush_CloudRushController__NotifyFlowClosed (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$NotifyFlowClosed
   void Rotatelab_CloudRush_CloudRushController__NotifyFlowClosed
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController__NotifyFlowClosed_10dd4bc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar7 = (char *)(_UNK_010ed528 + 0x10ed4d0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed52c + 0x10ed4e4));
    *pcVar7 = '\x01';
  }
  puVar2 = *(undefined4 **)(_UNK_010ed530 + 0x10ed4fc);
  *(undefined1 *)(param_1 + 0x20) = 0;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_0108a5f4 + 0x108a59c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5f8 + 0x108a5b0),0x12,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5fc + 0x108a5bc));
    *pcVar7 = '\x01';
  }
  pcVar7 = (char *)(iVar3 + 0x14);
  if ((*pcVar7 != '\0') && (*(int *)(iVar3 + 0x18) == 0x12)) {
    *(undefined4 *)(iVar3 + 0x18) = 0;
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
  }
  if (*(char *)(iVar3 + 0x1c) == '\0') {
    *(undefined1 *)(iVar3 + 0x1c) = 1;
    iVar1 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar3);
    if (iVar1 == 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0,extraout_r3,unaff_r4,unaff_r5
                         ,unaff_r11,unaff_lr);
      uVar5 = thunk_FUN_00f00cdc();
      uVar6 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
      System_NullReferenceException___ctor_2b721e8(uVar5,uVar6,0);
    }
    else {
      iVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
      if (iVar4 != 0) {
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
          (*UNRECOVERED_JUMPTABLE)(iVar3,iVar1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
      uVar5 = thunk_FUN_00f00cdc();
      uVar6 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
      System_ArgumentException___ctor_2b113a4(uVar5,uVar6,0);
    }
    uVar6 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
    FUN_01f4fe28(uVar5,uVar6);
                    /* WARNING: Subroutine does not return */
    FUN_01f4fe2c();
  }
  return;
}

