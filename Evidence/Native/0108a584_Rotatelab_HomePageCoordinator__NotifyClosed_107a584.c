/* IL2CPP: Rotatelab.HomePageCoordinator$$NotifyClosed
void Rotatelab_HomePageCoordinator__NotifyClosed (Rotatelab_HomePageCoordinator_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.HomePageCoordinator$$NotifyClosed
   void Rotatelab_HomePageCoordinator__NotifyClosed (Rotatelab_HomePageCoordinator_o* __this,
   int32_t type, const MethodInfo* method); */

void Rotatelab_HomePageCoordinator__NotifyClosed_107a584(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_0108a5f4 + 0x108a59c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5f8 + 0x108a5b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5fc + 0x108a5bc));
    *pcVar5 = '\x01';
  }
  pcVar5 = (char *)(param_1 + 0x14);
  if ((*pcVar5 != '\0') && (*(int *)(param_1 + 0x18) == param_2)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  iVar1 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(param_1);
  if (iVar1 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0,extraout_r3,unaff_r4,unaff_r5);
    uVar3 = thunk_FUN_00f00cdc();
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
    System_NullReferenceException___ctor_2b721e8(uVar3,uVar4,0);
  }
  else {
    iVar2 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
    if (iVar2 != 0) {
      pcVar5 = (char *)(iRam036143f4 + 0x3614380);
      if (*pcVar5 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
        *pcVar5 = '\x01';
      }
      if (param_1 != 0) {
        iVar2 = *(int *)(param_1 + 8);
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
    uVar3 = thunk_FUN_00f00cdc();
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
    System_ArgumentException___ctor_2b113a4(uVar3,uVar4,0);
  }
  uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
  FUN_01f4fe28(uVar3,uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

